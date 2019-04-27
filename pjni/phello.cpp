#include <iostream>
#include <jni.h>
#include "phello.h"

JNIEXPORT void JNICALL Java_com_phello_phello_hello(JNIEnv *env, jobject obj)
{
	std::cout << "Hello." << std::endl;
}

