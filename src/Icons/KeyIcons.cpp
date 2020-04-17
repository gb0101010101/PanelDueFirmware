/*
 * KeyIcons.cpp
 *
 * Created: 29/11/2015 12:10:55
 *  Author: David
 */

#include "asf.h"
#include "Configuration.hpp"
#include "Icons.hpp"

#if LARGE_FONT

extern const uint8_t IconBackspace[] =
{   30, 24,   // width, height
    0x11, 0x11, 0x11, 0x11, 0x11, 0x22, 0x22, 0x11, 0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11, 0x12, 0x00, 0x00, 0x21, 0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11, 0x20, 0x00, 0x00, 0x02, 0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x12, 0x00, 0x00, 0x00, 0x00, 0x21, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x20, 0x00, 0x00, 0x00, 0x00, 0x02, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x11, 0x11,
    0x11, 0x11, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x11, 0x11,
    0x11, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x11,
    0x11, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x11,
    0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21,
    0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02,
    0x20, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x02,
    0x20, 0x00, 0x00, 0x23, 0x20, 0x00, 0x00, 0x02, 0x32, 0x00, 0x00, 0x02,
    0x20, 0x00, 0x00, 0x23, 0x32, 0x00, 0x00, 0x23, 0x32, 0x00, 0x00, 0x02,
    0x20, 0x00, 0x00, 0x02, 0x33, 0x20, 0x02, 0x33, 0x20, 0x00, 0x00, 0x02,
    0x20, 0x00, 0x00, 0x00, 0x23, 0x32, 0x23, 0x32, 0x00, 0x00, 0x00, 0x02,
    0x20, 0x00, 0x00, 0x00, 0x02, 0x33, 0x33, 0x20, 0x00, 0x00, 0x00, 0x02,
    0x20, 0x00, 0x00, 0x00, 0x00, 0x23, 0x32, 0x00, 0x00, 0x00, 0x00, 0x02,
    0x20, 0x00, 0x00, 0x00, 0x02, 0x33, 0x33, 0x20, 0x00, 0x00, 0x00, 0x02,
    0x20, 0x00, 0x00, 0x00, 0x23, 0x32, 0x23, 0x32, 0x00, 0x00, 0x00, 0x02,
    0x20, 0x00, 0x00, 0x02, 0x33, 0x20, 0x02, 0x33, 0x20, 0x00, 0x00, 0x02,
    0x20, 0x00, 0x00, 0x23, 0x32, 0x00, 0x00, 0x23, 0x32, 0x00, 0x00, 0x02,
    0x20, 0x00, 0x00, 0x23, 0x20, 0x00, 0x00, 0x02, 0x32, 0x00, 0x00, 0x02,
    0x20, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x02,
    0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02,
    0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02,
    0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02,
    0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02,
    0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21,
    0x11, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x11
};

extern const uint8_t IconEnter[] =
{   30, 30,   // width, height
    0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x01, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10,
    0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x00, 0x00, 0x01, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11, 0x10, 0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
    0x00, 0x00, 0x10, 0x00, 0x10, 0x00, 0x01, 0x11, 0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x00, 0x01, 0x10, 0x00, 0x11, 0x00, 0x01, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x00, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10,
    0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x10, 0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x00, 0x11, 0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x00, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10,
    0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x10, 0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x00, 0x11, 0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x00, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10,
    0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x10, 0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x00, 0x11, 0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x00, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10,
    0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x10, 0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x00, 0x11, 0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x00, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10,
    0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x10, 0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x11, 0x11, 0x11, 0x11, 0x11
};

#else

extern const uint8_t IconBackspace[] =
{   28, 18,   // width, height
    0x11, 0x11, 0x11, 0x11, 0x22, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
    0x12, 0x00, 0x21, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x20, 0x00, 0x02,
    0x11, 0x11, 0x11, 0x11, 0x11, 0x12, 0x00, 0x00, 0x00, 0x21, 0x11, 0x11,
    0x11, 0x11, 0x20, 0x00, 0x00, 0x00, 0x02, 0x11, 0x11, 0x11, 0x12, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x21, 0x11, 0x11, 0x20, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x02, 0x11, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21,
    0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x20, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x20, 0x00, 0x20, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x02, 0x20, 0x02, 0x32, 0x00, 0x00, 0x00, 0x23, 0x20, 0x02,
    0x20, 0x02, 0x33, 0x20, 0x00, 0x02, 0x33, 0x20, 0x02, 0x20, 0x00, 0x23,
    0x32, 0x00, 0x23, 0x32, 0x00, 0x02, 0x20, 0x00, 0x02, 0x33, 0x22, 0x33,
    0x20, 0x00, 0x02, 0x20, 0x00, 0x00, 0x23, 0x33, 0x32, 0x00, 0x00, 0x02,
    0x20, 0x00, 0x00, 0x02, 0x33, 0x24, 0x00, 0x00, 0x02, 0x20, 0x00, 0x00,
    0x23, 0x33, 0x32, 0x00, 0x00, 0x02, 0x20, 0x00, 0x02, 0x33, 0x22, 0x33,
    0x20, 0x00, 0x02, 0x20, 0x00, 0x23, 0x32, 0x00, 0x23, 0x32, 0x00, 0x02,
    0x20, 0x02, 0x33, 0x20, 0x00, 0x02, 0x33, 0x20, 0x02, 0x20, 0x02, 0x32,
    0x00, 0x00, 0x00, 0x23, 0x20, 0x02, 0x20, 0x00, 0x20, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x02, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02,
    0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x20, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x02, 0x12, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x21
};

extern const uint8_t IconEnter[] =
{   30, 21,   // width, height
    0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x01, 0x11, 0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11, 0x00, 0x01, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x00, 0x00, 0x01, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
    0x00, 0x00, 0x00, 0x01, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x00, 0x00,
    0x00, 0x00, 0x01, 0x11, 0x11, 0x11, 0x11, 0x11, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x01, 0x11, 0x11, 0x11, 0x11, 0x00, 0x00, 0x10, 0x00, 0x10, 0x00,
    0x01, 0x11, 0x11, 0x11, 0x10, 0x00, 0x11, 0x00, 0x01, 0x10, 0x00, 0x11,
    0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x00, 0x11, 0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11, 0x00, 0x01, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x10, 0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
    0x11, 0x00, 0x01, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10,
    0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x00, 0x01,
    0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x00, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x00, 0x01, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x00, 0x11, 0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11, 0x00, 0x01, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x10, 0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
    0x11, 0x00, 0x01, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10,
    0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x00, 0x01,
    0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x00, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x00, 0x01, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x00, 0x11, 0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11, 0x00, 0x01, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x10, 0x00, 0x11, 0x11, 0x11, 0x11, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x01, 0x11, 0x11, 0x11, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x11, 0x11, 0x11, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x11, 0x11, 0x11
};

#endif

// End
