#include <stdio.h>
#include <jni.h>

JNIEXPORT void JNICALL Java_MyHello_Hello(JNIEnv *env, jobject obj)
{
	printf("Hello.\n");
	printf("input text: ");
}
