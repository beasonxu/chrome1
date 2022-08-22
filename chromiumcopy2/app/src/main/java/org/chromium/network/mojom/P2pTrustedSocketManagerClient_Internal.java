// P2pTrustedSocketManagerClient_Internal.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     services/network/public/mojom/p2p_trusted.mojom
//

package org.chromium.network.mojom;

import androidx.annotation.IntDef;


class P2pTrustedSocketManagerClient_Internal {

    public static final org.chromium.mojo.bindings.Interface.Manager<P2pTrustedSocketManagerClient, P2pTrustedSocketManagerClient.Proxy> MANAGER =
            new org.chromium.mojo.bindings.Interface.Manager<P2pTrustedSocketManagerClient, P2pTrustedSocketManagerClient.Proxy>() {

        @Override
        public String getName() {
            return "network.mojom.P2PTrustedSocketManagerClient";
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
        public Stub buildStub(org.chromium.mojo.system.Core core, P2pTrustedSocketManagerClient impl) {
            return new Stub(core, impl);
        }

        @Override
        public P2pTrustedSocketManagerClient[] buildArray(int size) {
          return new P2pTrustedSocketManagerClient[size];
        }
    };


    private static final int INVALID_SOCKET_PORT_RANGE_REQUESTED_ORDINAL = 0;

    private static final int DUMP_PACKET_ORDINAL = 1;


    static final class Proxy extends org.chromium.mojo.bindings.Interface.AbstractProxy implements P2pTrustedSocketManagerClient.Proxy {

        Proxy(org.chromium.mojo.system.Core core,
              org.chromium.mojo.bindings.MessageReceiverWithResponder messageReceiver) {
            super(core, messageReceiver);
        }


        @Override
        public void invalidSocketPortRangeRequested(
) {

            P2pTrustedSocketManagerClientInvalidSocketPortRangeRequestedParams _message = new P2pTrustedSocketManagerClientInvalidSocketPortRangeRequestedParams();


            getProxyHandler().getMessageReceiver().accept(
                    _message.serializeWithHeader(
                            getProxyHandler().getCore(),
                            new org.chromium.mojo.bindings.MessageHeader(INVALID_SOCKET_PORT_RANGE_REQUESTED_ORDINAL)));

        }


        @Override
        public void dumpPacket(
byte[] packetHeader, long packetLength, boolean incoming) {

            P2pTrustedSocketManagerClientDumpPacketParams _message = new P2pTrustedSocketManagerClientDumpPacketParams();

            _message.packetHeader = packetHeader;

            _message.packetLength = packetLength;

            _message.incoming = incoming;


            getProxyHandler().getMessageReceiver().accept(
                    _message.serializeWithHeader(
                            getProxyHandler().getCore(),
                            new org.chromium.mojo.bindings.MessageHeader(DUMP_PACKET_ORDINAL)));

        }


    }

    static final class Stub extends org.chromium.mojo.bindings.Interface.Stub<P2pTrustedSocketManagerClient> {

        Stub(org.chromium.mojo.system.Core core, P2pTrustedSocketManagerClient impl) {
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
                                P2pTrustedSocketManagerClient_Internal.MANAGER, messageWithHeader);





                    case INVALID_SOCKET_PORT_RANGE_REQUESTED_ORDINAL: {

                        P2pTrustedSocketManagerClientInvalidSocketPortRangeRequestedParams.deserialize(messageWithHeader.getPayload());

                        getImpl().invalidSocketPortRangeRequested();
                        return true;
                    }





                    case DUMP_PACKET_ORDINAL: {

                        P2pTrustedSocketManagerClientDumpPacketParams data =
                                P2pTrustedSocketManagerClientDumpPacketParams.deserialize(messageWithHeader.getPayload());

                        getImpl().dumpPacket(data.packetHeader, data.packetLength, data.incoming);
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
                                getCore(), P2pTrustedSocketManagerClient_Internal.MANAGER, messageWithHeader, receiver);






                    default:
                        return false;
                }
            } catch (org.chromium.mojo.bindings.DeserializationException e) {
                System.err.println(e.toString());
                return false;
            }
        }
    }


    
    static final class P2pTrustedSocketManagerClientInvalidSocketPortRangeRequestedParams extends org.chromium.mojo.bindings.Struct {

        private static final int STRUCT_SIZE = 8;
        private static final org.chromium.mojo.bindings.DataHeader[] VERSION_ARRAY = new org.chromium.mojo.bindings.DataHeader[] {new org.chromium.mojo.bindings.DataHeader(8, 0)};
        private static final org.chromium.mojo.bindings.DataHeader DEFAULT_STRUCT_INFO = VERSION_ARRAY[0];

        private P2pTrustedSocketManagerClientInvalidSocketPortRangeRequestedParams(int version) {
            super(STRUCT_SIZE, version);
        }

        public P2pTrustedSocketManagerClientInvalidSocketPortRangeRequestedParams() {
            this(0);
        }

        public static P2pTrustedSocketManagerClientInvalidSocketPortRangeRequestedParams deserialize(org.chromium.mojo.bindings.Message message) {
            return decode(new org.chromium.mojo.bindings.Decoder(message));
        }

        /**
         * Similar to the method above, but deserializes from a |ByteBuffer| instance.
         *
         * @throws org.chromium.mojo.bindings.DeserializationException on deserialization failure.
         */
        public static P2pTrustedSocketManagerClientInvalidSocketPortRangeRequestedParams deserialize(java.nio.ByteBuffer data) {
            return deserialize(new org.chromium.mojo.bindings.Message(
                    data, new java.util.ArrayList<org.chromium.mojo.system.Handle>()));
        }

        @SuppressWarnings("unchecked")
        public static P2pTrustedSocketManagerClientInvalidSocketPortRangeRequestedParams decode(org.chromium.mojo.bindings.Decoder decoder0) {
            if (decoder0 == null) {
                return null;
            }
            decoder0.increaseStackDepth();
            P2pTrustedSocketManagerClientInvalidSocketPortRangeRequestedParams result;
            try {
                org.chromium.mojo.bindings.DataHeader mainDataHeader = decoder0.readAndValidateDataHeader(VERSION_ARRAY);
                final int elementsOrVersion = mainDataHeader.elementsOrVersion;
                result = new P2pTrustedSocketManagerClientInvalidSocketPortRangeRequestedParams(elementsOrVersion);

            } finally {
                decoder0.decreaseStackDepth();
            }
            return result;
        }

        @SuppressWarnings("unchecked")
        @Override
        protected final void encode(org.chromium.mojo.bindings.Encoder encoder) {
            encoder.getEncoderAtDataOffset(DEFAULT_STRUCT_INFO);
        }
    }



    
    static final class P2pTrustedSocketManagerClientDumpPacketParams extends org.chromium.mojo.bindings.Struct {

        private static final int STRUCT_SIZE = 32;
        private static final org.chromium.mojo.bindings.DataHeader[] VERSION_ARRAY = new org.chromium.mojo.bindings.DataHeader[] {new org.chromium.mojo.bindings.DataHeader(32, 0)};
        private static final org.chromium.mojo.bindings.DataHeader DEFAULT_STRUCT_INFO = VERSION_ARRAY[0];
        public byte[] packetHeader;
        public long packetLength;
        public boolean incoming;

        private P2pTrustedSocketManagerClientDumpPacketParams(int version) {
            super(STRUCT_SIZE, version);
        }

        public P2pTrustedSocketManagerClientDumpPacketParams() {
            this(0);
        }

        public static P2pTrustedSocketManagerClientDumpPacketParams deserialize(org.chromium.mojo.bindings.Message message) {
            return decode(new org.chromium.mojo.bindings.Decoder(message));
        }

        /**
         * Similar to the method above, but deserializes from a |ByteBuffer| instance.
         *
         * @throws org.chromium.mojo.bindings.DeserializationException on deserialization failure.
         */
        public static P2pTrustedSocketManagerClientDumpPacketParams deserialize(java.nio.ByteBuffer data) {
            return deserialize(new org.chromium.mojo.bindings.Message(
                    data, new java.util.ArrayList<org.chromium.mojo.system.Handle>()));
        }

        @SuppressWarnings("unchecked")
        public static P2pTrustedSocketManagerClientDumpPacketParams decode(org.chromium.mojo.bindings.Decoder decoder0) {
            if (decoder0 == null) {
                return null;
            }
            decoder0.increaseStackDepth();
            P2pTrustedSocketManagerClientDumpPacketParams result;
            try {
                org.chromium.mojo.bindings.DataHeader mainDataHeader = decoder0.readAndValidateDataHeader(VERSION_ARRAY);
                final int elementsOrVersion = mainDataHeader.elementsOrVersion;
                result = new P2pTrustedSocketManagerClientDumpPacketParams(elementsOrVersion);
                    {
                        
                    result.packetHeader = decoder0.readBytes(8, org.chromium.mojo.bindings.BindingsHelper.NOTHING_NULLABLE, org.chromium.mojo.bindings.BindingsHelper.UNSPECIFIED_ARRAY_LENGTH);
                    }
                    {
                        
                    result.packetLength = decoder0.readLong(16);
                    }
                    {
                        
                    result.incoming = decoder0.readBoolean(24, 0);
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
            
            encoder0.encode(this.packetHeader, 8, org.chromium.mojo.bindings.BindingsHelper.NOTHING_NULLABLE, org.chromium.mojo.bindings.BindingsHelper.UNSPECIFIED_ARRAY_LENGTH);
            
            encoder0.encode(this.packetLength, 16);
            
            encoder0.encode(this.incoming, 24, 0);
        }
    }



}
