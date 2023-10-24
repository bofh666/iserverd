/**************************************************************************/
/*									  */
/* Copyright (c) 2000-2005 by Alexandr V. Shutko, Khabarovsk, Russia	  */
/* All rights reserved.							  */
/*									  */
/* Redistribution and use in source and binary forms, with or without	  */
/* modification, are permitted provided that the following conditions	  */
/* are met:								  */
/* 1. Redistributions of source code must retain the above copyright	  */
/*    notice, this list of conditions and the following disclaimer.	  */
/* 2. Redistributions in binary form must reproduce the above copyright	  */
/*    notice, this list of conditions and the following disclaimer in 	  */
/*    the documentation and/or other materials provided with the 	  */
/*    distribution.							  */
/*									  */
/* THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND */
/* ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE  */
/* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR 	  */
/* PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS  */
/* BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, 	  */
/* OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT   */
/* OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR 	  */
/* BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,  */
/* WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE   */
/* OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, 	  */
/* EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.			  */
/*									  */
/* Command defines for internal system protocol 			  */
/*                                                                        */
/**************************************************************************/

#ifndef _VSYS_DEFINES_H
#define _VSYS_DEFINES_H

/* UDP command identificators */
const unsigned short ICQ_SYSxRCV_SYSINFO_REQ 	= 0x2365;
const unsigned short ICQ_SYSxSND_SYSINFO_REP    = 0x6542;
const unsigned short ICQ_SYSxSND_PASSWD_ERR     = 0x7212;
const unsigned short ICQ_SYSxRCV_SYSBCAST_REQ 	= 0x2992;
const unsigned short ICQ_SYSxSND_SYSBCAST_REP 	= 0x3993;
const unsigned short ICQ_SYSxRCV_WWPMESS	= 0x0802;
const unsigned short ICQ_SYSxSND_REQ_OK		= 0x0803;
const unsigned short ICQ_SYSxRCV_DELUSER_REQ    = 0x0804;

#endif /* _VSYS_DEFINES_H */

