/* Copyright (c) 2012, Texas Instruments Incorporated
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:

*  Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

*  Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

*  Neither the name of Texas Instruments Incorporated nor the names of
   its contributors may be used to endorse or promote products derived
   from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.*/


#include <ti/grlib/grlib.h>

static const unsigned char pixel_normal24BPP_UNCOMP[] =
{
0xb2, 0xb6, 0xb6, 0x46, 0xb6, 0x26, 0xb2, 0xb2, 0xb2, 0xb6, 0xb6, 0x16, 0x12, 0xb2, 0xb2, 0xb2, 0xb2, 0xb6, 0xb2, 0xb6, 
0x6b, 0x61, 0x61, 0x61, 0x61, 0xa1, 0x61, 0x6b, 0x6b, 0xa1, 0x61, 0x61, 0xab, 0xa1, 0xab, 0xab, 0x6b, 0x61, 0x61, 0x61, 
0xb2, 0x12, 0xb6, 0xb2, 0xb6, 0x12, 0xb6, 0x16, 0xb2, 0x12, 0x16, 0xb6, 0x26, 0x16, 0x46, 0xb2, 0xb6, 0x12, 0xb6, 0xb2, 
0x61, 0x6b, 0x61, 0x6b, 0xab, 0xab, 0x6a, 0xa1, 0x61, 0x6b, 0x6a, 0xa1, 0xa1, 0xa1, 0x61, 0xab, 0x61, 0x6b, 0x61, 0x6b, 
0xb2, 0xb6, 0xb2, 0xb2, 0xb2, 0x46, 0x16, 0x46, 0x16, 0x46, 0xb6, 0x16, 0x46, 0x46, 0x16, 0xb2, 0xb2, 0xb6, 0xb2, 0xb6, 
0x61, 0x61, 0x6b, 0xa1, 0x2b, 0x61, 0x6e, 0xee, 0xe1, 0x6b, 0xa1, 0x61, 0xee, 0xe1, 0x61, 0x6b, 0x61, 0x61, 0x6b, 0x61, 
0xb6, 0x12, 0xb6, 0xb2, 0xb2, 0x16, 0xee, 0xee, 0xee, 0x16, 0xb6, 0xee, 0xee, 0xee, 0x46, 0x12, 0xb6, 0x12, 0xb6, 0x12, 
0x61, 0x6b, 0x6b, 0xab, 0x61, 0xa1, 0xee, 0xee, 0xee, 0x61, 0x61, 0xee, 0xee, 0xee, 0xe1, 0xab, 0x61, 0x6b, 0x61, 0x6b, 
0xb2, 0xb6, 0xb2, 0xb2, 0xb6, 0x4e, 0xee, 0xee, 0xee, 0x46, 0x16, 0xee, 0xee, 0xee, 0xe6, 0x46, 0xb2, 0xb6, 0xb2, 0xb6, 
0x6b, 0x61, 0x61, 0x61, 0x61, 0x6e, 0xee, 0xee, 0xee, 0x61, 0x61, 0xee, 0xee, 0xee, 0xe1, 0x61, 0x6b, 0x61, 0x61, 0x61, 
0xb6, 0x12, 0xb2, 0xb2, 0x46, 0x4e, 0xee, 0xee, 0xee, 0xe6, 0x46, 0xee, 0xee, 0xee, 0xe6, 0xb2, 0xb6, 0x12, 0xb6, 0xb2, 
0x61, 0x6b, 0x6b, 0x61, 0x61, 0x6e, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xe1, 0xab, 0x61, 0x6b, 0x61, 0x6b, 
0xb2, 0xb2, 0xb2, 0xb6, 0x46, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xe6, 0x46, 0xb2, 0xb6, 0xb2, 0xb6, 
0x61, 0x61, 0x2b, 0x61, 0x6e, 0x0f, 0x00, 0x0f, 0x00, 0x0e, 0xee, 0xee, 0xee, 0xee, 0xee, 0x61, 0x61, 0x61, 0x6b, 0x61, 
0x16, 0xb2, 0xb2, 0x16, 0x4e, 0x00, 0x0e, 0xee, 0x00, 0x0f, 0x0f, 0x0e, 0xee, 0x00, 0x0e, 0x16, 0xb6, 0x12, 0xb6, 0x12, 
0x6a, 0xab, 0xa1, 0x61, 0xe0, 0x0f, 0xef, 0x0e, 0xef, 0x0f, 0x0f, 0xee, 0x00, 0xef, 0x00, 0xe1, 0x61, 0x6b, 0x61, 0x6b, 
0xb2, 0xb6, 0xb2, 0x46, 0xe0, 0x0e, 0x0f, 0xee, 0xef, 0x00, 0x00, 0xee, 0xef, 0x0e, 0x00, 0xe6, 0x12, 0xb6, 0xb2, 0xb6, 
0x6b, 0x61, 0x6b, 0x61, 0xe0, 0x0e, 0x0f, 0xee, 0xef, 0x00, 0x00, 0xee, 0xe0, 0x0e, 0x0f, 0xe1, 0x6b, 0x61, 0x61, 0x61, 
0xb6, 0x12, 0xb6, 0xb6, 0xe0, 0x0e, 0xf0, 0xee, 0xe0, 0x0f, 0x0f, 0xee, 0xef, 0x0e, 0x00, 0xe6, 0x16, 0x12, 0xb6, 0xb2, 
0x61, 0x6b, 0x6b, 0xa1, 0xe0, 0x00, 0xef, 0xee, 0xef, 0x00, 0x0f, 0xee, 0xef, 0xe0, 0x00, 0xe1, 0x61, 0x6b, 0x61, 0x6b, 
0x16, 0xb6, 0xb2, 0x46, 0x4e, 0x0f, 0x0e, 0xee, 0x0f, 0x00, 0x00, 0x0e, 0xee, 0x00, 0x0e, 0x46, 0x12, 0xb6, 0xb2, 0xb6, 
0xa1, 0x61, 0x6b, 0x61, 0x61, 0xe0, 0x0f, 0x0f, 0x0f, 0xef, 0xe0, 0x0f, 0x00, 0x0f, 0x0e, 0x6b, 0x61, 0x61, 0x6b, 0x61, 
0x16, 0xb2, 0xb6, 0x12, 0xb6, 0x1e, 0xef, 0x0f, 0x00, 0xee, 0xef, 0x0f, 0x00, 0x00, 0xe6, 0x12, 0xb6, 0x12, 0xb6, 0x12, 
0x61, 0xab, 0xab, 0x6b, 0x61, 0x61, 0x6e, 0xe0, 0x0f, 0x0f, 0x0f, 0x0f, 0x00, 0xee, 0x61, 0xab, 0x61, 0x6b, 0x61, 0x6b, 
0xb2, 0xb2, 0xb2, 0xb6, 0xb6, 0x46, 0x4e, 0x0e, 0xee, 0xee, 0xee, 0xee, 0xee, 0x66, 0x46, 0x42, 0xb2, 0xb6, 0xb2, 0xb6, 
0x61, 0x61, 0x61, 0x61, 0xa1, 0x61, 0xe0, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0xe4, 0x61, 0x61, 0x6b, 0x61, 0x61, 0x61, 
0x16, 0x12, 0xb6, 0xb2, 0xb6, 0x1e, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x0f, 0x0e, 0x46, 0xb2, 0xb6, 0x12, 0xb6, 0xb2, 
0x61, 0xab, 0x61, 0xab, 0x6b, 0xae, 0x00, 0xef, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x00, 0xe1, 0x6b, 0x61, 0x6b, 0x61, 0x6b, 
0xb2, 0x46, 0x16, 0xb6, 0x12, 0x46, 0xee, 0xe0, 0x0f, 0x00, 0x00, 0x00, 0x0e, 0x00, 0xe6, 0xb2, 0xb2, 0xb6, 0xb2, 0xb6, 
0x61, 0x61, 0x61, 0x61, 0xab, 0x6b, 0xa1, 0xef, 0x0f, 0x0f, 0x00, 0x0f, 0x00, 0xee, 0x61, 0xa1, 0x61, 0x61, 0x6b, 0x61, 
0xb6, 0x12, 0xb2, 0x12, 0x16, 0x16, 0x16, 0xe0, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0xe6, 0x46, 0xb2, 0xb6, 0x12, 0xb6, 0x12, 
0xa1, 0x6b, 0x61, 0xab, 0x6b, 0xa1, 0x61, 0xe0, 0x00, 0x00, 0x00, 0x0f, 0x00, 0xe1, 0x61, 0x6b, 0x61, 0x6b, 0x61, 0x6b, 
0xb2, 0xb6, 0xb2, 0xb6, 0x16, 0x26, 0x16, 0xe0, 0x0f, 0xee, 0xee, 0xe0, 0x0f, 0xe6, 0x16, 0x46, 0xb2, 0xb6, 0xb2, 0xb6, 
0x6b, 0x61, 0x61, 0x61, 0x2b, 0x6b, 0x61, 0xe0, 0x0e, 0x61, 0x61, 0x6e, 0x00, 0xe1, 0x61, 0x61, 0x6b, 0x61, 0x61, 0x61, 
0xb6, 0x12, 0xb6, 0xb2, 0xb6, 0x12, 0x16, 0xe0, 0x0e, 0x16, 0x46, 0x4e, 0x00, 0xe6, 0x46, 0x12, 0xb6, 0x12, 0xb6, 0xb2, 
0x61, 0x6b, 0x61, 0xab, 0xa1, 0x6b, 0x61, 0x6e, 0xe1, 0xa1, 0x61, 0x61, 0xee, 0x61, 0xab, 0xab, 0x61, 0x6b, 0x61, 0x6b, 
0xb2, 0x46, 0xb2, 0xb2, 0x12, 0x26, 0xb6, 0x46, 0x46, 0x46, 0xb6, 0x16, 0x46, 0x16, 0xb6, 0xb2, 0xb2, 0xb6, 0xb2, 0xb6, 
0x61, 0x61, 0x61, 0x61, 0xa1, 0x61, 0x61, 0x61, 0x6b, 0xa1, 0x2b, 0xa1, 0xa1, 0xab, 0x6b, 0x6b, 0x61, 0x61, 0x6b, 0x61, 
0xb6, 0x12, 0xb6, 0x12, 0x12, 0x16, 0xb6, 0x12, 0xb6, 0xb2, 0x16, 0xb2, 0xb2, 0x12, 0xb6, 0xb2, 0xb6, 0x12, 0xb6, 0x12, 
0x61, 0x6b, 0x61, 0x6b, 0x6a, 0xab, 0x61, 0xab, 0xab, 0xab, 0xab, 0xab, 0x61, 0x61, 0x61, 0xab, 0x61, 0x6b, 0x61, 0x6b
};

static const unsigned long palette_normal24BPP_UNCOMP[]=
{
	0xf6fdf6, 	0x346144, 	0x2e5f3f, 	0xf8f9fb, 
	0x345b40, 	0x375940, 	0x3a5743, 	0x2d613d, 
	0x010000, 	0x2e623e, 	0x31603e, 	0x2f613e, 
	0x316040, 	0x000000, 	0x000000, 	0xffffff
};

const tImage  normal24BPP_UNCOMP=
{
	IMAGE_FMT_4BPP_UNCOMP,
	40,
	40,
	16,
	palette_normal24BPP_UNCOMP,
	pixel_normal24BPP_UNCOMP,
};

