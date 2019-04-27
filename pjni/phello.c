#include <stdio.h>
#include <jni.h>
#include "phello.h"

JNIEXPORT void JNICALL Java_com_phello_phello_hello(JNIEnv *env, jobject obj)
{
	printf("Hello.\n");
}

