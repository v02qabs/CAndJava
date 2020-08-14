public class JNIExample {

    public static void main(String[] args) {
       // The loadLibrary search for the native library (libnative.so in this case)
       System.loadLibrary("native");
       String s = "Hello JNI";
       JNIExample example = new JNIExample();
       example.doPrint(s);
   }

   // The method with native code (written in C) must be declared with native prefix
   public native void doPrint(String message);

}
