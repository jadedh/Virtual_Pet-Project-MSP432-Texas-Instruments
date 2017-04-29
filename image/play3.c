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

static const unsigned char pixel_play34BPP_UNCOMP[] =
{
0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd5, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 
0x9d, 0x6d, 0x9d, 0x6d, 0x9d, 0x6d, 0x9d, 0x65, 0x9d, 0x9d, 0x9d, 0x6d, 0x9d, 0x65, 0x9d, 0x6d, 0x9d, 0x6d, 0x9d, 0x6d, 
0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd5, 0xd6, 0xd6, 0xd6, 0xdc, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 
0x9d, 0x9d, 0x69, 0x9d, 0x9d, 0x9d, 0x95, 0x9d, 0x61, 0x9d, 0x61, 0x9d, 0x61, 0x9d, 0x91, 0x9d, 0x9d, 0x9d, 0x9d, 0x9d, 
0xd5, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 
0x9d, 0x6d, 0x9d, 0x6d, 0x6d, 0x61, 0x6d, 0x6d, 0x9d, 0x9d, 0x9d, 0xaa, 0xa1, 0x6d, 0x9d, 0x65, 0x9d, 0x6d, 0x9d, 0x6d, 
0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xaa, 0xa6, 0xd6, 0xd6, 0xd6, 0xda, 0xaa, 0xaa, 0xd6, 0xd6, 0xd9, 0xd6, 0xd6, 0xd6, 0xd6, 
0x61, 0x9d, 0x95, 0x9d, 0x6a, 0xaa, 0xaa, 0xa1, 0x95, 0x91, 0xaa, 0xaa, 0xaa, 0xad, 0x9d, 0x9d, 0x91, 0x9d, 0x9d, 0x9d, 
0xd6, 0xd6, 0xd6, 0xd6, 0xaa, 0xaa, 0xaa, 0xa6, 0xd6, 0xc6, 0xaa, 0xaa, 0xaa, 0xa6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 
0x9d, 0x6d, 0x9d, 0x61, 0xaa, 0xaa, 0xaa, 0xaa, 0x61, 0x61, 0xaa, 0xaa, 0xaa, 0xa1, 0x6d, 0x9d, 0x9d, 0x6d, 0x9d, 0x6d, 
0xd6, 0xd6, 0xd6, 0xd6, 0xca, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 
0x9d, 0x9d, 0x95, 0x9d, 0x6a, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x61, 0x9d, 0x9d, 0x9d, 0x9d, 0x9d, 
0xd5, 0xd6, 0xd6, 0xd6, 0xd6, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xa6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 
0x9d, 0x6d, 0x9d, 0x6d, 0x61, 0xaa, 0xa2, 0xaa, 0xaa, 0x00, 0x02, 0x02, 0x0a, 0xaa, 0xa1, 0x6d, 0x9d, 0x6d, 0x9d, 0x6d, 
0xd6, 0xd6, 0xd6, 0xd6, 0xda, 0x2f, 0x2a, 0x2a, 0xaa, 0xaf, 0x2f, 0x2f, 0xf0, 0x20, 0x2a, 0xd5, 0xd6, 0xd6, 0xd6, 0xd6, 
0x61, 0x9d, 0x9d, 0x9d, 0x6a, 0x0f, 0xaf, 0x0a, 0xaa, 0xaf, 0x0f, 0x0a, 0xaa, 0x0f, 0x0a, 0x9d, 0x91, 0x9d, 0x9d, 0x9d, 
0xd6, 0xd6, 0xd6, 0xd6, 0xa0, 0x20, 0xa0, 0x2a, 0xaa, 0xa0, 0x20, 0xaf, 0x20, 0xa0, 0x20, 0xa6, 0xd6, 0xd6, 0xd6, 0xd6, 
0x9d, 0x6d, 0x9d, 0x61, 0xa2, 0x02, 0xaf, 0x0a, 0xaa, 0xaf, 0x02, 0x0f, 0x0f, 0x0f, 0x02, 0xa1, 0x9d, 0x6d, 0x9d, 0x6d, 
0xd6, 0xd6, 0xd6, 0xd6, 0xa0, 0x2f, 0x2a, 0xaa, 0xaa, 0x2f, 0xf0, 0x2f, 0x20, 0x20, 0x20, 0xa6, 0xd6, 0xd6, 0xd6, 0xd6, 
0x9d, 0x9d, 0x9d, 0x91, 0xa0, 0x0f, 0x0f, 0x0f, 0x0a, 0xaa, 0xaa, 0xaa, 0xaf, 0x02, 0x02, 0xa1, 0x6d, 0x9d, 0x9d, 0x9d, 
0xd6, 0xd6, 0xd6, 0xd6, 0xca, 0x20, 0x2f, 0x20, 0x2a, 0xaa, 0xaa, 0xaa, 0xa0, 0x20, 0x22, 0xa6, 0xd6, 0xd6, 0xd6, 0xd6, 
0x9d, 0x6d, 0x9d, 0x61, 0x6a, 0x0f, 0x02, 0x0f, 0x0a, 0xaa, 0xaa, 0xaa, 0xaf, 0x0f, 0x0a, 0x61, 0x9d, 0x6d, 0x9d, 0x6d, 
0xd6, 0xd6, 0xd6, 0xd6, 0xa0, 0xaa, 0x20, 0x2f, 0x20, 0xaa, 0xaa, 0xaa, 0xf0, 0x20, 0xaa, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 
0x91, 0x9d, 0x91, 0x9d, 0xa2, 0x02, 0xaa, 0x0f, 0x0f, 0x0a, 0xaa, 0xa2, 0x0f, 0xaa, 0x02, 0xa1, 0x61, 0x9d, 0x9d, 0x9d, 
0xd6, 0xd6, 0xd6, 0xd6, 0xda, 0x20, 0x2f, 0xaa, 0x20, 0x20, 0x2f, 0x20, 0xaa, 0x20, 0x20, 0xa6, 0xd6, 0xd6, 0xd6, 0xd6, 
0x9d, 0x6d, 0x9d, 0x6d, 0x61, 0xaa, 0x02, 0x0f, 0xaa, 0xaa, 0xaa, 0xaa, 0x02, 0x0f, 0xaa, 0x6d, 0x9d, 0x6d, 0x9d, 0x6d, 
0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xa0, 0x20, 0x20, 0x2f, 0x20, 0x2f, 0x2f, 0xaa, 0xc6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 
0x95, 0x9d, 0x61, 0x9d, 0x61, 0x91, 0xa0, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0a, 0x61, 0x9d, 0x9d, 0x9d, 0x9d, 0x9d, 
0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xca, 0x20, 0x2f, 0x20, 0x2f, 0x20, 0x20, 0x2a, 0xc6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 
0x9d, 0x6d, 0x9d, 0x6d, 0x9d, 0x61, 0x6a, 0x0f, 0x0f, 0x0f, 0x02, 0x0f, 0x0f, 0x00, 0xaa, 0x6d, 0x9d, 0x6d, 0x9d, 0x6d, 
0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xca, 0x20, 0x20, 0x2f, 0x20, 0x2f, 0x20, 0x2f, 0x20, 0xa6, 0xd6, 0xd6, 0xd6, 0xd6, 
0x91, 0x9d, 0x91, 0x9d, 0x9d, 0x91, 0x6a, 0x02, 0x00, 0x02, 0x00, 0x02, 0xaa, 0xa2, 0x02, 0xa1, 0x61, 0x9d, 0x9d, 0x9d, 
0xd5, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xca, 0x20, 0x20, 0x2f, 0xaa, 0xaa, 0xd6, 0xca, 0xaa, 0x66, 0xd6, 0xd6, 0xd6, 0xd6, 
0x9d, 0x6d, 0x9d, 0x6d, 0xcd, 0x61, 0xa2, 0x0f, 0x0a, 0xaa, 0x61, 0x61, 0x9d, 0x61, 0x6d, 0x61, 0x9d, 0x6d, 0x9d, 0x6d, 
0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xa0, 0x20, 0xa6, 0xd6, 0xd6, 0xd6, 0xd6, 0xdc, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 
0x9d, 0x9d, 0x61, 0x9d, 0x9d, 0x91, 0x6a, 0xaa, 0x61, 0x9d, 0x9d, 0x9d, 0x95, 0x9d, 0x95, 0x9d, 0x9d, 0x9d, 0x9d, 0x9d, 
0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xc6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd5, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 
0x9d, 0x6d, 0x9d, 0x6d, 0x9d, 0x9d, 0xcd, 0x61, 0x9d, 0x6d, 0x9d, 0x9d, 0x9d, 0x61, 0x9d, 0x6d, 0x9d, 0x6d, 0x9d, 0x6d, 
0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd5, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6
};

static const unsigned long palette_play34BPP_UNCOMP[]=
{
	0xf5faf4, 	0x346142, 	0xeff9f0, 	0xeffcf3, 
	0x316340, 	0x2e623e, 	0x375644, 	0x325d42, 
	0x010002, 	0x31603e, 	0x000200, 	0x325f42, 
	0x325f40, 	0x2f6040, 	0x316040, 	0xffffff
};

const tImage  play34BPP_UNCOMP=
{
	IMAGE_FMT_4BPP_UNCOMP,
	40,
	39,
	16,
	palette_play34BPP_UNCOMP,
	pixel_play34BPP_UNCOMP,
};

