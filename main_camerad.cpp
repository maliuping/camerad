/**
 * Copyright @ 2019 iAUTO(Shanghai) Co., Ltd.
 * All Rights Reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are NOT permitted except as agreed by
 * iAUTO(Shanghai) Co., Ltd.
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 */

#include <hidl/HidlSupport.h>
#include <hidl/HidlTransportSupport.h>
#include "cameradmanager/CameradManager.h"
using nutshell::CameradManager;

int main() {
    CameradManager::instance()->init();
    android::hardware::joinRpcThreadpool();
    return 0;
}
