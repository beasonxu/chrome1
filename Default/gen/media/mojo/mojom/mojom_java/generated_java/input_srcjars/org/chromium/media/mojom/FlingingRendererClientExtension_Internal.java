// FlingingRendererClientExtension_Internal.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     media/mojo/mojom/renderer_extensions.mojom
//

package org.chromium.media.mojom;

import androidx.annotation.IntDef;


class FlingingRendererClientExtension_Internal {

    public static final org.chromium.mojo.bindings.Interface.Manager<FlingingRendererClientExtension, FlingingRendererClientExtension.Proxy> MANAGER =
            new org.chromium.mojo.bindings.Interface.Manager<FlingingRendererClientExtension, FlingingRendererClientExtension.Proxy>() {

        @Override
        public String getName() {
            return "media.mojom.FlingingRendererClientExtension";
        }

        @Override
        public int getVersion() {
          return 0;
        }

        @Override
        public Proxy buildProxy(org.chromium.mojo.system.Core core,
                                org.chromium.mojo.bindings.MessageReceiverWithResponder messageReceiver) {
            return new Proxy(core, messageReceiver);
        }

        @Override
        public Stub buildStub(org.chromium.mojo.system.Core core, FlingingRendererClientExtension impl) {
            return new Stub(core, impl);
        }

        @Override
        public FlingingRendererClientExtension[] buildArray(int size) {
          return new FlingingRendererClientExtension[size];
        }
    };


    private static final int ON_REMOTE_PLAY_STATE_CHANGE_ORDINAL = 0;


    static final class Proxy extends org.chromium.mojo.bindings.Interface.AbstractProxy implements FlingingRendererClientExtension.Proxy {

        Proxy(org.chromium.mojo.system.Core core,
              org.chromium.mojo.bindings.MessageReceiverWithResponder messageReceiver) {
            super(core, messageReceiver);
        }


        @Override
        public void onRemotePlayStateChange(
int state) {

            FlingingRendererClientExtensionOnRemotePlayStateChangeParams _message = new FlingingRendererClientExtensionOnRemotePlayStateChangeParams();

            _message.state = state;


            getProxyHandler().getMessageReceiver().accept(
                    _message.serializeWithHeader(
                            getProxyHandler().getCore(),
                            new org.chromium.mojo.bindings.MessageHeader(ON_REMOTE_PLAY_STATE_CHANGE_ORDINAL)));

        }


    }

    static final class Stub extends org.chromium.mojo.bindings.Interface.Stub<FlingingRendererClientExtension> {

        Stub(org.chromium.mojo.system.Core core, FlingingRendererClientExtension impl) {
            super(core, impl);
        }

        @Override
        public boolean accept(org.chromium.mojo.bindings.Message message) {
            try {
                org.chromium.mojo.bindings.ServiceMessage messageWithHeader =
                        message.asServiceMessage();
                org.chromium.mojo.bindings.MessageHeader header = messageWithHeader.getHeader();
                int flags = org.chromium.mojo.bindings.MessageHeader.NO_FLAG;
                if (header.hasFlag(org.chromium.mojo.bindings.MessageHeader.MESSAGE_IS_SYNC_FLAG)) {
                    flags = flags | org.chromium.mojo.bindings.MessageHeader.MESSAGE_IS_SYNC_FLAG;
                }
                if (!header.validateHeader(flags)) {
                    return false;
                }
                switch(header.getType()) {

                    case org.chromium.mojo.bindings.interfacecontrol.InterfaceControlMessagesConstants.RUN_OR_CLOSE_PIPE_MESSAGE_ID:
                        return org.chromium.mojo.bindings.InterfaceControlMessagesHelper.handleRunOrClosePipe(
                                FlingingRendererClientExtension_Internal.MANAGER, messageWithHeader);





                    case ON_REMOTE_PLAY_STATE_CHANGE_ORDINAL: {

                        FlingingRendererClientExtensionOnRemotePlayStateChangeParams data =
                                FlingingRendererClientExtensionOnRemotePlayStateChangeParams.deserialize(messageWithHeader.getPayload());

                        getImpl().onRemotePlayStateChange(data.state);
                        return true;
                    }


                    default:
                        return false;
                }
            } catch (org.chromium.mojo.bindings.DeserializationException e) {
                System.err.println(e.toString());
                return false;
            }
        }

