#include <stdio.h>
#include "libHelloJni.h"


JNIEXPORT void JNICALL Java_HelloJni_hello(JNIEnv *env, jobject *obj)
{
	printf("Gello.\n");
}

