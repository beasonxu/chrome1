// WebTransportClient_Internal.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     services/network/public/mojom/web_transport.mojom
//

package org.chromium.network.mojom;

import androidx.annotation.IntDef;


class WebTransportClient_Internal {

    public static final org.chromium.mojo.bindings.Interface.Manager<WebTransportClient, WebTransportClient.Proxy> MANAGER =
            new org.chromium.mojo.bindings.Interface.Manager<WebTransportClient, WebTransportClient.Proxy>() {

        @Override
        public String getName() {
            return "network.mojom.WebTransportClient";
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
        public Stub buildStub(org.chromium.mojo.system.Core core, WebTransportClient impl) {
            return new Stub(core, impl);
        }

        @Override
        public WebTransportClient[] buildArray(int size) {
          return new WebTransportClient[size];
        }
    };


    private static final int ON_DATAGRAM_RECEIVED_ORDINAL = 0;

    private static final int ON_INCOMING_STREAM_CLOSED_ORDINAL = 1;

    private static final int ON_OUTGOING_STREAM_CLOSED_ORDINAL = 2;

    private static final int ON_RECEIVED_STOP_SENDING_ORDINAL = 3;

    private static final int ON_RECEIVED_RESET_STREAM_ORDINAL = 4;

    private static final int ON_CLOSED_ORDINAL = 5;


    static final class Proxy extends org.chromium.mojo.bindings.Interface.AbstractProxy implements WebTransportClient.Proxy {

        Proxy(org.chromium.mojo.system.Core core,
              org.chromium.mojo.bindings.MessageReceiverWithResponder messageReceiver) {
            super(core, messageReceiver);
        }


        @Override
        public void onDatagramReceived(
org.chromium.mojo_base.mojom.ReadOnlyBuffer data) {

            WebTransportClientOnDatagramReceivedParams _message = new WebTransportClientOnDatagramReceivedParams();

            _message.data = data;


            getProxyHandler().getMessageReceiver().accept(
                    _message.serializeWithHeader(
                            getProxyHandler().getCore(),
                            new org.chromium.mojo.bindings.MessageHeader(ON_DATAGRAM_RECEIVED_ORDINAL)));

        }


        @Override
        public void onIncomingStreamClosed(
int streamId, boolean finReceived) {

            WebTransportClientOnIncomingStreamClosedParams _message = new WebTransportClientOnIncomingStreamClosedParams();

            _message.streamId = streamId;

            _message.finReceived = finReceived;


            getProxyHandler().getMessageReceiver().accept(
                    _message.serializeWithHeader(
                            getProxyHandler().getCore(),
                            new org.chromium.mojo.bindings.MessageHeader(ON_INCOMING_STREAM_CLOSED_ORDINAL)));

        }


        @Override
        public void onOutgoingStreamClosed(
int streamId) {

            WebTransportClientOnOutgoingStreamClosedParams _message = new WebTransportClientOnOutgoingStreamClosedParams();

            _message.streamId = streamId;


            getProxyHandler().getMessageReceiver().accept(
                    _message.serializeWithHeader(
                            getProxyHandler().getCore(),
                            new org.chromium.mojo.bindings.MessageHeader(ON_OUTGOING_STREAM_CLOSED_ORDINAL)));

        }


        @Override
        public void onReceivedStopSending(
int streamId, byte code) {

            WebTransportClientOnReceivedStopSendingParams _message = new WebTransportClientOnReceivedStopSendingParams();

            _message.streamId = streamId;

            _message.code = code;


            getProxyHandler().getMessageReceiver().accept(
                    _message.serializeWithHeader(
                            getProxyHandler().getCore(),
                            new org.chromium.mojo.bindings.MessageHeader(ON_RECEIVED_STOP_SENDING_ORDINAL)));

        }


        @Override
        public void onReceivedResetStream(
int streamId, byte code) {

            WebTransportClientOnReceivedResetStreamParams _message = new WebTransportClientOnReceivedResetStreamParams();

            _message.streamId = streamId;

            _message.code = code;


            getProxyHandler().getMessageReceiver().accept(
                    _message.serializeWithHeader(
                            getProxyHandler().getCore(),
                            new org.chromium.mojo.bindings.MessageHeader(ON_RECEIVED_RESET_STREAM_ORDINAL)));

        }


        @Override
        public void onClosed(
WebTransportCloseInfo closeInfo) {

            WebTransportClientOnClosedParams _message = new WebTransportClientOnClosedParams();

            _message.closeInfo = closeInfo;


            getProxyHandler().getMessageReceiver().accept(
                    _message.serializeWithHeader(
                            getProxyHandler().getCore(),
                            new org.chromium.mojo.bindings.MessageHeader(ON_CLOSED_ORDINAL)));

        }


    }

    static final class Stub extends org.chromium.mojo.bindings.Interface.Stub<WebTransportClient> {

        Stub(org.chromium.mojo.system.Core core, WebTransportClient impl) {
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
                                WebTransportClient_Internal.MANAGER, messageWithHeader);





                    case ON_DATAGRAM_RECEIVED_ORDINAL: {

                        WebTransportClientOnDatagramReceivedParams data =
                                WebTransportClientOnDatagramReceivedParams.deserialize(messageWithHeader.getPayload());

                        getImpl().onDatagramReceived(data.data);
                        return true;
                    }





                    case ON_INCOMING_STREAM_CLOSED_ORDINAL: {

                        WebTransportClientOnIncomingStreamClosedParams data =
                                WebTransportClientOnIncomingStreamClosedParams.deserialize(messageWithHeader.getPayload());

                        getImpl().onIncomingStreamClosed(data.streamId, data.finReceived);
                        return true;
                    }





                    case ON_OUTGOING_STREAM_CLOSED_ORDINAL: {

                        WebTransportClientOnOutgoingStreamClosedParams data =
                                WebTransportClientOnOutgoingStreamClosedParams.deserialize(messageWithHeader.getPayload());

                        getImpl().onOutgoingStreamClosed(data.streamId);
                        return true;
                    }





                    case ON_RECEIVED_STOP_SENDING_ORDINAL: {

                        WebTransportClientOnReceivedStopSendingParams data =
                                WebTransportClientOnReceivedStopSendingParams.deserialize(messageWithHeader.getPayload());

                        getImpl().onReceivedStopSending(data.streamId, data.code);
                        return true;
                    }





                    case ON_RECEIVED_RESET_STREAM_ORDINAL: {

                        WebTransportClientOnReceivedResetStreamParams data =
                                WebTransportClientOnReceivedResetStreamParams.deserialize(messageWithHeader.getPayload());

                        getImpl().onReceivedResetStream(data.streamId, data.code);
                        return true;
                    }





                    case ON_CLOSED_ORDINAL: {

                        WebTransportClientOnClosedParams data =
                                WebTransportClientOnClosedParams.deserialize(messageWithHeader.getPayload());

                        getImpl().onClosed(data.closeInfo);
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
                                getCore(), WebTransportClient_Internal.MANAGER, messageWithHeader, receiver);














                    default:
                        return false;
                }
            } catch (org.chromium.mojo.bindings.DeserializationException e) {
                System.err.println(e.toString());
                return false;
            }
        }
    }


    
    static final class WebTransportClientOnDatagramReceivedParams extends org.chromium.mojo.bindings.Struct {

        private static final int STRUCT_SIZE = 16;
        private static final org.chromium.mojo.bindings.DataHeader[] VERSION_ARRAY = new org.chromium.mojo.bindings.DataHeader[] {new org.chromium.mojo.bindings.DataHeader(16, 0)};
        private static final org.chromium.mojo.bindings.DataHeader DEFAULT_STRUCT_INFO = VERSION_ARRAY[0];
        public org.chromium.mojo_base.mojom.ReadOnlyBuffer data;

        private WebTransportClientOnDatagramReceivedParams(int version) {
            super(STRUCT_SIZE, version);
        }

        public WebTransportClientOnDatagramReceivedParams() {
            this(0);
        }

        public static WebTransportClientOnDatagramReceivedParams deserialize(org.chromium.mojo.bindings.Message message) {
            return decode(new org.chromium.mojo.bindings.Decoder(message));
        }

        /**
         * Similar to the method above, but deserializes from a |ByteBuffer| instance.
         *
         * @throws org.chromium.mojo.bindings.DeserializationException on deserialization failure.
         */
        public static WebTransportClientOnDatagramReceivedParams deserialize(java.nio.ByteBuffer data) {
            return deserialize(new org.chromium.mojo.bindings.Message(
                    data, new java.util.ArrayList<org.chromium.mojo.system.Handle>()));
        }

        @SuppressWarnings("unchecked")
        public static WebTransportClientOnDatagramReceivedParams decode(org.chromium.mojo.bindings.Decoder decoder0) {
            if (decoder0 == null) {
                return null;
            }
            decoder0.increaseStackDepth();
            WebTransportClientOnDatagramReceivedParams result;
            try {
                org.chromium.mojo.bindings.DataHeader mainDataHeader = decoder0.readAndValidateDataHeader(VERSION_ARRAY);
                final int elementsOrVersion = mainDataHeader.elementsOrVersion;
                result = new WebTransportClientOnDatagramReceivedParams(elementsOrVersion);
                    {
                        
                    org.chromium.mojo.bindings.Decoder decoder1 = decoder0.readPointer(8, false);
                    result.data = org.chromium.mojo_base.mojom.ReadOnlyBuffer.decode(decoder1);
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
            
            encoder0.encode(this.data, 8, false);
        }
    }



    
    static final class WebTransportClientOnIncomingStreamClosedParams extends org.chromium.mojo.bindings.Struct {

        private static final int STRUCT_SIZE = 16;
        private static final org.chromium.mojo.bindings.DataHeader[] VERSION_ARRAY = new org.chromium.mojo.bindings.DataHeader[] {new org.chromium.mojo.bindings.DataHeader(16, 0)};
        private static final org.chromium.mojo.bindings.DataHeader DEFAULT_STRUCT_INFO = VERSION_ARRAY[0];
        public int streamId;
        public boolean finReceived;

        private WebTransportClientOnIncomingStreamClosedParams(int version) {
            super(STRUCT_SIZE, version);
        }

        public WebTransportClientOnIncomingStreamClosedParams() {
            this(0);
        }

        public static WebTransportClientOnIncomingStreamClosedParams deserialize(org.chromium.mojo.bindings.Message message) {
            return decode(new org.chromium.mojo.bindings.Decoder(message));
        }

        /**
         * Similar to the method above, but deserializes from a |ByteBuffer| instance.
         *
         * @throws org.chromium.mojo.bindings.DeserializationException on deserialization failure.
         */
        public static WebTransportClientOnIncomingStreamClosedParams deserialize(java.nio.ByteBuffer data) {
            return deserialize(new org.chromium.mojo.bindings.Message(
                    data, new java.util.ArrayList<org.chromium.mojo.system.Handle>()));
        }

        @SuppressWarnings("unchecked")
        public static WebTransportClientOnIncomingStreamClosedParams decode(org.chromium.mojo.bindings.Decoder decoder0) {
            if (decoder0 == null) {
                return null;
            }
            decoder0.increaseStackDepth();
            WebTransportClientOnIncomingStreamClosedParams result;
            try {
                org.chromium.mojo.bindings.DataHeader mainDataHeader = decoder0.readAndValidateDataHeader(VERSION_ARRAY);
                final int elementsOrVersion = mainDataHeader.elementsOrVersion;
                result = new WebTransportClientOnIncomingStreamClosedParams(elementsOrVersion);
                    {
                        
                    result.streamId = decoder0.readInt(8);
                    }
                    {
                        
                    result.finReceived = decoder0.readBoolean(12, 0);
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
            
            encoder0.encode(this.streamId, 8);
            
            encoder0.encode(this.finReceived, 12, 0);
        }
    }



    
    static final class WebTransportClientOnOutgoingStreamClosedParams extends org.chromium.mojo.bindings.Struct {

        private static final int STRUCT_SIZE = 16;
        private static final org.chromium.mojo.bindings.DataHeader[] VERSION_ARRAY = new org.chromium.mojo.bindings.DataHeader[] {new org.chromium.mojo.bindings.DataHeader(16, 0)};
        private static final org.chromium.mojo.bindings.DataHeader DEFAULT_STRUCT_INFO = VERSION_ARRAY[0];
        public int streamId;

        private WebTransportClientOnOutgoingStreamClosedParams(int version) {
            super(STRUCT_SIZE, version);
        }

        public WebTransportClientOnOutgoingStreamClosedParams() {
            this(0);
        }

        public static WebTransportClientOnOutgoingStreamClosedParams deserialize(org.chromium.mojo.bindings.Message message) {
            return decode(new org.chromium.mojo.bindings.Decoder(message));
        }

        /**
         * Similar to the method above, but deserializes from a |ByteBuffer| instance.
         *
         * @throws org.chromium.mojo.bindings.DeserializationException on deserialization failure.
         */
        public static WebTransportClientOnOutgoingStreamClosedParams deserialize(java.nio.ByteBuffer data) {
            return deserialize(new org.chromium.mojo.bindings.Message(
                    data, new java.util.ArrayList<org.chromium.mojo.system.Handle>()));
        }

        @SuppressWarnings("unchecked")
        public static WebTransportClientOnOutgoingStreamClosedParams decode(org.chromium.mojo.bindings.Decoder decoder0) {
            if (decoder0 == null) {
                return null;
            }
            decoder0.increaseStackDepth();
            WebTransportClientOnOutgoingStreamClosedParams result;
            try {
                org.chromium.mojo.bindings.DataHeader mainDataHeader = decoder0.readAndValidateDataHeader(VERSION_ARRAY);
                final int elementsOrVersion = mainDataHeader.elementsOrVersion;
                result = new WebTransportClientOnOutgoingStreamClosedParams(elementsOrVersion);
                    {
                        
                    result.streamId = decoder0.readInt(8);
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
            
            encoder0.encode(this.streamId, 8);
        }
    }



    
    static final class WebTransportClientOnReceivedStopSendingParams extends org.chromium.mojo.bindings.Struct {

        private static final int STRUCT_SIZE = 16;
        private static final org.chromium.mojo.bindings.DataHeader[] VERSION_ARRAY = new org.chromium.mojo.bindings.DataHeader[] {new org.chromium.mojo.bindings.DataHeader(16, 0)};
        private static final org.chromium.mojo.bindings.DataHeader DEFAULT_STRUCT_INFO = VERSION_ARRAY[0];
        public int streamId;
        public byte code;

        private WebTransportClientOnReceivedStopSendingParams(int version) {
            super(STRUCT_SIZE, version);
        }

        public WebTransportClientOnReceivedStopSendingParams() {
            this(0);
        }

        public static WebTransportClientOnReceivedStopSendingParams deserialize(org.chromium.mojo.bindings.Message message) {
            return decode(new org.chromium.mojo.bindings.Decoder(message));
        }

        /**
         * Similar to the method above, but deserializes from a |ByteBuffer| instance.
         *
         * @throws org.chromium.mojo.bindings.DeserializationException on deserialization failure.
         */
        public static WebTransportClientOnReceivedStopSendingParams deserialize(java.nio.ByteBuffer data) {
            return deserialize(new org.chromium.mojo.bindings.Message(
                    data, new java.util.ArrayList<org.chromium.mojo.system.Handle>()));
        }

        @SuppressWarnings("unchecked")
        public static WebTransportClientOnReceivedStopSendingParams decode(org.chromium.mojo.bindings.Decoder decoder0) {
            if (decoder0 == null) {
                return null;
            }
            decoder0.increaseStackDepth();
            WebTransportClientOnReceivedStopSendingParams result;
            try {
                org.chromium.mojo.bindings.DataHeader mainDataHeader = decoder0.readAndValidateDataHeader(VERSION_ARRAY);
                final int elementsOrVersion = mainDataHeader.elementsOrVersion;
                result = new WebTransportClientOnReceivedStopSendingParams(elementsOrVersion);
                    {
                        
                    result.streamId = decoder0.readInt(8);
                    }
                    {
                        
                    result.code = decoder0.readByte(12);
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
            
            encoder0.encode(this.streamId, 8);
            
            encoder0.encode(this.code, 12);
        }
    }



    
    static final class WebTransportClientOnReceivedResetStreamParams extends org.chromium.mojo.bindings.Struct {

        private static final int STRUCT_SIZE = 16;
        private static final org.chromium.mojo.bindings.DataHeader[] VERSION_ARRAY = new org.chromium.mojo.bindings.DataHeader[] {new org.chromium.mojo.bindings.DataHeader(16, 0)};
        private static final org.chromium.mojo.bindings.DataHeader DEFAULT_STRUCT_INFO = VERSION_ARRAY[0];
        public int streamId;
        public byte code;

        private WebTransportClientOnReceivedResetStreamParams(int version) {
            super(STRUCT_SIZE, version);
        }

        public WebTransportClientOnReceivedResetStreamParams() {
            this(0);
        }

        public static WebTransportClientOnReceivedResetStreamParams deserialize(org.chromium.mojo.bindings.Message message) {
            return decode(new org.chromium.mojo.bindings.Decoder(message));
        }

        /**
         * Similar to the method above, but deserializes from a |ByteBuffer| instance.
         *
         * @throws org.chromium.mojo.bindings.DeserializationException on deserialization failure.
         */
        public static WebTransportClientOnReceivedResetStreamParams deserialize(java.nio.ByteBuffer data) {
            return deserialize(new org.chromium.mojo.bindings.Message(
                    data, new java.util.ArrayList<org.chromium.mojo.system.Handle>()));
        }

        @SuppressWarnings("unchecked")
        public static WebTransportClientOnReceivedResetStreamParams decode(org.chromium.mojo.bindings.Decoder decoder0) {
            if (decoder0 == null) {
                return null;
            }
            decoder0.increaseStackDepth();
            WebTransportClientOnReceivedResetStreamParams result;
            try {
                org.chromium.mojo.bindings.DataHeader mainDataHeader = decoder0.readAndValidateDataHeader(VERSION_ARRAY);
                final int elementsOrVersion = mainDataHeader.elementsOrVersion;
                result = new WebTransportClientOnReceivedResetStreamParams(elementsOrVersion);
                    {
                        
                    result.streamId = decoder0.readInt(8);
                    }
                    {
                        
                    result.code = decoder0.readByte(12);
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
            
            encoder0.encode(this.streamId, 8);
            
            encoder0.encode(this.code, 12);
        }
    }



    
    static final class WebTransportClientOnClosedParams extends org.chromium.mojo.bindings.Struct {

        private static final int STRUCT_SIZE = 16;
        private static final org.chromium.mojo.bindings.DataHeader[] VERSION_ARRAY = new org.chromium.mojo.bindings.DataHeader[] {new org.chromium.mojo.bindings.DataHeader(16, 0)};
        private static final org.chromium.mojo.bindings.DataHeader DEFAULT_STRUCT_INFO = VERSION_ARRAY[0];
        public WebTransportCloseInfo closeInfo;

        private WebTransportClientOnClosedParams(int version) {
            super(STRUCT_SIZE, version);
        }

        public WebTransportClientOnClosedParams() {
            this(0);
        }

        public static WebTransportClientOnClosedParams deserialize(org.chromium.mojo.bindings.Message message) {
            return decode(new org.chromium.mojo.bindings.Decoder(message));
        }

        /**
         * Similar to the method above, but deserializes from a |ByteBuffer| instance.
         *
         * @throws org.chromium.mojo.bindings.DeserializationException on deserialization failure.
         */
        public static WebTransportClientOnClosedParams deserialize(java.nio.ByteBuffer data) {
            return deserialize(new org.chromium.mojo.bindings.Message(
                    data, new java.util.ArrayList<org.chromium.mojo.system.Handle>()));
        }

        @SuppressWarnings("unchecked")
        public static WebTransportClientOnClosedParams decode(org.chromium.mojo.bindings.Decoder decoder0) {
            if (decoder0 == null) {
                return null;
            }
            decoder0.increaseStackDepth();
            WebTransportClientOnClosedParams result;
            try {
                org.chromium.mojo.bindings.DataHeader mainDataHeader = decoder0.readAndValidateDataHeader(VERSION_ARRAY);
                final int elementsOrVersion = mainDataHeader.elementsOrVersion;
                result = new WebTransportClientOnClosedParams(elementsOrVersion);
                    {
                        
                    org.chromium.mojo.bindings.Decoder decoder1 = decoder0.readPointer(8, true);
                    result.closeInfo = WebTransportCloseInfo.decode(decoder1);
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
            
            encoder0.encode(this.closeInfo, 8, true);
        }
    }



}
