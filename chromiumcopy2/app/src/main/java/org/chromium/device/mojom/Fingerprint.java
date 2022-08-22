// Fingerprint.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     services/device/public/mojom/fingerprint.mojom
//

package org.chromium.device.mojom;

import androidx.annotation.IntDef;


public interface Fingerprint extends org.chromium.mojo.bindings.Interface {



    public interface Proxy extends Fingerprint, org.chromium.mojo.bindings.Interface.Proxy {
    }

    Manager<Fingerprint, Fingerprint.Proxy> MANAGER = Fingerprint_Internal.MANAGER;

    void getRecordsForUser(
String userId, 
GetRecordsForUser_Response callback);

    interface GetRecordsForUser_Response extends org.chromium.mojo.bindings.Callbacks.Callback1<java.util.Map<String, String>> { }


    void startEnrollSession(
String userId, String label);


    void cancelCurrentEnrollSession(

CancelCurrentEnrollSession_Response callback);

    interface CancelCurrentEnrollSession_Response extends org.chromium.mojo.bindings.Callbacks.Callback1<Boolean> { }


    void requestRecordLabel(
String recordPath, 
RequestRecordLabel_Response callback);

    interface RequestRecordLabel_Response extends org.chromium.mojo.bindings.Callbacks.Callback1<String> { }


    void setRecordLabel(
String recordPath, String newLabel, 
SetRecordLabel_Response callback);

    interface SetRecordLabel_Response extends org.chromium.mojo.bindings.Callbacks.Callback1<Boolean> { }


    void removeRecord(
String recordPath, 
RemoveRecord_Response callback);

    interface RemoveRecord_Response extends org.chromium.mojo.bindings.Callbacks.Callback1<Boolean> { }


    void startAuthSession(
);


    void endCurrentAuthSession(

EndCurrentAuthSession_Response callback);

    interface EndCurrentAuthSession_Response extends org.chromium.mojo.bindings.Callbacks.Callback1<Boolean> { }


    void destroyAllRecords(

DestroyAllRecords_Response callback);

    interface DestroyAllRecords_Response extends org.chromium.mojo.bindings.Callbacks.Callback1<Boolean> { }


    void addFingerprintObserver(
FingerprintObserver observer);


    void requestType(

RequestType_Response callback);

    interface RequestType_Response extends org.chromium.mojo.bindings.Callbacks.Callback1<Integer> { }


}
