/*
 * Copyright (C) 2019 The LineageOS Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <binder/Binder.h>
#include <sys/types.h>
#include <utils/StrongPointer.h>

namespace android
{
    /* std::optional<PhysicalDisplayId> BpSurfaceComposer::getInternalDisplayId */
    extern "C" unsigned long long _ZN7android21SurfaceComposerClient20getInternalDisplayIdEv();

    /* sp<IBinder> BpSurfaceComposer::getPhysicalDisplayToken */
    extern "C" void* _ZN7android21SurfaceComposerClient23getPhysicalDisplayTokenEy(unsigned long long displayId);

    /* sp<IBinder> BpSurfaceComposer::getBuiltInDisplay */
    extern "C" void* _ZN7android21SurfaceComposerClient17getBuiltInDisplayDisabledEi(long id)
    {
        (void)id;
        unsigned long long displayId = _ZN7android21SurfaceComposerClient20getInternalDisplayIdEv();
        return _ZN7android21SurfaceComposerClient23getPhysicalDisplayTokenEy(displayId);
    }
};
