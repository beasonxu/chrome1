/*
 * This file is auto-generated.  DO NOT MODIFY.
 */
package org.chromium.components.webapk_install;
public interface IWebApkInstallCoordinatorService extends android.os.IInterface
{
  /** Default implementation for IWebApkInstallCoordinatorService. */
  public static class Default implements org.chromium.components.webapk_install.IWebApkInstallCoordinatorService
  {
    /**
     * Schedule a WebAPK installation in the WebApkInstallCoordinatorService in Chrome.
     * Chrome will handle the installation and invoke the {@code callback} when the
     * installation succeeded or failed.
     */
    @Override public void scheduleInstallAsync(byte[] apkProto, android.graphics.Bitmap primaryIcon, boolean isPrimaryIconMaskable, org.chromium.components.webapk_install.IOnFinishInstallCallback callback) throws android.os.RemoteException
    {
    }
    @Override
    public android.os.IBinder asBinder() {
      return null;
    }
  }
  /** Local-side IPC implementation stub class. */
  public static abstract class Stub extends android.os.Binder implements org.chromium.components.webapk_install.IWebApkInstallCoordinatorService
  {
    /** Construct the stub at attach it to the interface. */
    public Stub()
    {
      this.attachInterface(this, DESCRIPTOR);
    }
    /**
     * Cast an IBinder object into an org.chromium.components.webapk_install.IWebApkInstallCoordinatorService interface,
     * generating a proxy if needed.
     */
    public static org.chromium.components.webapk_install.IWebApkInstallCoordinatorService asInterface(android.os.IBinder obj)
    {
      if ((obj==null)) {
        return null;
      }
      android.os.IInterface iin = obj.queryLocalInterface(DESCRIPTOR);
      if (((iin!=null)&&(iin instanceof org.chromium.components.webapk_install.IWebApkInstallCoordinatorService))) {
        return ((org.chromium.components.webapk_install.IWebApkInstallCoordinatorService)iin);
      }
      return new org.chromium.components.webapk_install.IWebApkInstallCoordinatorService.Stub.Proxy(obj);
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
        case TRANSACTION_scheduleInstallAsync:
        {
          byte[] _arg0;
          _arg0 = data.createByteArray();
          android.graphics.Bitmap _arg1;
          _arg1 = _Parcel.readTypedObject(data, android.graphics.Bitmap.CREATOR);
          boolean _arg2;
          _arg2 = (0!=data.readInt());
          org.chromium.components.webapk_install.IOnFinishInstallCallback _arg3;
          _arg3 = org.chromium.components.webapk_install.IOnFinishInstallCallback.Stub.asInterface(data.readStrongBinder());
          this.scheduleInstallAsync(_arg0, _arg1, _arg2, _arg3);
          break;
        }
        default:
        {
          return super.onTransact(code, data, reply, flags);
        }
      }
      return true;
    }
    private static class Proxy implements org.chromium.components.webapk_install.IWebApkInstallCoordinatorService
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
       * Schedule a WebAPK installation in the WebApkInstallCoordinatorService in Chrome.
       * Chrome will handle the installation and invoke the {@code callback} when the
       * installation succeeded or failed.
       */
      @Override public void scheduleInstallAsync(byte[] apkProto, android.graphics.Bitmap primaryIcon, boolean isPrimaryIconMaskable, org.chromium.components.webapk_install.IOnFinishInstallCallback callback) throws android.os.RemoteException
      {
        android.os.Parcel _data = android.os.Parcel.obtain();
        try {
          _data.writeInterfaceToken(DESCRIPTOR);
          _data.writeByteArray(apkProto);
          _Parcel.writeTypedObject(_data, primaryIcon, 0);
          _data.writeInt(((isPrimaryIconMaskable)?(1):(0)));
          _data.writeStrongInterface(callback);
          boolean _status = mRemote.transact(Stub.TRANSACTION_scheduleInstallAsync, _data, null, android.os.IBinder.FLAG_ONEWAY);
        }
        finally {
          _data.recycle();
        }
      }
    }
    static final int TRANSACTION_scheduleInstallAsync = (android.os.IBinder.FIRST_CALL_TRANSACTION + 0);
  }
  public static final java.lang.String DESCRIPTOR = "org.chromium.components.webapk_install.IWebApkInstallCoordinatorService";
  /**
   * Schedule a WebAPK installation in the WebApkInstallCoordinatorService in Chrome.
   * Chrome will handle the installation and invoke the {@code callback} when the
   * installation succeeded or failed.
   */
  public void scheduleInstallAsync(byte[] apkProto, android.graphics.Bitmap primaryIcon, boolean isPrimaryIconMaskable, org.chromium.components.webapk_install.IOnFinishInstallCallback callback) throws android.os.RemoteException;
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
