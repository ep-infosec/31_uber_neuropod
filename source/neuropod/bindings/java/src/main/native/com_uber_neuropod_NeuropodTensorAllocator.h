/* Copyright (c) 2020 The Neuropod Authors

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_uber_neuropod_NeuropodTensorAllocator */

#ifndef _Included_com_uber_neuropod_NeuropodTensorAllocator
#define _Included_com_uber_neuropod_NeuropodTensorAllocator
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_uber_neuropod_NeuropodTensorAllocator
 * Method:    nativeAllocate
 * Signature: ([JILjava/nio/ByteBuffer;J)J
 */
JNIEXPORT jlong JNICALL
Java_com_uber_neuropod_NeuropodTensorAllocator_nativeAllocate(JNIEnv *, jclass, jlongArray, jint, jobject, jlong);

/*
 * Class:     com_uber_neuropod_NeuropodTensorAllocator
 * Method:    nativeCreateStringTensor
 * Signature: (Ljava/util/List;[JJ)J
 */
JNIEXPORT jlong JNICALL
Java_com_uber_neuropod_NeuropodTensorAllocator_nativeCreateStringTensor(JNIEnv *, jclass, jobject, jlongArray, jlong);

/*
 * Class:     com_uber_neuropod_NeuropodTensorAllocator
 * Method:    nativeDelete
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_uber_neuropod_NeuropodTensorAllocator_nativeDelete(JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
