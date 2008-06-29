#ifndef STB_VORBIS_EXT_H
#define STB_VORBIS_EXT_H

#include "stb_vorbis.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef STB_VORBIS_NO_INTEGER_CONVERSION
extern int stb_vorbis_decode_memory(unsigned char *input_data, int input_len,
                                    int *channels, short **output);
#endif

#ifdef __cplusplus
}
#endif

#endif
