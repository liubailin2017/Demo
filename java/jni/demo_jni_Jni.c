#include"demo_jni_Jni.h"
#include"HeyJni.h"
/*
gcc demo_jni_Jni.c HeyJni.c -fPIC -shared -o libJniDemo.so -I /usr/lib/jvm/java-8-openjdk-amd64/include -I /usr/lib/jvm/java-8-openjdk-amd64/include/linux

java -Djava.library.path='.' demo.jni.Jni

*/
JNIEXPORT void JNICALL Java_demo_jni_Jni_heyMath (JNIEnv *env, jobject obj) 
{
	Mathbaba();
}

