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
/* Header for class com_uber_neuropod_LibraryLoader */

#ifndef _Included_com_uber_neuropod_LibraryLoader
#define _Included_com_uber_neuropod_LibraryLoader
#ifdef __cplusplus
extern "C" {
#endif
#undef com_uber_neuropod_LibraryLoader_BUFFER_SIZE
#define com_uber_neuropod_LibraryLoader_BUFFER_SIZE 1048576L
/*
 * Class:     com_uber_neuropod_LibraryLoader
 * Method:    nativeIsLoaded
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_uber_neuropod_LibraryLoader_nativeIsLoaded(JNIEnv *, jclass);

/*
 * Class:     com_uber_neuropod_LibraryLoader
 * Method:    nativeExport
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_uber_neuropod_LibraryLoader_nativeExport(JNIEnv *, jclass, jstring);

#ifdef __cplusplus
}
#endif
#endif
