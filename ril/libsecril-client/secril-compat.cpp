/**
 * @file    secril-client.cpp
 *
 * @brief   RIL compatibility for tuna devices
 */

#include <utils/Log.h>


#if defined(TOROPLUS_RADIO)
    /**
     * toroplus's RIL has the ability to take a screenshot. Huh?
     * Supposedly some vendor/testing/factory stuff. This codepath
     * should never be hit under any legitimate circumstances.
     * Define the symbol, and log any calls to it.
     */
    extern "C"
    void _ZN7android16ScreenshotClient6updateEv() {
        ALOGE("%s: CALLED! SHOULD NOT HAPPEN!!", __func__);
    }
#endif

