/*	$OpenBSD: archdep.h,v 1.23 2022/01/17 01:35:36 guenther Exp $ */

/*
 * Copyright (c) 1998 Per Fogelstrom, Opsycon AB
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 */

#ifndef _I386_ARCHDEP_H_
#define _I386_ARCHDEP_H_

#define	RELOC_TAG	DT_REL
#define	MACHID		EM_386		/* ELF e_machine ID value checked */

/* Only used in lib/csu/boot.h */
#ifdef RCRT0

static inline void
RELOC_DYN(const Elf_Rel *r, const Elf_Sym *s, Elf_Addr *p, unsigned long v)
{

	if (ELF_R_TYPE(r->r_info) == RELOC_RELATIVE) {
		*p += v;
	} else if (ELF_R_TYPE(r->r_info) == RELOC_GLOB_DAT) {
		*p += v + s->st_value;
	} else if (ELF_R_TYPE(r->r_info) == RELOC_32) {
		*p += v + s->st_value;
	} else {
		_dl_exit(6);
	}
}

#endif /* RCRT0 */
#endif /* _I386_ARCHDEP_H_ */
