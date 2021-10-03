package com.gyabinet.gameplay;

public class NativeLib {

    // Used to load the 'gameplay' library on application startup.
    static {
        System.loadLibrary("gameplay");
    }

    /**
     * A native method that is implemented by the 'gameplay' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI();
}