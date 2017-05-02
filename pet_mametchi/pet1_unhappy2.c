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
static const unsigned char pixel_pet1_unhappy24BPP_UNCOMP[] =
{
0xbe, 0xbe, 0xbe, 0xbe, 0xbe, 0xbe, 0xbe, 0xbe, 0xbe, 0xbe, 0xbe, 0xbe, 0xbe, 0xbe, 0xbe, 0xbe, 0xbe, 0xbe, 0xbe, 0xbe, 
0xbb, 0xc0, 0xbb, 0xc0, 0xbb, 0xc0, 0xbb, 0xc0, 0xbb, 0xc0, 0xbb, 0xc0, 0xbb, 0xc0, 0xbb, 0xc0, 0xbb, 0xc0, 0xbb, 0xc0, 
0xbc, 0xbe, 0xbc, 0xbe, 0xbc, 0xbe, 0xbc, 0xbe, 0xbc, 0xbe, 0xbc, 0xbe, 0xbc, 0xbe, 0xbc, 0xbe, 0xbc, 0xbe, 0xbc, 0xbe, 
0xc0, 0xbb, 0xc0, 0xb0, 0xc0, 0xbb, 0xc0, 0xb0, 0xc0, 0xbb, 0xc0, 0xc0, 0xc0, 0xbb, 0xc0, 0xbb, 0xc0, 0xbb, 0xc0, 0xb0, 
0xbe, 0xbc, 0xbe, 0xbe, 0xbe, 0xbc, 0xbe, 0xbe, 0xbe, 0xbc, 0xbe, 0xbc, 0xbe, 0xbc, 0xbe, 0xbe, 0xbe, 0xbc, 0xbe, 0xbe, 
0xbb, 0xc0, 0xbb, 0xc0, 0xbb, 0xc0, 0xbb, 0xc0, 0xbb, 0xc0, 0xbb, 0xc0, 0xbb, 0xc0, 0xbb, 0xc0, 0xbb, 0xc0, 0xbb, 0xc0, 
0xbc, 0xbe, 0xbc, 0xbe, 0xbc, 0xbe, 0xbc, 0xbe, 0xbc, 0xbe, 0xbc, 0xbe, 0xbc, 0xbe, 0xbc, 0xbe, 0xbc, 0xbe, 0xbc, 0xbe, 
0xc0, 0xb0, 0xc0, 0xb0, 0xc0, 0x21, 0x12, 0xb0, 0xc0, 0xb0, 0xc0, 0xb0, 0x21, 0x12, 0xc0, 0xb0, 0xc0, 0xb0, 0xc0, 0xb0, 
0xbe, 0xbe, 0xbe, 0xbe, 0xb2, 0x44, 0x44, 0x2c, 0xbe, 0xbe, 0xbe, 0xb2, 0x44, 0x44, 0x1e, 0xbe, 0xbe, 0xbe, 0xbe, 0xbe, 
0xbb, 0xc0, 0xbb, 0xc0, 0xb1, 0x44, 0x44, 0x42, 0xbb, 0xc0, 0xbb, 0xc4, 0x44, 0x44, 0x42, 0xc0, 0xbb, 0xc0, 0xbb, 0xc0, 
0xbc, 0xbe, 0xbc, 0xbe, 0xb1, 0x44, 0x44, 0x44, 0x2c, 0xbe, 0xbc, 0x14, 0x44, 0x44, 0x41, 0xbe, 0xbc, 0xbe, 0xbc, 0xbe, 
0xc0, 0xbb, 0xc0, 0xb0, 0xc2, 0x44, 0x44, 0x44, 0x42, 0xcb, 0xc2, 0x44, 0x44, 0x44, 0x42, 0xb0, 0xc0, 0xbb, 0xc0, 0xb0, 
0xbe, 0xbc, 0xbe, 0xbe, 0xb2, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x42, 0xbe, 0xbe, 0xbc, 0xbe, 0xbc, 
0xbb, 0xc0, 0xbb, 0xc0, 0xb2, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x42, 0xc0, 0xbb, 0xc0, 0xbb, 0xc0, 
0xbc, 0xbe, 0xbc, 0xbe, 0xb1, 0xbc, 0xbc, 0xbc, 0xbc, 0xb4, 0x44, 0x44, 0x44, 0x44, 0x41, 0xbe, 0xbc, 0xbe, 0xbc, 0xbe, 
0xc0, 0xb0, 0xc0, 0xb0, 0xc4, 0xcb, 0xcb, 0xc4, 0x4b, 0xcb, 0xcb, 0xcb, 0xc0, 0xcb, 0xc4, 0xc0, 0xc0, 0xc0, 0xc0, 0xb0, 
0xbe, 0xbe, 0xbe, 0xbe, 0x2c, 0xbc, 0x44, 0x4c, 0xbc, 0xbc, 0xb4, 0xbc, 0xbc, 0xbc, 0xbc, 0x2e, 0xbe, 0xbe, 0xbe, 0xbe, 
0xbb, 0xc0, 0xbb, 0xc0, 0x1b, 0xcb, 0xcb, 0xcb, 0xcb, 0xcb, 0xcb, 0x44, 0x44, 0xcb, 0xcb, 0x20, 0xbb, 0xc0, 0xbb, 0xc0, 
0xbc, 0xbe, 0xbc, 0xbe, 0x1c, 0xbc, 0xb4, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0x1e, 0xbc, 0xbe, 0xbc, 0xbe, 
0xc0, 0xbb, 0xc0, 0xb0, 0x2b, 0xcb, 0xcb, 0xcb, 0xcb, 0xcb, 0xcb, 0xcb, 0x4b, 0xcb, 0xcb, 0x20, 0xc0, 0xbb, 0xc0, 0xb0, 
0xbe, 0xbc, 0xbe, 0xbe, 0xb4, 0xbc, 0xbc, 0xec, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0xb4, 0xbe, 0xbe, 0xbc, 0xbe, 0xbe, 
0xbb, 0xc0, 0xbb, 0xc0, 0xb2, 0xcb, 0xcb, 0xcb, 0xcb, 0xcb, 0xcb, 0xcb, 0x4b, 0xcb, 0xc2, 0xc0, 0xbb, 0xc0, 0xbb, 0xc0, 
0xbc, 0xbe, 0xbc, 0xbe, 0xbc, 0x1c, 0xbc, 0xbc, 0xb4, 0x4c, 0xbc, 0xbc, 0x4c, 0xbc, 0x1c, 0xbe, 0xbc, 0xbe, 0xbc, 0xbe, 
0xc0, 0xb0, 0xc0, 0xb0, 0xc0, 0xc4, 0x40, 0xcb, 0xcb, 0xc4, 0xcb, 0xc4, 0xc4, 0xc4, 0xc0, 0xbb, 0xc0, 0xb0, 0xc0, 0xb0, 
0xbe, 0xbe, 0xbe, 0xbe, 0xbe, 0xb2, 0x44, 0x4c, 0xbe, 0xbc, 0xbc, 0xb4, 0xb4, 0x42, 0xbe, 0xbe, 0xbe, 0xbe, 0xbe, 0xbe, 
0xbb, 0xc0, 0xbb, 0xc0, 0xbb, 0xc1, 0xcb, 0xc4, 0x44, 0x44, 0x44, 0x44, 0xc4, 0xc1, 0xbb, 0xc0, 0xbb, 0xc0, 0xbb, 0xc0, 
0xbc, 0xbe, 0xbc, 0xbe, 0xbc, 0x2c, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0x4c, 0xbc, 0x2c, 0xbe, 0xbc, 0xbe, 0xbc, 0xbe, 
0xc0, 0xbb, 0xc0, 0xb0, 0xc0, 0x2b, 0xc4, 0xcb, 0xcb, 0xcb, 0xcb, 0xcb, 0xc4, 0xcb, 0x20, 0xb0, 0xc0, 0xbb, 0xc0, 0xb0, 
0xbe, 0xbc, 0xbe, 0xbe, 0xbe, 0xb2, 0x44, 0xec, 0xbc, 0xbc, 0xbc, 0xbc, 0xb4, 0x42, 0xbe, 0xbe, 0xbe, 0xbc, 0xbe, 0xbe, 
0xbb, 0xc0, 0xbb, 0xc0, 0xbb, 0xc0, 0x24, 0xcb, 0xcb, 0xcb, 0xcb, 0xcb, 0xc4, 0x20, 0xbb, 0xc0, 0xbb, 0xc0, 0xbb, 0xc0, 
0xbc, 0xbe, 0xbc, 0xbe, 0xbc, 0xbe, 0xe4, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0xb4, 0xbe, 0xbc, 0xbe, 0xbc, 0xbe, 0xbc, 0xbe, 
0xc0, 0xb0, 0xc0, 0xb0, 0xc0, 0xb0, 0xc4, 0xcb, 0xcb, 0xcb, 0xcb, 0xcb, 0xc4, 0xb0, 0xc0, 0xb0, 0xc0, 0xb0, 0xc0, 0xb0, 
0xbe, 0xbe, 0xbe, 0xbe, 0xbe, 0xbe, 0xb1, 0xbc, 0xb4, 0x44, 0x44, 0xbc, 0xb1, 0xbe, 0xbe, 0xbe, 0xbe, 0xbe, 0xbe, 0xbe, 
0xbb, 0xc0, 0xbb, 0xc0, 0xbb, 0xc0, 0xb2, 0xcb, 0x1b, 0xc0, 0xbb, 0x1b, 0xc2, 0xc0, 0xbb, 0xc0, 0xbb, 0xc0, 0xbb, 0xc0, 
0xbc, 0xbe, 0xbc, 0xbe, 0xbc, 0xbe, 0xbc, 0x22, 0xbc, 0xbe, 0xbc, 0xb2, 0x2c, 0xbe, 0xbc, 0xbe, 0xbc, 0xbe, 0xbc, 0xbe, 
0xc0, 0xbb, 0xc0, 0xb0, 0xc0, 0xbb, 0xc0, 0xb0, 0xc0, 0xbb, 0xc0, 0xbb, 0xc0, 0xbb, 0xc0, 0xc0, 0xc0, 0xbb, 0xc0, 0xb0, 
0xbe, 0xbc, 0xbe, 0xbe, 0xbe, 0xbc, 0xbe, 0xbe, 0xbe, 0xbc, 0xbe, 0xbe, 0xbe, 0xbc, 0xbe, 0xbe, 0xbe, 0xbc, 0xbe, 0xbe, 
0xbb, 0xc0, 0xbb, 0xc0, 0xbb, 0xc0, 0xbb, 0xc0, 0xbb, 0xc0, 0xbb, 0xc0, 0xbb, 0xc0, 0xbb, 0xc0, 0xbb, 0xc0, 0xbb, 0xc0, 
0xbc, 0xbe, 0xbc, 0xbe, 0xbc, 0xbe, 0xbc, 0xbe, 0xbc, 0xbe, 0xbc, 0xbe, 0xbc, 0xbe, 0xbc, 0xbe, 0xbc, 0xbe, 0xbc, 0xbe, 
0xc0, 0xb0, 0xc0, 0xb0, 0xc0, 0xb0, 0xc0, 0xb0, 0xc0, 0xb0, 0xc0, 0xb0, 0xc0, 0xb0, 0xc0, 0xb0, 0xc0, 0xb0, 0xc0, 0xb0
};

static const unsigned long palette_pet1_unhappy24BPP_UNCOMP[]=
{
	0xf8f8f8, 	0x2a2a2a, 	0xd1d1d1, 	0xd2d2d2, 
	0x020001, 	0x040001, 	0x020202, 	0x010000, 
	0x010101, 	0x000000, 	0xfeffff, 	0xf6f8f7, 
	0xf8f6f7, 	0xfafafa, 	0xf9f7f8, 	0xffffff
};

const tImage  pet1_unhappy24BPP_UNCOMP=
{
	IMAGE_FMT_4BPP_UNCOMP,
	40,
	40,
	16,
	palette_pet1_unhappy24BPP_UNCOMP,
	pixel_pet1_unhappy24BPP_UNCOMP,
};