        @Override
        public boolean acceptWithResponder(org.chromium.mojo.bindings.Message message, org.chromium.mojo.bindings.MessageReceiver receiver) {
            try {
                org.chromium.mojo.bindings.ServiceMessage messageWithHeader =
                        message.asServiceMessage();
                org.chromium.mojo.bindings.MessageHeader header = messageWithHeader.getHeader();
                int flags = org.chromium.mojo.bindings.MessageHeader.MESSAGE_EXPECTS_RESPONSE_FLAG;
                if (header.hasFlag(org.chromium.mojo.bindings.MessageHeader.MESSAGE_IS_SYNC_FLAG)) {
                    flags = flags | org.chromium.mojo.bindings.MessageHeader.MESSAGE_IS_SYNC_FLAG;
                }
                if (!header.validateHeader(flags)) {
                    return false;
                }
                switch(header.getType()) {

                    case org.chromium.mojo.bindings.interfacecontrol.InterfaceControlMessagesConstants.RUN_MESSAGE_ID:
                        return org.chromium.mojo.bindings.InterfaceControlMessagesHelper.handleRun(
                                getCore(), FlingingRendererClientExtension_Internal.MANAGER, messageWithHeader, receiver);




                    default:
                        return false;
                }
            } catch (org.chromium.mojo.bindings.DeserializationException e) {
                System.err.println(e.toString());
                return false;
            }
        }
    }


    
    static final class FlingingRendererClientExtensionOnRemotePlayStateChangeParams extends org.chromium.mojo.bindings.Struct {

        private static final int STRUCT_SIZE = 16;
        private static final org.chromium.mojo.bindings.DataHeader[] VERSION_ARRAY = new org.chromium.mojo.bindings.DataHeader[] {new org.chromium.mojo.bindings.DataHeader(16, 0)};
        private static final org.chromium.mojo.bindings.DataHeader DEFAULT_STRUCT_INFO = VERSION_ARRAY[0];
        public int state;

        private FlingingRendererClientExtensionOnRemotePlayStateChangeParams(int version) {
            super(STRUCT_SIZE, version);
        }

        public FlingingRendererClientExtensionOnRemotePlayStateChangeParams() {
            this(0);
        }

        public static FlingingRendererClientExtensionOnRemotePlayStateChangeParams deserialize(org.chromium.mojo.bindings.Message message) {
            return decode(new org.chromium.mojo.bindings.Decoder(message));
        }

        /**
         * Similar to the method above, but deserializes from a |ByteBuffer| instance.
         *
         * @throws org.chromium.mojo.bindings.DeserializationException on deserialization failure.
         */
        public static FlingingRendererClientExtensionOnRemotePlayStateChangeParams deserialize(java.nio.ByteBuffer data) {
            return deserialize(new org.chromium.mojo.bindings.Message(
                    data, new java.util.ArrayList<org.chromium.mojo.system.Handle>()));
        }

        @SuppressWarnings("unchecked")
        public static FlingingRendererClientExtensionOnRemotePlayStateChangeParams decode(org.chromium.mojo.bindings.Decoder decoder0) {
            if (decoder0 == null) {
                return null;
            }
            decoder0.increaseStackDepth();
            FlingingRendererClientExtensionOnRemotePlayStateChangeParams result;
            try {
                org.chromium.mojo.bindings.DataHeader mainDataHeader = decoder0.readAndValidateDataHeader(VERSION_ARRAY);
                final int elementsOrVersion = mainDataHeader.elementsOrVersion;
                result = new FlingingRendererClientExtensionOnRemotePlayStateChangeParams(elementsOrVersion);
                    {
                        
                    result.state = decoder0.readInt(8);
                        MediaStatusState.validate(result.state);
                        result.state = MediaStatusState.toKnownValue(result.state);
                    }

            } finally {
                decoder0.decreaseStackDepth();
            }
            return result;
        }

        @SuppressWarnings("unchecked")
        @Override
        protected final void encode(org.chromium.mojo.bindings.Encoder encoder) {
            org.chromium.mojo.bindings.Encoder encoder0 = encoder.getEncoderAtDataOffset(DEFAULT_STRUCT_INFO);
            
            encoder0.encode(this.state, 8);
        }
    }



}
