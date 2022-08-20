/*
 * This file is auto-generated.  DO NOT MODIFY.
 */
package org.chromium.components.browser_ui.photo_picker;
/**
 * This interface is called by the Photo Picker to start image decoding jobs in
 * a separate process.
 */
public interface IDecoderService extends android.os.IInterface
{
  /** Default implementation for IDecoderService. */
  public static class Default implements org.chromium.components.browser_ui.photo_picker.IDecoderService
  {
    /**
     * Decode an image.
     * @param payload The data containing the details for the decoding request.
     */
    @Override public void decodeImage(android.os.Bundle payload, org.chromium.components.browser_ui.photo_picker.IDecoderServiceCallback listener) throws android.os.RemoteException
    {
    }
    @Override
    public android.os.IBinder asBinder() {
      return null;
    }
  }
  /** Local-side IPC implementation stub class. */
  public static abstract class Stub extends android.os.Binder implements org.chromium.components.browser_ui.photo_picker.IDecoderService
  {
    /** Construct the stub at attach it to the interface. */
    public Stub()
    {
      this.attachInterface(this, DESCRIPTOR);
    }
    /**
     * Cast an IBinder object into an org.chromium.components.browser_ui.photo_picker.IDecoderService interface,
     * generating a proxy if needed.
     */
    public static org.chromium.components.browser_ui.photo_picker.IDecoderService asInterface(android.os.IBinder obj)
    {
      if ((obj==null)) {
        return null;
      }
      android.os.IInterface iin = obj.queryLocalInterface(DESCRIPTOR);
      if (((iin!=null)&&(iin instanceof org.chromium.components.browser_ui.photo_picker.IDecoderService))) {
        return ((org.chromium.components.browser_ui.photo_picker.IDecoderService)iin);
      }
      return new org.chromium.components.browser_ui.photo_picker.IDecoderService.Stub.Proxy(obj);
    }
    @Override public android.os.IBinder asBinder()
    {
      return this;
    }
    @Override public boolean onTransact(int code, android.os.Parcel data, android.os.Parcel reply, int flags) throws android.os.RemoteException
    {
      java.lang.String descriptor = DESCRIPTOR;
      if (code >= android.os.IBinder.FIRST_CALL_TRANSACTION && code <= android.os.IBinder.LAST_CALL_TRANSACTION) {
        data.enforceInterface(descriptor);
      }
      switch (code)
      {
        case INTERFACE_TRANSACTION:
        {
          reply.writeString(descriptor);
          return true;
        }
      }
      switch (code)
      {
        case TRANSACTION_decodeImage:
        {
          android.os.Bundle _arg0;
          _arg0 = _Parcel.readTypedObject(data, android.os.Bundle.CREATOR);
          org.chromium.components.browser_ui.photo_picker.IDecoderServiceCallback _arg1;
          _arg1 = org.chromium.components.browser_ui.photo_picker.IDecoderServiceCallback.Stub.asInterface(data.readStrongBinder());
          this.decodeImage(_arg0, _arg1);
          break;
        }
        default:
        {
          return super.onTransact(code, data, reply, flags);
        }
      }
      return true;
    }
    private static class Proxy implements org.chromium.components.browser_ui.photo_picker.IDecoderService
    {
      private android.os.IBinder mRemote;
      Proxy(android.os.IBinder remote)
      {
        mRemote = remote;
      }
      @Override public android.os.IBinder asBinder()
      {
        return mRemote;
      }
      public java.lang.String getInterfaceDescriptor()
      {
        return DESCRIPTOR;
      }
      /**
       * Decode an image.
       * @param payload The data containing the details for the decoding request.
       */
      @Override public void decodeImage(android.os.Bundle payload, org.chromium.components.browser_ui.photo_picker.IDecoderServiceCallback listener) throws android.os.RemoteException
      {
        android.os.Parcel _data = android.os.Parcel.obtain();
        try {
          _data.writeInterfaceToken(DESCRIPTOR);
          _Parcel.writeTypedObject(_data, payload, 0);
          _data.writeStrongInterface(listener);
          boolean _status = mRemote.transact(Stub.TRANSACTION_decodeImage, _data, null, android.os.IBinder.FLAG_ONEWAY);
        }
        finally {
          _data.recycle();
        }
      }
    }
    static final int TRANSACTION_decodeImage = (android.os.IBinder.FIRST_CALL_TRANSACTION + 0);
  }
  public static final java.lang.String DESCRIPTOR = "org.chromium.components.browser_ui.photo_picker.IDecoderService";
  /**
   * Decode an image.
   * @param payload The data containing the details for the decoding request.
   */
  public void decodeImage(android.os.Bundle payload, org.chromium.components.browser_ui.photo_picker.IDecoderServiceCallback listener) throws android.os.RemoteException;
  /** @hide */
  static class _Parcel {
    static private <T> T readTypedObject(
        android.os.Parcel parcel,
        android.os.Parcelable.Creator<T> c) {
      if (parcel.readInt() != 0) {
          return c.createFromParcel(parcel);
      } else {
          return null;
      }
    }
    static private <T extends android.os.Parcelable> void writeTypedObject(
        android.os.Parcel parcel, T value, int parcelableFlags) {
      if (value != null) {
        parcel.writeInt(1);
        value.writeToParcel(parcel, parcelableFlags);
      } else {
        parcel.writeInt(0);
      }
    }
  }
}
