APP_STL := gnustl_static

# Android >= v2.3
APP_PLATFORM := android-9

# Build ARMv7-A machine code.
APP_ABI := armeabi-v7a

ifndef NDK_DEBUG
APP_CFLAGS := -O3 -ftree-vectorize -ffast-math -funroll-loops
endif

ifeq ($(APP_ABI),armeabi-v7a)
	APP_CFLAGS += -mtune=cortex-a9

# optionally add NEON to compilation flags.
# to activate, run: "ndk-build USE_NEON=1"
ifdef USE_NEON
$(call __ndk_info,Building everything with NEON support!)
	APP_CFLAGS += -mfpu=neon -DHAVE_NEON=1 -flax-vector-conversions
endif
endif

APP_CPPFLAGS += -frtti

#$(call __ndk_info,APP_CFLAGS=$(APP_CFLAGS))
#$(call __ndk_info,APP_CPPFLAGS=$(APP_CPPFLAGS))

#-fsingle-precision-constant
