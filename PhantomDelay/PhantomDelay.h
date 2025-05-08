#ifndef PHANTOM_DELAY_H
#define PHANTOM_DELAY_H

#include <windows.h>

namespace stealth {

    inline void PhantomDelay(unsigned int seconds) {
        LARGE_INTEGER     freq, start, now;
        QueryPerformanceFrequency(&freq);
        QueryPerformanceCounter(&start);

        while ((QueryPerformanceCounter(&now), now.QuadPart - start.QuadPart) < freq.QuadPart * seconds);
    }

}

#endif
