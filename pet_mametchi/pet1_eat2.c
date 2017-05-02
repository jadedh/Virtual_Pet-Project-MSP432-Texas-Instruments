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

static const unsigned char pixel_pet1_eat24BPP_UNCOMP[] =
{
0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
0x11, 0xb1, 0x11, 0xb1, 0x11, 0xb1, 0x11, 0xb1, 0x11, 0xb1, 0x11, 0xb1, 0x11, 0xb1, 0x11, 0xb1, 0x11, 0xb1, 0x11, 0xb1, 
0x1b, 0x11, 0x1b, 0x11, 0x1b, 0x11, 0x1b, 0x11, 0x1b, 0x11, 0x1b, 0x11, 0x1b, 0x11, 0x1b, 0x11, 0x1b, 0x11, 0x1b, 0x11, 
0x11, 0x11, 0xb1, 0x11, 0x11, 0x11, 0xb1, 0x11, 0x11, 0x11, 0xb1, 0x11, 0xb1, 0x11, 0xb1, 0x11, 0x11, 0x11, 0xb1, 0x11, 
0x11, 0x1b, 0x11, 0x11, 0x11, 0x1b, 0x11, 0x11, 0x11, 0x1b, 0x11, 0x1b, 0x11, 0x1b, 0x11, 0x11, 0x11, 0x1b, 0x11, 0x11, 
0x11, 0xb1, 0x11, 0xb1, 0x11, 0xb1, 0x11, 0xb1, 0x11, 0x20, 0xb1, 0xb1, 0x11, 0xb1, 0x11, 0xb1, 0x11, 0xb1, 0x11, 0xb1, 
0x1b, 0x11, 0x1b, 0x11, 0x1b, 0x11, 0x1b, 0x11, 0x10, 0xff, 0xfb, 0x11, 0x1b, 0x11, 0x1b, 0x11, 0x1b, 0x11, 0x1b, 0x11, 
0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0f, 0xff, 0xfb, 0x11, 0x11, 0xb0, 0x21, 0x11, 0x11, 0x11, 0x11, 0x11, 
0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x12, 0xff, 0xff, 0xfb, 0x11, 0x12, 0xff, 0xf2, 0x11, 0x11, 0x11, 0x11, 0x11, 
0x11, 0xb1, 0x11, 0xb1, 0x11, 0xb1, 0x11, 0xff, 0xff, 0xff, 0xf2, 0xbb, 0xff, 0xff, 0xff, 0xb1, 0x11, 0xb1, 0x11, 0xb1, 
0x1b, 0x11, 0x1b, 0x11, 0x1b, 0x11, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb1, 0x1b, 0x11, 0x1b, 0x11, 
0x11, 0x11, 0xb1, 0x11, 0x11, 0x1b, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb1, 0x11, 0x11, 0xb1, 0x11, 
0x11, 0x1b, 0x11, 0x11, 0x11, 0x1f, 0x1b, 0x1b, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x11, 0x11, 0x1b, 0x11, 0x11, 
0x11, 0xb1, 0x11, 0xb1, 0x11, 0x01, 0xb1, 0xb1, 0xb1, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb1, 0x11, 0xb1, 0x11, 0xb1, 
0x1b, 0x11, 0x1b, 0x11, 0x1b, 0xfb, 0x1b, 0x1b, 0x1b, 0x1b, 0x1f, 0xff, 0xff, 0xff, 0xf0, 0x11, 0x1b, 0x11, 0x1b, 0x11, 
0x11, 0x11, 0x11, 0x11, 0x1b, 0xb1, 0xbf, 0xb1, 0xb1, 0xb1, 0xb1, 0xb1, 0xff, 0xff, 0xff, 0x11, 0x11, 0x11, 0x11, 0x11, 
0x11, 0x11, 0x11, 0x11, 0x10, 0x1b, 0x1f, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0xff, 0xff, 0x11, 0x11, 0x11, 0x11, 0x11, 
0x11, 0xb1, 0x11, 0xb1, 0x10, 0xb1, 0xb1, 0xf1, 0xb1, 0xf1, 0xb1, 0xb1, 0xb1, 0xbf, 0xff, 0xb1, 0x11, 0xb1, 0x11, 0xb1, 
0x1b, 0x11, 0x1b, 0x11, 0x12, 0x1b, 0x1b, 0x1f, 0xff, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1f, 0x11, 0x1b, 0x11, 0x1b, 0x11, 
0x11, 0x11, 0xb1, 0x11, 0x11, 0x01, 0xb1, 0xb1, 0xb1, 0xb1, 0xbb, 0xb1, 0xb1, 0xb1, 0xb0, 0x11, 0x11, 0x11, 0xb1, 0x11, 
0x11, 0x1b, 0x11, 0x11, 0x11, 0x12, 0xff, 0x1b, 0x1b, 0xbb, 0x1b, 0x1b, 0x1b, 0x1b, 0x12, 0x11, 0x11, 0x1b, 0x11, 0x11, 
0x11, 0xb1, 0x11, 0xb1, 0x11, 0x00, 0x12, 0xf1, 0xb1, 0xb1, 0xb1, 0xb1, 0xb1, 0xb1, 0xbb, 0xb1, 0x11, 0xb1, 0x11, 0xb1, 
0x1b, 0x11, 0x1b, 0x11, 0x1b, 0xf0, 0x1b, 0xfb, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0xfb, 0x11, 0x1b, 0x11, 0x1b, 0x11, 
0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x1b, 0xff, 0xb1, 0xb1, 0xb1, 0xb1, 0xb1, 0xb1, 0x01, 0x11, 0x11, 0x11, 0x11, 0x11, 
0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0xff, 0xff, 0xff, 0xff, 0xfb, 0x1b, 0x1b, 0x1f, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
0x11, 0xb1, 0x11, 0xb1, 0x11, 0xb0, 0xb1, 0xb1, 0xff, 0xf1, 0xbf, 0xff, 0xff, 0xf0, 0x11, 0xb1, 0x11, 0xb1, 0x11, 0xb1, 
0x1b, 0x11, 0x1b, 0x11, 0x1b, 0x11, 0x0b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x10, 0x1b, 0x11, 0x1b, 0x11, 0x1b, 0x11, 
0x11, 0x11, 0xb1, 0x11, 0x11, 0x11, 0xb2, 0xf1, 0xb1, 0xb1, 0xb1, 0xb1, 0xb1, 0xbf, 0xb1, 0x11, 0x11, 0x11, 0xb1, 0x11, 
0x11, 0x1b, 0x11, 0x11, 0x11, 0x1b, 0x11, 0x2f, 0xfb, 0xbb, 0x1b, 0x1b, 0x1b, 0x10, 0x11, 0x11, 0x11, 0x1b, 0x11, 0x11, 
0x11, 0xb1, 0x11, 0xb1, 0x11, 0xb1, 0x11, 0xbf, 0xb1, 0xb1, 0xb1, 0xb1, 0xb1, 0xbb, 0x11, 0xb1, 0x11, 0xb1, 0x11, 0xb1, 
0x1b, 0x11, 0x1b, 0x11, 0x1b, 0x11, 0x1b, 0x1f, 0x1b, 0x1b, 0x1b, 0xff, 0x1b, 0xfb, 0x1b, 0x11, 0x1b, 0x11, 0x1b, 0x11, 
0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x12, 0xb1, 0xb1, 0xb1, 0xb1, 0xff, 0x01, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x1b, 0xfb, 0x1b, 0x1b, 0x1b, 0x1b, 0xb1, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
0x11, 0xb1, 0x11, 0xb1, 0x11, 0xb1, 0x11, 0xb1, 0x1b, 0x20, 0x00, 0x02, 0x21, 0xb1, 0x11, 0xb1, 0x11, 0xb1, 0x11, 0xb1, 
0x1b, 0x11, 0x1b, 0x11, 0x1b, 0x11, 0x1b, 0x11, 0x1b, 0x11, 0x1b, 0x11, 0x1b, 0x11, 0x1b, 0x11, 0x1b, 0x11, 0x1b, 0x11, 
0x11, 0x11, 0xb1, 0x11, 0x11, 0x11, 0xb1, 0x11, 0x11, 0x11, 0xb1, 0x11, 0xb1, 0x11, 0xb1, 0x11, 0x11, 0x11, 0xb1, 0x11, 
0x11, 0x1b, 0x11, 0x11, 0x11, 0x1b, 0x11, 0x11, 0x11, 0x1b, 0x11, 0x11, 0x11, 0x1b, 0x11, 0x1b, 0x11, 0x1b, 0x11, 0x11, 
0x11, 0xb1, 0x11, 0xb1, 0x11, 0xb1, 0x11, 0xb1, 0x11, 0xb1, 0x11, 0xb1, 0x11, 0xb1, 0x11, 0xb1, 0x11, 0xb1, 0x11, 0xb1, 
0x1b, 0x11, 0x1b, 0x11, 0x1b, 0x11, 0x1b, 0x11, 0x1b, 0x11, 0x1b, 0x11, 0x1b, 0x11, 0x1b, 0x11, 0x1b, 0x11, 0x1b, 0x11, 
0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0xb1, 0x11, 0x11, 0x11, 0x11, 0x11
};

static const unsigned long palette_pet1_eat24BPP_UNCOMP[]=
{
	0x979797, 	0xfdfffe, 	0x999999, 	0xfffeff, 
	0xfeffff, 	0xfaf8f9, 	0x060606, 	0xfafafa, 
	0x020001, 	0x000100, 	0x030000, 	0xf7f7f7, 
	0x010101, 	0xf8f8f8, 	0xffffff, 	0x000000
};

const tImage  pet1_eat24BPP_UNCOMP=
{
	IMAGE_FMT_4BPP_UNCOMP,
	40,
	40,
	16,
	palette_pet1_eat24BPP_UNCOMP,
	pixel_pet1_eat24BPP_UNCOMP,
};
