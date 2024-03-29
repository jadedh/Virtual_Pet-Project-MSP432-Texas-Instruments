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

static const unsigned char pixel_pet1_happy14BPP_UNCOMP[] =
{
0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
0x33, 0x23, 0x33, 0x23, 0x33, 0x23, 0x33, 0x23, 0x33, 0x23, 0x33, 0x23, 0x33, 0x23, 0x33, 0x23, 0x33, 0x23, 0x33, 0x23, 
0x32, 0x33, 0x32, 0x33, 0x32, 0x33, 0x32, 0x33, 0x32, 0x33, 0x32, 0x33, 0x32, 0x33, 0x32, 0x33, 0x32, 0x33, 0x32, 0x33, 
0x33, 0x33, 0x23, 0x33, 0x33, 0x33, 0x23, 0x33, 0x33, 0x33, 0x23, 0x33, 0x23, 0x33, 0x23, 0x33, 0x33, 0x33, 0x23, 0x33, 
0x33, 0x32, 0x33, 0x33, 0x33, 0x32, 0x33, 0x33, 0x33, 0x32, 0x33, 0x33, 0x33, 0x32, 0x33, 0x33, 0x33, 0x32, 0x33, 0x33, 
0x33, 0x23, 0x33, 0x23, 0x33, 0x23, 0x33, 0x23, 0x33, 0x23, 0x33, 0x23, 0x33, 0x23, 0x33, 0x23, 0x33, 0x23, 0x33, 0x23, 
0x32, 0x33, 0x32, 0x33, 0x32, 0x33, 0x31, 0x00, 0x12, 0x33, 0x32, 0x33, 0x31, 0x11, 0x22, 0x33, 0x32, 0x33, 0x32, 0x33, 
0x33, 0x33, 0x33, 0x33, 0x23, 0x33, 0x0f, 0xff, 0xf1, 0x33, 0x33, 0x33, 0x1f, 0xff, 0xf1, 0x33, 0x33, 0x33, 0x33, 0x33, 
0x33, 0x33, 0x33, 0x33, 0x33, 0x31, 0xff, 0xff, 0xff, 0x33, 0x33, 0x32, 0xff, 0xff, 0xf0, 0x33, 0x33, 0x33, 0x33, 0x33, 
0x33, 0x23, 0x33, 0x23, 0x33, 0x21, 0xff, 0xff, 0xff, 0x13, 0x33, 0x20, 0xff, 0xff, 0xf0, 0x23, 0x33, 0x23, 0x33, 0x23, 
0x32, 0x33, 0x32, 0x33, 0x32, 0x32, 0xff, 0xff, 0xff, 0xf1, 0x31, 0x0f, 0xff, 0xff, 0xf1, 0x33, 0x32, 0x33, 0x32, 0x33, 
0x33, 0x33, 0x23, 0x33, 0x33, 0x32, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0x33, 0x33, 0x33, 0x23, 0x33, 
0x33, 0x32, 0x33, 0x33, 0x33, 0x31, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0x32, 0x33, 0x32, 0x33, 0x33, 
0x33, 0x23, 0x33, 0x23, 0x33, 0x2f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x23, 0x33, 0x23, 0x33, 0x23, 
0x32, 0x33, 0x32, 0x33, 0x32, 0x1f, 0xff, 0xff, 0x32, 0x32, 0x32, 0x32, 0x32, 0xff, 0xff, 0x03, 0x32, 0x33, 0x32, 0x33, 
0x33, 0x33, 0x33, 0x33, 0x33, 0xf3, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x22, 0x23, 0x23, 0xf1, 0x33, 0x33, 0x33, 0x33, 
0x33, 0x33, 0x33, 0x33, 0x31, 0x32, 0x3f, 0xff, 0xf2, 0x32, 0x32, 0x32, 0xff, 0xf2, 0x32, 0x30, 0x33, 0x33, 0x33, 0x33, 
0x33, 0x23, 0x33, 0x23, 0x30, 0x23, 0xf3, 0x23, 0x2f, 0x23, 0x23, 0x2f, 0x23, 0x2f, 0x23, 0x20, 0x33, 0x23, 0x33, 0x23, 
0x32, 0x33, 0x32, 0x33, 0x30, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0xf2, 0x30, 0x32, 0x33, 0x32, 0x33, 
0x33, 0x33, 0x23, 0x33, 0x31, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x22, 0x21, 0x33, 0x33, 0x23, 0x33, 
0x33, 0x32, 0x33, 0x33, 0x33, 0x02, 0x32, 0x32, 0x3f, 0xff, 0xff, 0xf2, 0x32, 0x32, 0x32, 0x32, 0x33, 0x32, 0x33, 0x33, 
0x33, 0x23, 0x33, 0x23, 0x33, 0x13, 0x23, 0x23, 0x2f, 0xff, 0xff, 0xf3, 0x23, 0x23, 0x23, 0x13, 0x33, 0x23, 0x33, 0x23, 
0x32, 0x33, 0x32, 0x33, 0x32, 0x30, 0xf2, 0x32, 0x32, 0xff, 0xff, 0x32, 0x32, 0x32, 0x30, 0x33, 0x32, 0x33, 0x32, 0x33, 
0x33, 0x33, 0x33, 0x33, 0x33, 0x31, 0xff, 0xf3, 0x23, 0x23, 0x23, 0x33, 0x23, 0x2f, 0x03, 0x33, 0x33, 0x33, 0x33, 0x33, 
0x33, 0x33, 0x33, 0x33, 0x33, 0x31, 0xff, 0x2f, 0xf2, 0x32, 0x32, 0x32, 0xff, 0xff, 0x13, 0x33, 0x33, 0x33, 0x33, 0x33, 
0x33, 0x23, 0x33, 0x23, 0x33, 0x20, 0x23, 0x23, 0x2f, 0xff, 0xff, 0xff, 0x23, 0x2f, 0x03, 0x23, 0x33, 0x23, 0x33, 0x23, 
0x32, 0x33, 0x32, 0x33, 0x32, 0x02, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x30, 0x33, 0x32, 0x33, 0x32, 0x33, 
0x33, 0x33, 0x23, 0x33, 0x31, 0x23, 0x23, 0x23, 0x23, 0x23, 0x22, 0x23, 0x23, 0xf3, 0x22, 0x13, 0x33, 0x33, 0x23, 0x33, 
0x33, 0x32, 0x33, 0x33, 0x31, 0x22, 0x3f, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x3f, 0x32, 0x13, 0x33, 0x32, 0x33, 0x33, 
0x33, 0x23, 0x33, 0x23, 0x33, 0x1f, 0xf3, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x2f, 0xf1, 0x23, 0x33, 0x23, 0x33, 0x23, 
0x32, 0x33, 0x32, 0x33, 0x32, 0x31, 0xf2, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0xf1, 0x32, 0x33, 0x32, 0x33, 0x32, 0x33, 
0x33, 0x33, 0x33, 0x33, 0x23, 0x33, 0xf3, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0xf3, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x02, 0x32, 0xff, 0xff, 0xff, 0xf2, 0x32, 0x03, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
0x33, 0x23, 0x33, 0x23, 0x33, 0x23, 0x13, 0x20, 0x13, 0x23, 0x33, 0x10, 0x23, 0x13, 0x33, 0x23, 0x33, 0x23, 0x33, 0x23, 
0x32, 0x33, 0x32, 0x33, 0x32, 0x33, 0x31, 0x13, 0x32, 0x33, 0x32, 0x33, 0x11, 0x33, 0x32, 0x33, 0x32, 0x33, 0x32, 0x33, 
0x33, 0x33, 0x23, 0x33, 0x33, 0x33, 0x23, 0x33, 0x33, 0x33, 0x23, 0x33, 0x33, 0x33, 0x23, 0x33, 0x33, 0x33, 0x23, 0x33, 
0x33, 0x32, 0x33, 0x33, 0x33, 0x32, 0x33, 0x32, 0x33, 0x32, 0x33, 0x33, 0x33, 0x32, 0x33, 0x33, 0x33, 0x32, 0x33, 0x33, 
0x33, 0x23, 0x33, 0x23, 0x33, 0x23, 0x33, 0x23, 0x33, 0x23, 0x33, 0x23, 0x33, 0x23, 0x33, 0x23, 0x33, 0x23, 0x33, 0x23, 
0x32, 0x33, 0x32, 0x33, 0x32, 0x33, 0x32, 0x33, 0x32, 0x33, 0x32, 0x33, 0x32, 0x33, 0x32, 0x33, 0x32, 0x33, 0x32, 0x33, 
0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33
};

static const unsigned long palette_pet1_happy14BPP_UNCOMP[]=
{
	0x101010, 	0xcccccc, 	0xf7f7f7, 	0xf9f9f9, 
	0x030102, 	0x020202, 	0xffffff, 	0x010101, 
	0xfbfbfb, 	0xfafafa, 	0xf8f8f8, 	0x000000, 
	0x000000, 	0x000000, 	0x000000, 	0x000000
};

const tImage  pet1_happy14BPP_UNCOMP=
{
	IMAGE_FMT_4BPP_UNCOMP,
	40,
	40,
	16,
	palette_pet1_happy14BPP_UNCOMP,
	pixel_pet1_happy14BPP_UNCOMP,
};

