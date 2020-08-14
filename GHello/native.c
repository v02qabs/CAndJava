#include <jni.h>
#include <stdio.h>

/* the function that is called from java must be declered with decorators
 * JNIEXPORT and JNICALL.
 * The function name is constructed as Java_ClassName_MethodName
 * Function parameters correspond parameters in java but there are 2 extra parameters
 * JNIEnv is a pointer to java envoronmet and jobject is a reference to caller object.
 * Caller object is the instance of the JNIExample in this case.
 */
JNIEXPORT void JNICALL Java_JNIExample_doPrint(JNIEnv *e, jobject obj, jstring message) {
    const char *c_message;
    /* It is necessary to convert java objects like string to something C native */
    c_message = (*e)->GetStringUTFChars(e, message, NULL);
    printf("%s\n", c_message);
    /* in the end it is necessary to free resources allocated by Get above */
    (*e)->ReleaseStringUTFChars(e, message, c_message);
}
