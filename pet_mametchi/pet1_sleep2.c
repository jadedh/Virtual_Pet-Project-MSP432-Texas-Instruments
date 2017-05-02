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

static const unsigned char pixel_pet1_sleep24BPP_UNCOMP[] =
{
0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
0x11, 0x41, 0x11, 0x41, 0x11, 0x41, 0x11, 0x41, 0x11, 0x41, 0x11, 0x41, 0x11, 0x41, 0x11, 0x41, 0x11, 0x41, 0x11, 0x41, 
0x14, 0x11, 0x14, 0x11, 0x14, 0x11, 0x14, 0x11, 0x14, 0x11, 0x14, 0x11, 0x14, 0x11, 0x14, 0x11, 0x14, 0x11, 0x14, 0x11, 
0x11, 0x11, 0x41, 0x11, 0x11, 0x11, 0x41, 0x11, 0x11, 0x11, 0x41, 0x11, 0x11, 0x11, 0x41, 0x11, 0x11, 0x11, 0x41, 0x11, 
0x11, 0x14, 0x11, 0x11, 0x11, 0x14, 0x11, 0x11, 0x11, 0x14, 0x11, 0x14, 0x11, 0x14, 0x11, 0x11, 0x11, 0x14, 0x11, 0x11, 
0x11, 0x41, 0x11, 0x41, 0x11, 0x41, 0x11, 0x41, 0x11, 0x41, 0x11, 0x41, 0x11, 0x41, 0x11, 0x41, 0x11, 0x41, 0x11, 0x41, 
0x14, 0x11, 0x14, 0x11, 0x14, 0x11, 0x15, 0x05, 0x14, 0x11, 0x14, 0x11, 0x14, 0x11, 0x14, 0x11, 0x14, 0x11, 0x14, 0x11, 
0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x30, 0x00, 0x31, 0x11, 0x11, 0x11, 0x11, 0x25, 0x21, 0x11, 0x11, 0x11, 0x11, 0x11, 
0x11, 0x11, 0x11, 0x11, 0x11, 0x15, 0x00, 0x00, 0x00, 0x52, 0x14, 0x25, 0x30, 0x00, 0x00, 0x51, 0x11, 0x11, 0x11, 0x11, 
0x11, 0x41, 0x11, 0x41, 0x11, 0x43, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x11, 0x41, 0x11, 0x41, 
0x14, 0x11, 0x14, 0x11, 0x14, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x14, 0x11, 0x14, 0x11, 
0x11, 0x11, 0x41, 0x11, 0x41, 0x40, 0x01, 0x41, 0x41, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x11, 0x11, 0x41, 0x11, 
0x11, 0x14, 0x11, 0x11, 0x11, 0x32, 0x14, 0x14, 0x14, 0x44, 0x14, 0x14, 0x14, 0x10, 0x00, 0x24, 0x11, 0x14, 0x11, 0x11, 
0x11, 0x41, 0x11, 0x41, 0x15, 0x21, 0x01, 0x21, 0x01, 0x21, 0x40, 0x21, 0x41, 0x21, 0x00, 0x21, 0x11, 0x41, 0x11, 0x41, 
0x14, 0x11, 0x14, 0x11, 0x10, 0x14, 0x10, 0x00, 0x12, 0x14, 0x12, 0x04, 0x12, 0x04, 0x10, 0x11, 0x14, 0x11, 0x14, 0x11, 
0x11, 0x11, 0x11, 0x11, 0x51, 0x41, 0x41, 0x41, 0x40, 0x00, 0x01, 0x40, 0x00, 0x41, 0x40, 0x21, 0x41, 0x11, 0x11, 0x11, 
0x11, 0x11, 0x11, 0x14, 0x34, 0x14, 0x14, 0x14, 0x00, 0x00, 0x00, 0x14, 0x14, 0x14, 0x14, 0x51, 0x11, 0x11, 0x11, 0x11, 
0x11, 0x41, 0x11, 0x41, 0x31, 0x21, 0x41, 0x20, 0x00, 0x00, 0x00, 0x01, 0x41, 0x21, 0x41, 0x51, 0x11, 0x41, 0x11, 0x41, 
0x14, 0x11, 0x14, 0x11, 0x52, 0x14, 0x12, 0x10, 0x00, 0x00, 0x00, 0x04, 0x12, 0x14, 0x12, 0x21, 0x14, 0x11, 0x14, 0x11, 
0x11, 0x11, 0x41, 0x11, 0x40, 0x41, 0x41, 0x40, 0x00, 0x00, 0x00, 0x01, 0x41, 0x41, 0x40, 0x11, 0x11, 0x11, 0x41, 0x11, 
0x11, 0x14, 0x11, 0x11, 0x15, 0x14, 0x14, 0x10, 0x00, 0x00, 0x00, 0x04, 0x14, 0x14, 0x15, 0x11, 0x11, 0x14, 0x11, 0x11, 
0x11, 0x41, 0x11, 0x41, 0x11, 0x51, 0x41, 0x41, 0x00, 0x00, 0x01, 0x20, 0x01, 0x21, 0x01, 0x41, 0x11, 0x41, 0x11, 0x41, 
0x14, 0x11, 0x14, 0x11, 0x14, 0x15, 0x02, 0x14, 0x10, 0x00, 0x04, 0x14, 0x10, 0x00, 0x54, 0x11, 0x14, 0x11, 0x14, 0x11, 
0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x30, 0x01, 0x44, 0x41, 0x00, 0x41, 0x41, 0x03, 0x41, 0x11, 0x11, 0x11, 0x11, 0x11, 
0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x50, 0x40, 0x00, 0x00, 0x04, 0x04, 0x11, 0x03, 0x11, 0x14, 0x11, 0x11, 0x11, 0x11, 
0x11, 0x41, 0x11, 0x41, 0x11, 0x41, 0x31, 0x21, 0x41, 0x21, 0x41, 0x21, 0x41, 0x23, 0x11, 0x41, 0x11, 0x41, 0x11, 0x41, 
0x14, 0x11, 0x14, 0x11, 0x14, 0x14, 0x02, 0x04, 0x12, 0x14, 0x12, 0x14, 0x14, 0x13, 0x14, 0x11, 0x14, 0x11, 0x14, 0x11, 
0x11, 0x11, 0x41, 0x11, 0x11, 0x15, 0x41, 0x01, 0x41, 0x41, 0x44, 0x41, 0x44, 0x45, 0x41, 0x11, 0x11, 0x11, 0x41, 0x11, 
0x11, 0x14, 0x11, 0x11, 0x11, 0x15, 0x14, 0x04, 0x14, 0x12, 0x14, 0x14, 0x14, 0x45, 0x11, 0x11, 0x11, 0x14, 0x11, 0x11, 
0x11, 0x41, 0x11, 0x41, 0x11, 0x41, 0x50, 0x01, 0x41, 0x21, 0x41, 0x21, 0x41, 0x25, 0x11, 0x41, 0x11, 0x41, 0x11, 0x41, 
0x14, 0x11, 0x14, 0x11, 0x14, 0x11, 0x15, 0x04, 0x12, 0x14, 0x12, 0x14, 0x12, 0x15, 0x14, 0x11, 0x14, 0x11, 0x14, 0x11, 
0x11, 0x11, 0x11, 0x11, 0x41, 0x11, 0x11, 0x01, 0x41, 0x41, 0x41, 0x41, 0x41, 0x42, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x20, 0x14, 0x00, 0x00, 0x00, 0x14, 0x04, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
0x11, 0x41, 0x11, 0x41, 0x11, 0x41, 0x11, 0x40, 0x41, 0x02, 0x11, 0x50, 0x41, 0x01, 0x11, 0x41, 0x11, 0x41, 0x11, 0x41, 
0x14, 0x11, 0x14, 0x11, 0x14, 0x11, 0x14, 0x15, 0x12, 0x51, 0x14, 0x15, 0x12, 0x51, 0x14, 0x11, 0x14, 0x11, 0x14, 0x11, 
0x11, 0x11, 0x41, 0x11, 0x11, 0x11, 0x41, 0x11, 0x53, 0x11, 0x41, 0x11, 0x55, 0x11, 0x41, 0x11, 0x11, 0x11, 0x41, 0x11, 
0x11, 0x14, 0x11, 0x11, 0x11, 0x14, 0x11, 0x11, 0x11, 0x14, 0x11, 0x14, 0x11, 0x14, 0x11, 0x11, 0x11, 0x14, 0x11, 0x11, 
0x11, 0x41, 0x11, 0x41, 0x11, 0x41, 0x11, 0x41, 0x11, 0x41, 0x11, 0x41, 0x11, 0x41, 0x11, 0x41, 0x11, 0x41, 0x11, 0x41, 
0x14, 0x11, 0x14, 0x11, 0x14, 0x11, 0x14, 0x11, 0x14, 0x11, 0x14, 0x11, 0x14, 0x11, 0x14, 0x11, 0x14, 0x11, 0x14, 0x11, 
0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11
};

static const unsigned long palette_pet1_sleep24BPP_UNCOMP[]=
{
	0x010101, 	0xfeffff, 	0xefefef, 	0x656565, 
	0xf6f6f6, 	0xbebebe, 	0xffffff, 	0x000000, 
	0xf8f8f8, 	0xf9f9f9, 	0xf7f7f7, 	0xfefefe, 
	0xfffeff, 	0x000000, 	0x000000, 	0x000000
};

const tImage  pet1_sleep24BPP_UNCOMP=
{
	IMAGE_FMT_4BPP_UNCOMP,
	40,
	40,
	16,
	palette_pet1_sleep24BPP_UNCOMP,
	pixel_pet1_sleep24BPP_UNCOMP,
};
