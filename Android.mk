LOCAL_PATH :=$(call my-dir)
#=====================================camerad=====================================
include $(CLEAR_VARS)

LOCAL_MODULE := camerad
LOCAL_MODULE_TAGS := optional

LOCAL_C_INCLUDES := ivi/system/hardware/handler/camera/include \
                    ivi/system/core/include/ \

LOCAL_SRC_FILES := main_camerad.cpp
LOCAL_VENDOR_MODULE := true
LOCAL_SHARED_LIBRARIES := libutils libcameradmanager libhidlbase libhidltransport libhwbinder
include $(BUILD_EXECUTABLE)
