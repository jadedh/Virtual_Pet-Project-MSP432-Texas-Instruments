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

static const unsigned char pixel_happy14BPP_UNCOMP[] =
{
0x36, 0xde, 0x3e, 0xde, 0x66, 0x3e, 0x3d, 0x6e, 0x66, 0x6d, 0x6d, 0x6e, 0x66, 0x6e, 0x3e, 0x6e, 0x6d, 0x6e, 0x6d, 0x6e, 
0xa6, 0xe3, 0xa3, 0xe3, 0xa6, 0xe3, 0xa3, 0xa6, 0xa3, 0xe3, 0xa6, 0xe3, 0xa3, 0xa3, 0xa3, 0xe3, 0xa6, 0xe3, 0xa3, 0xe3, 
0x6e, 0x3d, 0x6e, 0x6d, 0x6e, 0x6d, 0xde, 0x6d, 0x6e, 0x6a, 0x6e, 0x3d, 0x6e, 0x6d, 0x6e, 0x3d, 0x6e, 0x3d, 0x6e, 0x6d, 
0xa3, 0xa6, 0xa3, 0xa6, 0xa3, 0xa6, 0xe3, 0xa3, 0xa3, 0xa6, 0xe3, 0xa3, 0xa6, 0xa6, 0xa6, 0xa6, 0xa3, 0xa6, 0xa3, 0xa6, 
0x3d, 0x6e, 0x66, 0x6e, 0x6e, 0x6e, 0x3d, 0x3e, 0x3e, 0x3e, 0x6d, 0xde, 0x6e, 0xde, 0x36, 0xde, 0x6d, 0x6e, 0x6d, 0x6e, 
0xa3, 0xe3, 0xa6, 0xe3, 0xa3, 0xe3, 0xa6, 0xa3, 0xe3, 0xe6, 0xe3, 0xa3, 0xa3, 0xe3, 0xe3, 0xe3, 0xa3, 0xe3, 0xa6, 0xe3, 
0x6e, 0x3d, 0x6a, 0x3d, 0x6e, 0x6d, 0x6e, 0x3e, 0xde, 0xde, 0xde, 0x3e, 0xde, 0x3e, 0x3e, 0x6d, 0x6e, 0x3d, 0x6e, 0x3d, 
0xa3, 0xa6, 0xa6, 0xa6, 0xe3, 0xa3, 0xe3, 0x11, 0x01, 0x13, 0xa3, 0xa3, 0x01, 0x01, 0xe3, 0xa6, 0xa3, 0xa6, 0xa3, 0xa6, 
0x66, 0x6e, 0x6d, 0xde, 0x66, 0x6e, 0x30, 0x10, 0x10, 0x10, 0x3e, 0xd0, 0x10, 0x00, 0x1e, 0xde, 0x6d, 0x6e, 0x6d, 0x6e, 
0xa6, 0xa3, 0xa3, 0xe3, 0xa3, 0xe3, 0xe1, 0x01, 0x01, 0x01, 0xe3, 0xe1, 0x01, 0x01, 0x03, 0xe3, 0xa6, 0xe3, 0xa3, 0xe3, 
0x6e, 0x3d, 0x6e, 0x6d, 0x6e, 0x3e, 0xd0, 0x10, 0x00, 0x10, 0xde, 0xd0, 0x00, 0x10, 0x1e, 0x3d, 0x6e, 0x3d, 0x6e, 0x6d, 
0xa3, 0xa6, 0xea, 0xa6, 0xa3, 0xa3, 0xe1, 0x01, 0x01, 0x01, 0xe3, 0xe1, 0x01, 0x01, 0x03, 0xe3, 0xa3, 0xa6, 0xa3, 0xa6, 
0x6d, 0x6e, 0x6d, 0x6e, 0x6e, 0xde, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10, 0xde, 0x6d, 0x6e, 0x6d, 0x6e, 
0xa3, 0xe3, 0xa6, 0xa3, 0xa3, 0xe1, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xe3, 0xa3, 0xe3, 0xa6, 0xe3, 
0x3e, 0x3d, 0x6a, 0x36, 0x3e, 0x10, 0x00, 0x10, 0x00, 0x10, 0x10, 0x10, 0x00, 0x10, 0x00, 0x1e, 0x3e, 0x3d, 0x6e, 0x3d, 
0xe3, 0xa6, 0xa6, 0xa6, 0xe3, 0x01, 0x01, 0x24, 0x2f, 0x24, 0x28, 0x24, 0x21, 0x01, 0x01, 0x03, 0xe3, 0xa6, 0xa3, 0xa6, 
0x6d, 0x6e, 0x6d, 0x6e, 0x30, 0x42, 0x42, 0x42, 0x48, 0x42, 0x42, 0x42, 0x42, 0x42, 0x00, 0x00, 0x3d, 0x6e, 0x6d, 0x6e, 
0xd3, 0xa6, 0xa3, 0xe3, 0xe1, 0x24, 0x21, 0x01, 0x04, 0x24, 0x24, 0x24, 0x01, 0x04, 0x24, 0x01, 0xe6, 0xe3, 0xa3, 0xe3, 
0x6e, 0x36, 0x6e, 0x6e, 0xd0, 0x42, 0x02, 0x42, 0x40, 0x42, 0x42, 0x40, 0x42, 0x40, 0x42, 0x40, 0xde, 0x3d, 0x6e, 0x6d, 
0xe3, 0xa6, 0xa6, 0xa3, 0xe1, 0x24, 0x24, 0x24, 0x28, 0x24, 0x28, 0x24, 0x24, 0x24, 0x08, 0x21, 0xe3, 0xa6, 0xa3, 0xa6, 
0x3d, 0x6e, 0x66, 0x6e, 0xde, 0x08, 0x48, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x48, 0x40, 0x3d, 0x6e, 0x6d, 0x6e, 
0xa3, 0xe3, 0xa6, 0xe3, 0xa3, 0x04, 0x24, 0x28, 0x21, 0x01, 0x01, 0x04, 0x24, 0x24, 0x84, 0x03, 0xa3, 0xe3, 0xa6, 0xe3, 
0x3e, 0x3d, 0x6a, 0x6d, 0x6e, 0xd0, 0x12, 0x42, 0x42, 0x42, 0x82, 0x42, 0x42, 0x48, 0x40, 0xde, 0x3e, 0x3d, 0x6e, 0x3d, 
0xe3, 0xa6, 0xa6, 0xa6, 0xa3, 0xa3, 0x01, 0x04, 0x2f, 0x24, 0x24, 0x24, 0x28, 0x21, 0x03, 0xd3, 0xa3, 0xa6, 0xa3, 0xa6, 
0x6d, 0xde, 0x6d, 0x6e, 0x6d, 0xde, 0xd0, 0x40, 0x08, 0x42, 0x42, 0x42, 0x00, 0x0e, 0xde, 0xde, 0x6d, 0x6e, 0x6d, 0x6e, 
0xa3, 0xe3, 0xa3, 0xa3, 0xa6, 0xe3, 0xe1, 0x24, 0x21, 0x01, 0x01, 0x01, 0x24, 0x03, 0xe3, 0xe3, 0xa6, 0xe3, 0xa3, 0xe3, 
0x6e, 0x3d, 0x6e, 0x6d, 0x6e, 0x3e, 0x12, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x40, 0xde, 0x3d, 0x6e, 0x3d, 0x6e, 0x6d, 
0xa3, 0xa6, 0xa3, 0xa6, 0xa6, 0xa3, 0x08, 0x24, 0x21, 0x24, 0x21, 0x24, 0x24, 0x21, 0xe3, 0xa6, 0xa3, 0xa6, 0xa3, 0xa6, 
0x6d, 0xde, 0x6d, 0x6e, 0x6d, 0xde, 0x18, 0x02, 0x40, 0x82, 0x40, 0x42, 0x02, 0x40, 0xdd, 0x6d, 0x6d, 0x6e, 0x6d, 0x6e, 
0xa6, 0xe3, 0xa3, 0xe3, 0xa3, 0xe3, 0x04, 0x04, 0x21, 0x28, 0x21, 0x2f, 0x04, 0x21, 0xe3, 0xe6, 0xa3, 0xe3, 0xa6, 0xe3, 
0x6a, 0x3e, 0x6e, 0x3d, 0x6e, 0x3e, 0x12, 0x40, 0x02, 0x48, 0x42, 0x10, 0x42, 0x1e, 0xde, 0x66, 0x6e, 0x3d, 0x6e, 0x3d, 
0xa3, 0xa6, 0xa3, 0xa6, 0xa3, 0xa3, 0x08, 0x24, 0x28, 0x24, 0x28, 0x24, 0x28, 0x03, 0xe3, 0xa3, 0xa3, 0xa6, 0xa3, 0xa6, 
0x36, 0x6e, 0x6d, 0xde, 0x6d, 0xde, 0xd0, 0x42, 0x10, 0x00, 0x10, 0x02, 0x40, 0xde, 0x3d, 0x6e, 0x6d, 0x6e, 0x6d, 0x6e, 
0xa6, 0xe3, 0xa3, 0xe3, 0xa6, 0xa6, 0xe1, 0x24, 0x03, 0xe3, 0xe3, 0x04, 0x21, 0xe3, 0xa6, 0xa6, 0xa6, 0xe3, 0xa3, 0xe3, 
0x6e, 0x3d, 0x6e, 0x6d, 0x6e, 0x3e, 0xde, 0x10, 0x3e, 0x3e, 0xde, 0xd0, 0x1e, 0x3d, 0x6e, 0x6d, 0x6e, 0x3d, 0x6e, 0x6d, 
0xa3, 0xa6, 0xe3, 0xa6, 0xe6, 0xa3, 0xa3, 0xd3, 0xe3, 0xa3, 0xe3, 0xa3, 0xe3, 0xe6, 0xa6, 0xa6, 0xa3, 0xa6, 0xa3, 0xa6, 
0x6d, 0xde, 0x6d, 0x6e, 0x36, 0x6e, 0x6e, 0xde, 0x3d, 0x6e, 0x66, 0xde, 0x3d, 0x6e, 0x66, 0x6e, 0x6d, 0x6e, 0x6d, 0x6e, 
0xa3, 0xe3, 0xa3, 0xe3, 0xa6, 0xe3, 0xa3, 0xa6, 0xa6, 0xe3, 0xa6, 0xa3, 0xa3, 0xe3, 0xa6, 0xa3, 0xa3, 0xe3, 0xa6, 0xe3, 
0x6e, 0x6d, 0x6e, 0x3d, 0x6a, 0x66, 0x3e, 0x6d, 0x6e, 0x36, 0x3a, 0x6a, 0x3e, 0x3d, 0x6e, 0x6d, 0x6e, 0x3d, 0x6e, 0x3d, 
0xa3, 0xa6, 0xa3, 0xa6, 0xa6, 0xa6, 0xe6, 0xa6, 0xa6, 0xa6, 0xa6, 0xa6, 0xea, 0xa6, 0xa6, 0xa6, 0xa3, 0xa6, 0xa3, 0xa6
};

static const unsigned long palette_happy14BPP_UNCOMP[]=
{
	0x000000, 	0x000c00, 	0xf8f6f7, 	0x316040, 
	0xf7fffb, 	0xf8f8f8, 	0x2e623e, 	0x345a41, 
	0xf2f7f1, 	0x355d42, 	0x32603c, 	0x346142, 
	0x000002, 	0x375f45, 	0x3d4f43, 	0xffffff
};

const tImage  happy14BPP_UNCOMP=
{
	IMAGE_FMT_4BPP_UNCOMP,
	40,
	40,
	16,
	palette_happy14BPP_UNCOMP,
	pixel_happy14BPP_UNCOMP,
};

