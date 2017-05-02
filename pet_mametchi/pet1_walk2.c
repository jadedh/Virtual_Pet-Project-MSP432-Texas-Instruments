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

static const unsigned char pixel_pet1_walk24BPP_UNCOMP[] =
{
0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 
0xff, 0xcf, 0xff, 0xcf, 0xff, 0xcf, 0xff, 0xcf, 0xff, 0xcf, 0xff, 0xcf, 0xff, 0xcf, 0xff, 0xcf, 0xff, 0xcf, 0xff, 0xcf, 
0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 
0xff, 0xff, 0xcf, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xff, 0xcf, 0xff, 
0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 
0xff, 0xcf, 0xff, 0xcf, 0xff, 0xcf, 0xff, 0xcf, 0xff, 0xcf, 0xff, 0xcf, 0xff, 0xcf, 0xff, 0xcf, 0xff, 0xcf, 0xff, 0xcf, 
0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xf0, 0x44, 0x3e, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x04, 0x44, 0x41, 0xff, 0xff, 0x34, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x44, 0x44, 0x44, 0x1e, 0xf1, 0x44, 0x44, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 
0xff, 0xcf, 0xff, 0xcf, 0xff, 0xcc, 0x44, 0x44, 0x44, 0x40, 0x04, 0x44, 0x44, 0x1f, 0xff, 0xcf, 0xff, 0xcf, 0xff, 0xcf, 
0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xf1, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x40, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 
0xff, 0xff, 0xcf, 0xff, 0xff, 0x04, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x41, 0xcf, 0xff, 0xff, 0xff, 0xcf, 0xff, 
0xfe, 0xfe, 0xfe, 0xfe, 0xf1, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 
0xff, 0xcf, 0xff, 0xcf, 0x04, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x3f, 0xcf, 0xff, 0xcf, 0xff, 0xcf, 
0xfe, 0xfe, 0xfe, 0xfe, 0x14, 0x4e, 0xfc, 0xfe, 0xf0, 0x44, 0x44, 0x44, 0x44, 0x44, 0x4e, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 
0xff, 0xff, 0xff, 0xff, 0x44, 0x44, 0xcf, 0xff, 0xcf, 0xcf, 0xcf, 0xff, 0xcc, 0xcf, 0x4f, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xfe, 0xfe, 0xfe, 0xf3, 0xf4, 0x4c, 0x4e, 0xfc, 0xfc, 0xfc, 0xfe, 0xfc, 0xfe, 0xfc, 0xf3, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 
0xff, 0xcf, 0xff, 0xc1, 0xc4, 0x4f, 0x4f, 0xcf, 0xcf, 0xcf, 0xcf, 0x0f, 0xcf, 0xcf, 0xc1, 0xcf, 0xff, 0xcf, 0xff, 0xcf, 
0xfe, 0xfe, 0xfe, 0xf4, 0xf4, 0x4e, 0x40, 0xfe, 0xf0, 0xfe, 0xf0, 0xfe, 0xf0, 0xfe, 0xf1, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 
0xcf, 0xff, 0xcf, 0xf4, 0xc4, 0x4f, 0x4c, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xc1, 0xff, 0xff, 0xff, 0xcf, 0xff, 
0xfe, 0xfe, 0xfe, 0xf0, 0xfe, 0x44, 0xfe, 0xcc, 0xfe, 0xfc, 0xfc, 0xfc, 0xfe, 0xcc, 0xf1, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 
0xff, 0xcf, 0xff, 0xcf, 0x1f, 0x0f, 0xcf, 0xcf, 0xcf, 0x0f, 0xcf, 0x0f, 0xcf, 0x0f, 0x4f, 0xcf, 0xff, 0xcf, 0xff, 0xcf, 
0xfe, 0xfe, 0xfe, 0xfe, 0xf1, 0xfe, 0xfe, 0xfe, 0xf0, 0xfe, 0xfc, 0xfe, 0xf0, 0xfe, 0x3e, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 
0xff, 0xff, 0xff, 0xff, 0xff, 0x14, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcc, 0xc1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xf0, 0x44, 0xfc, 0xfc, 0xfc, 0xfe, 0xfc, 0xfe, 0x4e, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 
0xff, 0xcf, 0xff, 0xcf, 0xff, 0xcf, 0xf3, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0xcf, 0xff, 0xcf, 0xff, 0xcf, 0xff, 0xcf, 
0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xf0, 0x4e, 0xf4, 0x4e, 0xf0, 0xfe, 0x41, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 
0xff, 0xff, 0xcf, 0xff, 0xff, 0xff, 0xc0, 0x4f, 0x4f, 0xcf, 0xcf, 0xcf, 0x40, 0xff, 0xcf, 0xff, 0xff, 0xff, 0xcf, 0xff, 
0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xf1, 0xfc, 0x4e, 0xfc, 0x4c, 0xfc, 0xf1, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 
0xff, 0xcf, 0xff, 0xcf, 0xff, 0xcf, 0xf4, 0xcf, 0xc4, 0x44, 0xcf, 0x0f, 0xc4, 0xcf, 0xff, 0xcf, 0xff, 0xcf, 0xff, 0xcf, 
0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xf4, 0xfe, 0xf0, 0xfe, 0xfc, 0xfe, 0xf4, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc4, 0xcf, 0xcc, 0xcf, 0xcf, 0xcf, 0xcf, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x0e, 0xfc, 0xfe, 0xfc, 0xfe, 0xcc, 0xfe, 0x1e, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 
0xff, 0xcf, 0xff, 0xcf, 0xff, 0xcf, 0x3f, 0x0f, 0x44, 0x44, 0x44, 0x44, 0xcf, 0x0f, 0xff, 0xcf, 0xff, 0xcf, 0xff, 0xcf, 
0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x00, 0xf4, 0x00, 0xfe, 0xf0, 0xc0, 0x00, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 
0xff, 0xff, 0xcf, 0xff, 0xff, 0xff, 0xc1, 0x1f, 0xcf, 0xff, 0xcf, 0xff, 0xcf, 0xff, 0xcf, 0xff, 0xff, 0xff, 0xcf, 0xff, 
0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 
0xff, 0xcf, 0xff, 0xcf, 0xff, 0xcf, 0xff, 0xcf, 0xff, 0xcf, 0xff, 0xcf, 0xff, 0xcf, 0xff, 0xcf, 0xff, 0xcf, 0xff, 0xcf, 
0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};

static const unsigned long palette_pet1_walk24BPP_UNCOMP[]=
{
	0xe0e0e0, 	0xb1b1b1, 	0xfafafa, 	0xb8b8b8, 
	0x020202, 	0xf8f8f8, 	0xfefefe, 	0xf9f9f9, 
	0xffffff, 	0x010101, 	0xf7f7f7, 	0x000000, 
	0xf6f6f6, 	0xf8faf9, 	0xf9f7f8, 	0xfbfbfb
};

const tImage  pet1_walk24BPP_UNCOMP=
{
	IMAGE_FMT_4BPP_UNCOMP,
	40,
	40,
	16,
	palette_pet1_walk24BPP_UNCOMP,
	pixel_pet1_walk24BPP_UNCOMP,
};
