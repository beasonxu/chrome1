// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_names.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/modules/event_target_modules_names.json5


#include "third_party/blink/renderer/modules/event_target_modules_names.h"

#include <iterator>

#include "third_party/blink/renderer/platform/wtf/std_lib_extras.h"

namespace blink {
namespace event_target_names {

void* modulesnames_storage[kModulesNamesCount * ((sizeof(AtomicString) + sizeof(void *) - 1) / sizeof(void *))];

const AtomicString& kAudioContext = reinterpret_cast<AtomicString*>(&modulesnames_storage)[0];
const AtomicString& kAudioDecoder = reinterpret_cast<AtomicString*>(&modulesnames_storage)[1];
const AtomicString& kAudioEncoder = reinterpret_cast<AtomicString*>(&modulesnames_storage)[2];
const AtomicString& kAudioNode = reinterpret_cast<AtomicString*>(&modulesnames_storage)[3];
const AtomicString& kBackgroundFetchRegistration = reinterpret_cast<AtomicString*>(&modulesnames_storage)[4];
const AtomicString& kBatteryManager = reinterpret_cast<AtomicString*>(&modulesnames_storage)[5];
const AtomicString& kBluetooth = reinterpret_cast<AtomicString*>(&modulesnames_storage)[6];
const AtomicString& kBluetoothDevice = reinterpret_cast<AtomicString*>(&modulesnames_storage)[7];
const AtomicString& kBluetoothRemoteGATTCharacteristic = reinterpret_cast<AtomicString*>(&modulesnames_storage)[8];
const AtomicString& kCookieStore = reinterpret_cast<AtomicString*>(&modulesnames_storage)[9];
const AtomicString& kDelegatedInkTrail = reinterpret_cast<AtomicString*>(&modulesnames_storage)[10];
const AtomicString& kDevicePosture = reinterpret_cast<AtomicString*>(&modulesnames_storage)[11];
const AtomicString& kEyeDropper = reinterpret_cast<AtomicString*>(&modulesnames_storage)[12];
const AtomicString& kFileWriter = reinterpret_cast<AtomicString*>(&modulesnames_storage)[13];
const AtomicString& kGPUDevice = reinterpret_cast<AtomicString*>(&modulesnames_storage)[14];
const AtomicString& kHID = reinterpret_cast<AtomicString*>(&modulesnames_storage)[15];
const AtomicString& kHIDDevice = reinterpret_cast<AtomicString*>(&modulesnames_storage)[16];
const AtomicString& kHTMLVideoElementPictureInPicture = reinterpret_cast<AtomicString*>(&modulesnames_storage)[17];
const AtomicString& kIDBDatabase = reinterpret_cast<AtomicString*>(&modulesnames_storage)[18];
const AtomicString& kIDBOpenDBRequest = reinterpret_cast<AtomicString*>(&modulesnames_storage)[19];
const AtomicString& kIDBRequest = reinterpret_cast<AtomicString*>(&modulesnames_storage)[20];
const AtomicString& kIDBTransaction = reinterpret_cast<AtomicString*>(&modulesnames_storage)[21];
const AtomicString& kIdleDetector = reinterpret_cast<AtomicString*>(&modulesnames_storage)[22];
const AtomicString& kImageCapture = reinterpret_cast<AtomicString*>(&modulesnames_storage)[23];
const AtomicString& kMIDIAccess = reinterpret_cast<AtomicString*>(&modulesnames_storage)[24];
const AtomicString& kMIDIInput = reinterpret_cast<AtomicString*>(&modulesnames_storage)[25];
const AtomicString& kMIDIPort = reinterpret_cast<AtomicString*>(&modulesnames_storage)[26];
const AtomicString& kMediaDevices = reinterpret_cast<AtomicString*>(&modulesnames_storage)[27];
const AtomicString& kMediaKeySession = reinterpret_cast<AtomicString*>(&modulesnames_storage)[28];
const AtomicString& kMediaRecorder = reinterpret_cast<AtomicString*>(&modulesnames_storage)[29];
const AtomicString& kMediaSource = reinterpret_cast<AtomicString*>(&modulesnames_storage)[30];
const AtomicString& kMediaStream = reinterpret_cast<AtomicString*>(&modulesnames_storage)[31];
const AtomicString& kMediaStreamTrack = reinterpret_cast<AtomicString*>(&modulesnames_storage)[32];
const AtomicString& kNDEFReader = reinterpret_cast<AtomicString*>(&modulesnames_storage)[33];
const AtomicString& kNavigatorManagedData = reinterpret_cast<AtomicString*>(&modulesnames_storage)[34];
const AtomicString& kNetworkInformation = reinterpret_cast<AtomicString*>(&modulesnames_storage)[35];
const AtomicString& kNotification = reinterpret_cast<AtomicString*>(&modulesnames_storage)[36];
const AtomicString& kPaymentRequest = reinterpret_cast<AtomicString*>(&modulesnames_storage)[37];
const AtomicString& kPermissionStatus = reinterpret_cast<AtomicString*>(&modulesnames_storage)[38];
const AtomicString& kPictureInPictureWindow = reinterpret_cast<AtomicString*>(&modulesnames_storage)[39];
const AtomicString& kPresentationAvailability = reinterpret_cast<AtomicString*>(&modulesnames_storage)[40];
const AtomicString& kPresentationConnection = reinterpret_cast<AtomicString*>(&modulesnames_storage)[41];
const AtomicString& kPresentationConnectionList = reinterpret_cast<AtomicString*>(&modulesnames_storage)[42];
const AtomicString& kPresentationRequest = reinterpret_cast<AtomicString*>(&modulesnames_storage)[43];
const AtomicString& kRTCDTMFSender = reinterpret_cast<AtomicString*>(&modulesnames_storage)[44];
const AtomicString& kRTCDataChannel = reinterpret_cast<AtomicString*>(&modulesnames_storage)[45];
const AtomicString& kRTCDtlsTransport = reinterpret_cast<AtomicString*>(&modulesnames_storage)[46];
const AtomicString& kRTCIceTransport = reinterpret_cast<AtomicString*>(&modulesnames_storage)[47];
const AtomicString& kRTCPeerConnection = reinterpret_cast<AtomicString*>(&modulesnames_storage)[48];
const AtomicString& kRTCSctpTransport = reinterpret_cast<AtomicString*>(&modulesnames_storage)[49];
const AtomicString& kRemotePlayback = reinterpret_cast<AtomicString*>(&modulesnames_storage)[50];
const AtomicString& kScreenDetails = reinterpret_cast<AtomicString*>(&modulesnames_storage)[51];
const AtomicString& kScreenOrientation = reinterpret_cast<AtomicString*>(&modulesnames_storage)[52];
const AtomicString& kSensor = reinterpret_cast<AtomicString*>(&modulesnames_storage)[53];
const AtomicString& kSerial = reinterpret_cast<AtomicString*>(&modulesnames_storage)[54];
const AtomicString& kSerialPort = reinterpret_cast<AtomicString*>(&modulesnames_storage)[55];
const AtomicString& kServiceWorker = reinterpret_cast<AtomicString*>(&modulesnames_storage)[56];
const AtomicString& kServiceWorkerContainer = reinterpret_cast<AtomicString*>(&modulesnames_storage)[57];
const AtomicString& kServiceWorkerGlobalScope = reinterpret_cast<AtomicString*>(&modulesnames_storage)[58];
const AtomicString& kServiceWorkerRegistration = reinterpret_cast<AtomicString*>(&modulesnames_storage)[59];
const AtomicString& kSourceBuffer = reinterpret_cast<AtomicString*>(&modulesnames_storage)[60];
const AtomicString& kSourceBufferList = reinterpret_cast<AtomicString*>(&modulesnames_storage)[61];
const AtomicString& kSpeechRecognition = reinterpret_cast<AtomicString*>(&modulesnames_storage)[62];
const AtomicString& kSpeechSynthesis = reinterpret_cast<AtomicString*>(&modulesnames_storage)[63];
const AtomicString& kSpeechSynthesisUtterance = reinterpret_cast<AtomicString*>(&modulesnames_storage)[64];
const AtomicString& kUSB = reinterpret_cast<AtomicString*>(&modulesnames_storage)[65];
const AtomicString& kVideoDecoder = reinterpret_cast<AtomicString*>(&modulesnames_storage)[66];
const AtomicString& kVideoEncoder = reinterpret_cast<AtomicString*>(&modulesnames_storage)[67];
const AtomicString& kVirtualKeyboard = reinterpret_cast<AtomicString*>(&modulesnames_storage)[68];
const AtomicString& kWakeLockSentinel = reinterpret_cast<AtomicString*>(&modulesnames_storage)[69];
const AtomicString& kWebOTPService = reinterpret_cast<AtomicString*>(&modulesnames_storage)[70];
const AtomicString& kWebSocket = reinterpret_cast<AtomicString*>(&modulesnames_storage)[71];
const AtomicString& kWindowControlsOverlay = reinterpret_cast<AtomicString*>(&modulesnames_storage)[72];
const AtomicString& kXR = reinterpret_cast<AtomicString*>(&modulesnames_storage)[73];
const AtomicString& kXRLayer = reinterpret_cast<AtomicString*>(&modulesnames_storage)[74];
const AtomicString& kXRLightProbe = reinterpret_cast<AtomicString*>(&modulesnames_storage)[75];
const AtomicString& kXRSession = reinterpret_cast<AtomicString*>(&modulesnames_storage)[76];
const AtomicString& kXRSpace = reinterpret_cast<AtomicString*>(&modulesnames_storage)[77];

void InitModules() {
  static bool is_loaded = false;
  if (is_loaded) return;
  is_loaded = true;

  struct NameEntry {
    const char* name;
    unsigned hash;
    unsigned char length;
  };

  static const NameEntry kNames[] = {
    { "AudioContext", 5207992, 12 },
    { "AudioDecoder", 13206870, 12 },
    { "AudioEncoder", 14199438, 12 },
    { "AudioNode", 5081561, 9 },
    { "BackgroundFetchRegistration", 8242174, 27 },
    { "BatteryManager", 5049459, 14 },
    { "Bluetooth", 13021927, 9 },
    { "BluetoothDevice", 14102450, 15 },
    { "BluetoothRemoteGATTCharacteristic", 3805326, 33 },
    { "CookieStore", 2537092, 11 },
    { "DelegatedInkTrail", 5315115, 17 },
    { "DevicePosture", 2834780, 13 },
    { "EyeDropper", 3021794, 10 },
    { "FileWriter", 15152482, 10 },
    { "GPUDevice", 12351276, 9 },
    { "HID", 10382381, 3 },
    { "HIDDevice", 13275935, 9 },
    { "HTMLVideoElementPictureInPicture", 14434072, 32 },
    { "IDBDatabase", 1126017, 11 },
    { "IDBOpenDBRequest", 8388818, 16 },
    { "IDBRequest", 16217380, 10 },
    { "IDBTransaction", 13326789, 14 },
    { "IdleDetector", 716762, 12 },
    { "ImageCapture", 3204179, 12 },
    { "MIDIAccess", 13252796, 10 },
    { "MIDIInput", 13226940, 9 },
    { "MIDIPort", 15710269, 8 },
    { "MediaDevices", 7815368, 12 },
    { "MediaKeySession", 1701501, 15 },
    { "MediaRecorder", 9531693, 13 },
    { "MediaSource", 10009800, 11 },
    { "MediaStream", 5095066, 11 },
    { "MediaStreamTrack", 16623886, 16 },
    { "NDEFReader", 1914073, 10 },
    { "NavigatorManagedData", 15364866, 20 },
    { "NetworkInformation", 3171974, 18 },
    { "Notification", 7262241, 12 },
    { "PaymentRequest", 7625983, 14 },
    { "PermissionStatus", 4818911, 16 },
    { "PictureInPictureWindow", 5198336, 22 },
    { "PresentationAvailability", 10735288, 24 },
    { "PresentationConnection", 2995870, 22 },
    { "PresentationConnectionList", 14875970, 26 },
    { "PresentationRequest", 4728545, 19 },
    { "RTCDTMFSender", 7965945, 13 },
    { "RTCDataChannel", 16002100, 14 },
    { "RTCDtlsTransport", 1867499, 16 },
    { "RTCIceTransport", 6372167, 15 },
    { "RTCPeerConnection", 11238437, 17 },
    { "RTCSctpTransport", 13728866, 16 },
    { "RemotePlayback", 14509464, 14 },
    { "ScreenDetails", 10273298, 13 },
    { "ScreenOrientation", 16006315, 17 },
    { "Sensor", 266785, 6 },
    { "Serial", 6663595, 6 },
    { "SerialPort", 13586198, 10 },
    { "ServiceWorker", 3155984, 13 },
    { "ServiceWorkerContainer", 6814814, 22 },
    { "ServiceWorkerGlobalScope", 16474009, 24 },
    { "ServiceWorkerRegistration", 11774198, 25 },
    { "SourceBuffer", 3244577, 12 },
    { "SourceBufferList", 5225283, 16 },
    { "SpeechRecognition", 1914212, 17 },
    { "SpeechSynthesis", 9951205, 15 },
    { "SpeechSynthesisUtterance", 12730322, 24 },
    { "USB", 6302079, 3 },
    { "VideoDecoder", 14441968, 12 },
    { "VideoEncoder", 1821129, 12 },
    { "VirtualKeyboard", 8652544, 15 },
    { "WakeLockSentinel", 15237870, 16 },
    { "WebOTPService", 351517, 13 },
    { "DOMWebSocket", 15572381, 12 },
    { "WindowControlsOverlay", 13637571, 21 },
    { "XR", 15353191, 2 },
    { "XRLayer", 4027888, 7 },
    { "XRLightProbe", 15419941, 12 },
    { "XRSession", 14705135, 9 },
    { "XRSpace", 638017, 7 },
  };

  for (size_t i = 0; i < std::size(kNames); ++i) {
    StringImpl* impl = StringImpl::CreateStatic(kNames[i].name, kNames[i].length, kNames[i].hash);
    void* address = reinterpret_cast<AtomicString*>(&modulesnames_storage) + i;
    new (address) AtomicString(impl);
  }
}

}  // namespace event_target_names
}  // namespace blink
