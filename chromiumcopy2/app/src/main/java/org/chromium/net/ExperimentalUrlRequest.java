// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
package org.chromium.net;

import java.util.concurrent.Executor;

/**
 * {@link UrlRequest} that exposes experimental features. To obtain an
 * instance of this class, cast a {@code UrlRequest} to this type. Every
 * instance of {@code UrlRequest} can be cast to an instance of this class,
 * as they are backed by the same implementation and hence perform identically.
 * Instances of this class are not meant for general use, but instead only
 * to access experimental features. Experimental features may be deprecated in the
 * future. Use at your own risk.
 *
 * {@hide since this class exposes experimental features that should be hidden}.
 */
public abstract class ExperimentalUrlRequest extends UrlRequest {
    /**
     * {@link UrlRequest#Builder} that exposes experimental features. To obtain an
     * instance of this class, cast a {@code UrlRequest.Builder} to this type. Every
     * instance of {@code UrlRequest.Builder} can be cast to an instance of this class,
     * as they are backed by the same implementation and hence perform identically.
     * Instances of this class are not meant for general use, but instead only
     * to access experimental features. Experimental features may be deprecated in the
     * future. Use at your own risk.
     */
    public abstract static class Builder extends UrlRequest.Builder {
        /**
         * Disables connection migration for the request if enabled for
         * the session.
         * @return the builder to facilitate chaining.
         */
        public Builder disableConnectionMigration() {
            return this;
        }

        /**
         * Associates the annotation object with this request. May add more than one.
         * Passed through to a {@link RequestFinishedInfo.Listener},
         * see {@link RequestFinishedInfo#getAnnotations}.
         *
         * @param annotation an object to pass on to the {@link RequestFinishedInfo.Listener} with a
         * {@link RequestFinishedInfo}.
         * @return the builder to facilitate chaining.
         */
        public Builder addRequestAnnotation(Object annotation) {
            return this;
        }

        /**
         * Sets {@link android.net.TrafficStats} tag to use when accounting socket traffic caused by
         * this request. See {@link android.net.TrafficStats} for more information. If no tag is
         * set (e.g. this method isn't called), then Android accounts for the socket traffic caused
         * by this request as if the tag value were set to 0.
         * <p>
         * <b>NOTE:</b>Setting a tag disallows sharing of sockets with requests
         * with other tags, which may adversely effect performance by prohibiting
         * connection sharing. In other words use of multiplexed sockets (e.g. HTTP/2
         * and QUIC) will only be allowed if all requests have the same socket tag.
         *
         * @param tag the tag value used to when accounting for socket traffic caused by this
         *            request. Tags between 0xFFFFFF00 and 0xFFFFFFFF are reserved and used
         *            internally by system services like {@link android.app.DownloadManager} when
         *            performing traffic on behalf of an application.
         * @return the builder to facilitate chaining.
         */
        public Builder setTrafficStatsTag(int tag) {
            return this;
        }

        /**
         * Sets specific UID to use when accounting socket traffic caused by this request. See
         * {@link android.net.TrafficStats} for more information. Designed for use when performing
         * an operation on behalf of another application. Caller must hold
         * {@link android.Manifest.permission#MODIFY_NETWORK_ACCOUNTING} permission. By default
         * traffic is attributed to UID of caller.
         * <p>
         * <b>NOTE:</b>Setting a UID disallows sharing of sockets with requests
         * with other UIDs, which may adversely effect performance by prohibiting
         * connection sharing. In other words use of multiplexed sockets (e.g. HTTP/2
         * and QUIC) will only be allowed if all requests have the same UID set.
         *
         * @param uid the UID to attribute socket traffic caused by this request.
         * @return the builder to facilitate chaining.
         */
        public Builder setTrafficStatsUid(int uid) {
            return this;
        }

        /**
         * Sets a listener that gets invoked after {@link Callback#onCanceled onCanceled()},
         * {@link Callback#onFailed onFailed()} or {@link Callback#onSucceeded onSucceeded()}
         * return.
         *
         * <p>The listener is invoked  with the request finished info on an
         * {@link java.util.concurrent.Executor} provided by
         * {@link RequestFinishedInfo.Listener#getExecutor getExecutor()}.
         *
         * @param listener the listener for finished requests.
         * @return the builder to facilitate chaining.
         */
        public Builder setRequestFinishedListener(RequestFinishedInfo.Listener listener) {
            return this;
        }

        /**
         * Binds the request to the specified network handle. Cronet will send this request only
         * using the network associated to this handle. If this network disconnects the request will
         * fail, the exact error will depend on the stage of request processing when the network
         * disconnects. Network handles can be obtained through {@code Network#getNetworkHandle}.
         * Only available starting from Android Marshmallow.
         *
         * @param networkHandle the network handle to bind the request to. Specify
         *        {@link ExperimentalCronetEngine#UNBIND_NETWORK_HANDLE} to unbind.
         * @return the builder to facilitate chaining.
         */
        public Builder bindToNetwork(long networkHandle) {
            return this;
        }

        /**
         * Default request idempotency, only enable 0-RTT for safe HTTP methods. Passed to {@link
         * #setIdempotency}.
         */
        public static final int DEFAULT_IDEMPOTENCY = 0;

        /**
         * Request is idempotent. Passed to {@link #setIdempotency}.
         */
        public static final int IDEMPOTENT = 1;

        /**
         * Request is not idempotent. Passed to {@link #setIdempotency}.
         */
        public static final int NOT_IDEMPOTENT = 2;

        /**
         * Sets idempotency of the request which should be one of the {@link #DEFAULT_IDEMPOTENCY
         * IDEMPOTENT NOT_IDEMPOTENT} values. The default idempotency indicates that 0-RTT is only
         * enabled for safe HTTP methods (GET, HEAD, OPTIONS, and TRACE).
         *
         * @param idempotency idempotency of the request which should be one of the {@link
         *         #DEFAULT_IDEMPOTENCY IDEMPOTENT NOT_IDEMPOTENT} values.
         * @return the builder to facilitate chaining.
         */
        public Builder setIdempotency(int idempotency) {
            return this;
        }

        // To support method chaining, override superclass methods to return an
        // instance of this class instead of the parent.

        @Override
        public abstract Builder setHttpMethod(String method);

        @Override
        public abstract Builder addHeader(String header, String value);

        @Override
        public abstract Builder disableCache();

        @Override
        public abstract Builder setPriority(int priority);

        @Override
        public abstract Builder setUploadDataProvider(
                UploadDataProvider uploadDataProvider, Executor executor);

        @Override
        public abstract Builder allowDirectExecutor();

        @Override
        public abstract ExperimentalUrlRequest build();
    }
}
