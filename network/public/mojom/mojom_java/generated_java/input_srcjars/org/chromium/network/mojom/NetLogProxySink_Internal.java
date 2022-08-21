// NetLogProxySink_Internal.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     services/network/public/mojom/net_log.mojom
//

package org.chromium.network.mojom;

import androidx.annotation.IntDef;


class NetLogProxySink_Internal {

    public static final org.chromium.mojo.bindings.Interface.Manager<NetLogProxySink, NetLogProxySink.Proxy> MANAGER =
            new org.chromium.mojo.bindings.Interface.Manager<NetLogProxySink, NetLogProxySink.Proxy>() {

        @Override
        public String getName() {
            return "network.mojom.NetLogProxySink";
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
        public Stub buildStub(org.chromium.mojo.system.Core core, NetLogProxySink impl) {
            return new Stub(core, impl);
        }

        @Override
        public NetLogProxySink[] buildArray(int size) {
          return new NetLogProxySink[size];
        }
    };


    private static final int ADD_ENTRY_ORDINAL = 0;


    static final class Proxy extends org.chromium.mojo.bindings.Interface.AbstractProxy implements NetLogProxySink.Proxy {

        Proxy(org.chromium.mojo.system.Core core,
              org.chromium.mojo.bindings.MessageReceiverWithResponder messageReceiver) {
            super(core, messageReceiver);
        }


        @Override
        public void addEntry(
int type, int sourceType, int sourceId, org.chromium.mojo_base.mojom.TimeTicks sourceStartTime, int phase, org.chromium.mojo_base.mojom.TimeTicks time, org.chromium.mojo_base.mojom.Value params) {

            NetLogProxySinkAddEntryParams _message = new NetLogProxySinkAddEntryParams();

            _message.type = type;

            _message.sourceType = sourceType;

            _message.sourceId = sourceId;

            _message.sourceStartTime = sourceStartTime;

            _message.phase = phase;

            _message.time = time;

            _message.params = params;


            getProxyHandler().getMessageReceiver().accept(
                    _message.serializeWithHeader(
                            getProxyHandler().getCore(),
                            new org.chromium.mojo.bindings.MessageHeader(ADD_ENTRY_ORDINAL)));

        }


    }

    static final class Stub extends org.chromium.mojo.bindings.Interface.Stub<NetLogProxySink> {

        Stub(org.chromium.mojo.system.Core core, NetLogProxySink impl) {
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
                                NetLogProxySink_Internal.MANAGER, messageWithHeader);





                    case ADD_ENTRY_ORDINAL: {

                        NetLogProxySinkAddEntryParams data =
                                NetLogProxySinkAddEntryParams.deserialize(messageWithHeader.getPayload());

                        getImpl().addEntry(data.type, data.sourceType, data.sourceId, data.sourceStartTime, data.phase, data.time, data.params);
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
                                getCore(), NetLogProxySink_Internal.MANAGER, messageWithHeader, receiver);




                    default:
                        return false;
                }
            } catch (org.chromium.mojo.bindings.DeserializationException e) {
                System.err.println(e.toString());
                return false;
            }
        }
    }


    
    static final class NetLogProxySinkAddEntryParams extends org.chromium.mojo.bindings.Struct {

        private static final int STRUCT_SIZE = 56;
        private static final org.chromium.mojo.bindings.DataHeader[] VERSION_ARRAY = new org.chromium.mojo.bindings.DataHeader[] {new org.chromium.mojo.bindings.DataHeader(56, 0)};
        private static final org.chromium.mojo.bindings.DataHeader DEFAULT_STRUCT_INFO = VERSION_ARRAY[0];
        public int type;
        public int sourceType;
        public int sourceId;
        public org.chromium.mojo_base.mojom.TimeTicks sourceStartTime;
        public int phase;
        public org.chromium.mojo_base.mojom.TimeTicks time;
        public org.chromium.mojo_base.mojom.Value params;

        private NetLogProxySinkAddEntryParams(int version) {
            super(STRUCT_SIZE, version);
        }

        public NetLogProxySinkAddEntryParams() {
            this(0);
        }

        public static NetLogProxySinkAddEntryParams deserialize(org.chromium.mojo.bindings.Message message) {
            return decode(new org.chromium.mojo.bindings.Decoder(message));
        }

        /**
         * Similar to the method above, but deserializes from a |ByteBuffer| instance.
         *
         * @throws org.chromium.mojo.bindings.DeserializationException on deserialization failure.
         */
        public static NetLogProxySinkAddEntryParams deserialize(java.nio.ByteBuffer data) {
            return deserialize(new org.chromium.mojo.bindings.Message(
                    data, new java.util.ArrayList<org.chromium.mojo.system.Handle>()));
        }

        @SuppressWarnings("unchecked")
        public static NetLogProxySinkAddEntryParams decode(org.chromium.mojo.bindings.Decoder decoder0) {
            if (decoder0 == null) {
                return null;
            }
            decoder0.increaseStackDepth();
            NetLogProxySinkAddEntryParams result;
            try {
                org.chromium.mojo.bindings.DataHeader mainDataHeader = decoder0.readAndValidateDataHeader(VERSION_ARRAY);
                final int elementsOrVersion = mainDataHeader.elementsOrVersion;
                result = new NetLogProxySinkAddEntryParams(elementsOrVersion);
                    {
                        
                    result.type = decoder0.readInt(8);
                    }
                    {
                        
                    result.sourceType = decoder0.readInt(12);
                    }
                    {
                        
                    result.sourceId = decoder0.readInt(16);
                    }
                    {
                        
                    result.phase = decoder0.readInt(20);
                        NetLogEventPhase.validate(result.phase);
                        result.phase = NetLogEventPhase.toKnownValue(result.phase);
                    }
                    {
                        
                    org.chromium.mojo.bindings.Decoder decoder1 = decoder0.readPointer(24, false);
                    result.sourceStartTime = org.chromium.mojo_base.mojom.TimeTicks.decode(decoder1);
                    }
                    {
                        
                    org.chromium.mojo.bindings.Decoder decoder1 = decoder0.readPointer(32, false);
                    result.time = org.chromium.mojo_base.mojom.TimeTicks.decode(decoder1);
                    }
                    {
                        
                    result.params = org.chromium.mojo_base.mojom.Value.decode(decoder0, 40);
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
            
            encoder0.encode(this.type, 8);
            
            encoder0.encode(this.sourceType, 12);
            
            encoder0.encode(this.sourceId, 16);
            
            encoder0.encode(this.phase, 20);
            
            encoder0.encode(this.sourceStartTime, 24, false);
            
            encoder0.encode(this.time, 32, false);
            
            encoder0.encode(this.params, 40, false);
        }
    }



}
