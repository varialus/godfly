/*
 * Derived from:
 * $FreeBSD: src/sys/sys/elf32.h,v 1.8.14.1 2005/12/30 22:13:58 marcel Exp $
 * $FreeBSD: src/sys/sys/elf64.h,v 1.10.14.1 2005/12/30 22:13:58 marcel Exp $
 * $FreeBSD: src/sys/sys/elf_common.h,v 1.15.8.1 2005/12/30 22:13:58 marcel Exp $
 * $FreeBSD: src/sys/alpha/include/elf.h,v 1.14 2003/09/25 01:10:22 peter Exp $
 * $FreeBSD: src/sys/amd64/include/elf.h,v 1.18 2004/08/03 08:21:48 dfr Exp $
 * $FreeBSD: src/sys/arm/include/elf.h,v 1.5.2.1 2006/06/30 21:42:52 cognet Exp $
 * $FreeBSD: src/sys/i386/include/elf.h,v 1.16 2004/08/02 19:12:17 dfr Exp $
 * $FreeBSD: src/sys/powerpc/include/elf.h,v 1.7 2004/11/02 09:47:01 ssouhlal Exp $
 * $FreeBSD: src/sys/sparc64/include/elf.h,v 1.12 2003/09/25 01:10:26 peter Exp $
 *
 * Copyright (c) 1996-1998 John D. Polstra.  All rights reserved.
 * Copyright (c) 2001 David E. O'Brien
 * Portions Copyright 2009 The Go Authors.  All rights reserved.
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
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 */

/*
 * ELF definitions that are independent of architecture or word size.
 */

/*
 * Note header.  The ".note" section contains an array of notes.  Each
 * begins with this header, aligned to a word boundary.  Immediately
 * following the note header is n_namesz bytes of name, padded to the
 * next word boundary.  Then comes n_descsz bytes of descriptor, again
 * padded to a word boundary.  The values of n_namesz and n_descsz do
 * not include the padding.
 */




// http://gitweb.dragonflybsd.org/dragonfly.git/blob_plain/HEAD:/sys/sys/elf64.h


///*-
// * Copyright (c) 1996-1998 John D. Polstra.
// * All rights reserved.
// *
// * Redistribution and use in source and binary forms, with or without
// * modification, are permitted provided that the following conditions
// * are met:
// * 1. Redistributions of source code must retain the above copyright
// *    notice, this list of conditions and the following disclaimer.
// * 2. Redistributions in binary form must reproduce the above copyright
// *    notice, this list of conditions and the following disclaimer in the
// *    documentation and/or other materials provided with the distribution.
// *
// * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
// * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
// * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
// * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
// * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
// * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
// * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
// * SUCH DAMAGE.
// *
// * $FreeBSD: src/sys/sys/elf64.h,v 1.17 2006/10/17 05:43:30 jkoshy Exp $
// * $DragonFly: src/sys/sys/elf64.h,v 1.10 2008/08/30 17:07:17 swildner Exp $
// */
//
//#ifndef _SYS_ELF64_H_
//#define _SYS_ELF64_H_
//
//#ifndef _SYS_TYPES_H_
//#include <sys/types.h>
//#endif
//#ifndef _SYS_ELF_COMMON_H_
//#include <sys/elf_common.h>
//#endif
//
///*
// * ELF definitions common to all 64-bit architectures.
// */
//
//typedef uint64_t	Elf64_Addr;
//typedef uint16_t	Elf64_Half;
//typedef uint64_t	Elf64_Off;
//typedef int32_t		Elf64_Sword;
//typedef int64_t		Elf64_Sxword;
//typedef uint32_t	Elf64_Word;
//typedef uint64_t	Elf64_Lword;
//typedef uint64_t	Elf64_Xword;
//
///*
// * Types of dynamic symbol hash table bucket and chain elements.
// *
// * This is inconsistent among 64 bit architectures, so a machine dependent
// * typedef is required.
// */
//
//typedef Elf64_Word	Elf64_Hashelt;
//
///* Non-standard class-dependent datatype used for abstraction. */
//typedef Elf64_Xword	Elf64_Size;
//typedef Elf64_Sxword	Elf64_Ssize;
//
///*
// * ELF header.
// */
//
//typedef struct {
//	unsigned char	e_ident[EI_NIDENT];	/* File identification. */
//	Elf64_Half	e_type;		/* File type. */
//	Elf64_Half	e_machine;	/* Machine architecture. */
//	Elf64_Word	e_version;	/* ELF format version. */
//	Elf64_Addr	e_entry;	/* Entry point. */
//	Elf64_Off	e_phoff;	/* Program header file offset. */
//	Elf64_Off	e_shoff;	/* Section header file offset. */
//	Elf64_Word	e_flags;	/* Architecture-specific flags. */
//	Elf64_Half	e_ehsize;	/* Size of ELF header in bytes. */
//	Elf64_Half	e_phentsize;	/* Size of program header entry. */
//	Elf64_Half	e_phnum;	/* Number of program header entries. */
//	Elf64_Half	e_shentsize;	/* Size of section header entry. */
//	Elf64_Half	e_shnum;	/* Number of section header entries. */
//	Elf64_Half	e_shstrndx;	/* Section name strings section. */
//} Elf64_Ehdr;
//
///*
// * Section header.
// */
//
//typedef struct {
//	Elf64_Word	sh_name;	/* Section name (index into the
//					   section header string table). */
//	Elf64_Word	sh_type;	/* Section type. */
//	Elf64_Xword	sh_flags;	/* Section flags. */
//	Elf64_Addr	sh_addr;	/* Address in memory image. */
//	Elf64_Off	sh_offset;	/* Offset in file. */
//	Elf64_Xword	sh_size;	/* Size in bytes. */
//	Elf64_Word	sh_link;	/* Index of a related section. */
//	Elf64_Word	sh_info;	/* Depends on section type. */
//	Elf64_Xword	sh_addralign;	/* Alignment in bytes. */
//	Elf64_Xword	sh_entsize;	/* Size of each entry in section. */
//} Elf64_Shdr;
//
///*
// * Program header.
// */
//
//typedef struct {
//	Elf64_Word	p_type;		/* Entry type. */
//	Elf64_Word	p_flags;	/* Access permission flags. */
//	Elf64_Off	p_offset;	/* File offset of contents. */
//	Elf64_Addr	p_vaddr;	/* Virtual address in memory image. */
//	Elf64_Addr	p_paddr;	/* Physical address (not used). */
//	Elf64_Xword	p_filesz;	/* Size of contents in file. */
//	Elf64_Xword	p_memsz;	/* Size of contents in memory. */
//	Elf64_Xword	p_align;	/* Alignment in memory and file. */
//} Elf64_Phdr;
//
///*
// * Dynamic structure.  The ".dynamic" section contains an array of them.
// */
//
//typedef struct {
//	Elf64_Sxword	d_tag;		/* Entry type. */
//	union {
//		Elf64_Xword	d_val;	/* Integer value. */
//		Elf64_Addr	d_ptr;	/* Address value. */
//	} d_un;
//} Elf64_Dyn;
//
///*
// * Relocation entries.
// */
//
///* Relocations that don't need an addend field. */
//typedef struct {
//	Elf64_Addr	r_offset;	/* Location to be relocated. */
//	Elf64_Xword	r_info;		/* Relocation type and symbol index. */
//} Elf64_Rel;
//
///* Relocations that need an addend field. */
//typedef struct {
//	Elf64_Addr	r_offset;	/* Location to be relocated. */
//	Elf64_Xword	r_info;		/* Relocation type and symbol index. */
//	Elf64_Sxword	r_addend;	/* Addend. */
//} Elf64_Rela;
//
///* Macros for accessing the fields of r_info. */
#define ELF64_R_SYM(info)	((info) >> 32)
#define ELF64_R_TYPE(info)	((info) & 0xffffffffL)
//
///* Macro for constructing r_info from field values. */
#define ELF64_R_INFO(sym, type)	(((sym) << 32) + ((type) & 0xffffffffL))
//
//#define	ELF64_R_TYPE_DATA(info)	(((Elf64_Xword)(info)<<32)>>40)
//#define	ELF64_R_TYPE_ID(info)	(((Elf64_Xword)(info)<<56)>>56)
//#define	ELF64_R_TYPE_INFO(data, type)	\
//		(((Elf64_Xword)(data)<<8)+(Elf64_Xword)(type))
//
///*
// * Note entry header
// */
//typedef Elf_Note Elf64_Nhdr;
//
///*
// * Move entry
// */
//typedef struct {
//	Elf64_Lword	m_value;	/* symbol value */
//	Elf64_Xword	m_info;		/* size + index */
//	Elf64_Xword	m_poffset;	/* symbol offset */
//	Elf64_Half	m_repeat;	/* repeat count */
//	Elf64_Half	m_stride;	/* stride info */
//} Elf64_Move;
//
//#define	ELF64_M_SYM(info)	((info)>>8)
//#define	ELF64_M_SIZE(info)	((unsigned char)(info))
//#define	ELF64_M_INFO(sym, size)	(((sym)<<8)+(unsigned char)(size))
//
///*
// * Hardware/Software capabilities entry
// */
//typedef struct {
//	Elf64_Xword	c_tag;		/* how to interpret value */
//	union {
//		Elf64_Xword	c_val;
//		Elf64_Addr	c_ptr;
//	} c_un;
//} Elf64_Cap;
//
///*
// * Symbol table entries.
// */
//
//typedef struct {
//	Elf64_Word	st_name;	/* String table index of name. */
//	unsigned char	st_info;	/* Type and binding information. */
//	unsigned char	st_other;	/* Reserved (not used). */
//	Elf64_Half	st_shndx;	/* Section index of symbol. */
//	Elf64_Addr	st_value;	/* Symbol value. */
//	Elf64_Xword	st_size;	/* Size of associated object. */
//} Elf64_Sym;
//
///* Macros for accessing the fields of st_info. */
#define ELF64_ST_BIND(info)		((info) >> 4)
#define ELF64_ST_TYPE(info)		((info) & 0xf)
//
///* Macro for constructing st_info from field values. */
#define ELF64_ST_INFO(bind, type)	(((bind) << 4) + ((type) & 0xf))
//
///* Macro for accessing the fields of st_other. */
#define ELF64_ST_VISIBILITY(oth)	((oth) & 0x3)
//
///* Structures used by Sun & GNU-style symbol versioning. */
//typedef struct {
//	Elf64_Half	vd_version;
//	Elf64_Half	vd_flags;
//	Elf64_Half	vd_ndx;
//	Elf64_Half	vd_cnt;
//	Elf64_Word	vd_hash;
//	Elf64_Word	vd_aux;
//	Elf64_Word	vd_next;
//} Elf64_Verdef;
//
//typedef struct {
//	Elf64_Word	vda_name;
//	Elf64_Word	vda_next;
//} Elf64_Verdaux;
//
//typedef struct {
//	Elf64_Half	vn_version;
//	Elf64_Half	vn_cnt;
//	Elf64_Word	vn_file;
//	Elf64_Word	vn_aux;
//	Elf64_Word	vn_next;
//} Elf64_Verneed;
//
//typedef struct {
//	Elf64_Word	vna_hash;
//	Elf64_Half	vna_flags;
//	Elf64_Half	vna_other;
//	Elf64_Word	vna_name;
//	Elf64_Word	vna_next;
//} Elf64_Vernaux;
//
//typedef Elf64_Half Elf64_Versym;
//
//typedef struct {
//	Elf64_Half	si_boundto;	/* direct bindings - symbol bound to */
//	Elf64_Half	si_flags;	/* per symbol flags */
//} Elf64_Syminfo;
//
//#endif /* !_SYS_ELF64_H_ */

// http://gitweb.dragonflybsd.org/dragonfly.git/blob_plain/HEAD:/sys/sys/elf_common.h


///*-
// * Copyright (c) 1998 John D. Polstra.
// * All rights reserved.
// *
// * Redistribution and use in source and binary forms, with or without
// * modification, are permitted provided that the following conditions
// * are met:
// * 1. Redistributions of source code must retain the above copyright
// *    notice, this list of conditions and the following disclaimer.
// * 2. Redistributions in binary form must reproduce the above copyright
// *    notice, this list of conditions and the following disclaimer in the
// *    documentation and/or other materials provided with the distribution.
// *
// * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
// * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
// * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
// * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
// * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
// * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
// * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
// * SUCH DAMAGE.
// */
//
//#ifndef _SYS_ELF_COMMON_H_
//#define _SYS_ELF_COMMON_H_
//
//#ifndef _SYS_TYPES_H_
//#include <sys/types.h>
//#endif
//
///*
// * ELF definitions that are independent of architecture or word size.
// */
//
///*
// * Note header.  The ".note" section contains an array of notes.  Each
// * begins with this header, aligned to a word boundary.  Immediately
// * following the note header is n_namesz bytes of name, padded to the
// * next word boundary.  Then comes n_descsz bytes of descriptor, again
// * padded to a word boundary.  The values of n_namesz and n_descsz do
// * not include the padding.
// */
//
//typedef struct {
typedef struct {
//	u_int32_t	n_namesz;	/* Length of name. */
	uint32	n_namesz;	/* Length of name. */
//	u_int32_t	n_descsz;	/* Length of descriptor. */
	uint32	n_descsz;	/* Length of descriptor. */
//	u_int32_t	n_type;		/* Type of this note. */
	uint32	n_type;		/* Type of this note. */
//} Elf_Note;
} Elf_Note;
//
///* Indexes into the e_ident array.  Keep synced with
//   http://www.sco.com/developers/gabi/latest/ch4.eheader.html */
#define EI_MAG0		0	/* Magic number, byte 0. */
#define EI_MAG1		1	/* Magic number, byte 1. */
#define EI_MAG2		2	/* Magic number, byte 2. */
#define EI_MAG3		3	/* Magic number, byte 3. */
#define EI_CLASS	4	/* Class of machine. */
#define EI_DATA		5	/* Data format. */
#define EI_VERSION	6	/* ELF format version. */
#define EI_OSABI	7	/* Operating system / ABI identification */
#define EI_ABIVERSION	8	/* ABI version */
#define EI_PAD		9	/* Start of padding (per SVR4 ABI). */
#define EI_NIDENT	16	/* Size of e_ident array. */
//
///* Values for the magic number bytes. */
#define ELFMAG0		0x7f
#define ELFMAG1		'E'
#define ELFMAG2		'L'
#define ELFMAG3		'F'
#define ELFMAG		"\177ELF"	/* magic string */
#define SELFMAG		4		/* magic string size */
//
///* Values for e_ident[EI_VERSION] and e_version. */
#define EV_NONE		0
#define EV_CURRENT	1
//
///* Values for e_ident[EI_CLASS]. */
#define ELFCLASSNONE	0	/* Unknown class. */
#define ELFCLASS32	1	/* 32-bit architecture. */
#define ELFCLASS64	2	/* 64-bit architecture. */
//
///* Values for e_ident[EI_DATA]. */
#define ELFDATANONE	0	/* Unknown data format. */
#define ELFDATA2LSB	1	/* 2's complement little-endian. */
#define ELFDATA2MSB	2	/* 2's complement big-endian. */
//
///* Values for e_ident[EI_OSABI]. */
#define ELFOSABI_SYSV		0	/* symbol used in old spec */
#define ELFOSABI_NONE		0	/* UNIX System V ABI */
#define ELFOSABI_HPUX		1	/* HP-UX operating system */
#define ELFOSABI_NETBSD 	2	/* NetBSD */
#define ELFOSABI_GNU		3	/* GNU */
#define ELFOSABI_LINUX		3	/* Alias for ELFOSABI_GNU */
#define ELFOSABI_SOLARIS	6	/* Solaris */
#define ELFOSABI_AIX		7	/* AIX */
#define ELFOSABI_IRIX		8	/* IRIX */
#define ELFOSABI_FREEBSD	9	/* FreeBSD */
#define ELFOSABI_TRU64		10	/* TRU64 UNIX */
#define ELFOSABI_MODESTO	11	/* Novell Modesto */
#define ELFOSABI_OPENBSD	12	/* OpenBSD */
#define ELFOSABI_OPENVMS	13	/* OpenVMS */
#define ELFOSABI_NSK		14	/* Hewlett-Packard Non-Stop Kernel */
#define ELFOSABI_AROS		15	/* AROS */
#define ELFOSABI_FENIXOS	16	/* FenixOS */
#define ELFOSABI_C6000_ELFABI	64	/* Bare-metal TMS320C6000 */
#define ELFOSABI_C6000_LINUX	65	/* Linux TMS320C6000 */
#define ELFOSABI_ARM		97	/* ARM */
#define ELFOSABI_STANDALONE	255	/* Standalone (embedded) application */
//
///* e_ident */
#define IS_ELF(ehdr)	((ehdr).e_ident[EI_MAG0] == ELFMAG0 && \
			 (ehdr).e_ident[EI_MAG1] == ELFMAG1 && \
			 (ehdr).e_ident[EI_MAG2] == ELFMAG2 && \
			 (ehdr).e_ident[EI_MAG3] == ELFMAG3)
//
///* Values for e_type, which identifies the object file type.  */
//
#define ET_NONE 	0	/* No file type */
#define ET_REL		1	/* Relocatable file */
#define ET_EXEC 	2	/* Executable file */
#define ET_DYN		3	/* Shared object file */
#define ET_CORE 	4	/* Core file */
#define ET_LOOS 	0xFE00	/* Operating system-specific */
#define ET_HIOS 	0xFEFF	/* Operating system-specific */
#define ET_LOPROC	0xFF00	/* Processor-specific */
#define ET_HIPROC	0xFFFF	/* Processor-specific */
//
///* Values for e_machine, which identifies the architecture.  These numbers
//   are officially assigned by registry@sco.com.  See below for a list of
//   ad-hoc numbers used during initial development.  */
//
#define EM_NONE 	  0	/* No machine */
#define EM_M32		  1	/* AT&T WE 32100 */
#define EM_SPARC	  2	/* SUN SPARC */
#define EM_386		  3	/* Intel 80386 */
#define EM_68K		  4	/* Motorola m68k family */
#define EM_88K		  5	/* Motorola m88k family */
#define EM_486		  6	/* Intel 80486 *//* Reserved for future use */
#define EM_860		  7	/* Intel 80860 */
#define EM_MIPS 	  8	/* MIPS R3000 (officially, big-endian only) */
#define EM_S370 	  9	/* IBM System/370 */
#define EM_MIPS_RS3_LE	 10	/* MIPS R3000 little-endian (Oct 4 1999 Draft) Deprecated */
#define EM_res011	 11	/* Reserved */
#define EM_res012	 12	/* Reserved */
#define EM_res013	 13	/* Reserved */
#define EM_res014	 14	/* Reserved */
#define EM_PARISC	 15	/* HPPA */
#define EM_res016	 16	/* Reserved */
#define EM_VPP550	 17	/* Fujitsu VPP500 */
#define EM_SPARC32PLUS	 18	/* Sun's "v8plus" */
#define EM_960		 19	/* Intel 80960 */
#define EM_PPC		 20	/* PowerPC */
#define EM_PPC64	 21	/* 64-bit PowerPC */
#define EM_S390 	 22	/* IBM S/390 */
#define EM_SPU		 23	/* Sony/Toshiba/IBM SPU */
#define EM_res024	 24	/* Reserved */
#define EM_res025	 25	/* Reserved */
#define EM_res026	 26	/* Reserved */
#define EM_res027	 27	/* Reserved */
#define EM_res028	 28	/* Reserved */
#define EM_res029	 29	/* Reserved */
#define EM_res030	 30	/* Reserved */
#define EM_res031	 31	/* Reserved */
#define EM_res032	 32	/* Reserved */
#define EM_res033	 33	/* Reserved */
#define EM_res034	 34	/* Reserved */
#define EM_res035	 35	/* Reserved */
#define EM_V800 	 36	/* NEC V800 series */
#define EM_FR20 	 37	/* Fujitsu FR20 */
#define EM_RH32 	 38	/* TRW RH32 */
#define EM_MCORE	 39	/* Motorola M*Core */ /* May also be taken by Fujitsu MMA */
#define EM_RCE		 39	/* Old name for MCore */
#define EM_ARM		 40	/* ARM */
#define EM_OLD_ALPHA	 41	/* Digital Alpha */
#define EM_SH		 42	/* Renesas (formerly Hitachi) / SuperH SH */
#define EM_SPARCV9	 43	/* SPARC v9 64-bit */
#define EM_TRICORE	 44	/* Siemens Tricore embedded processor */
#define EM_ARC		 45	/* ARC Cores */
#define EM_H8_300	 46	/* Renesas (formerly Hitachi) H8/300 */
#define EM_H8_300H	 47	/* Renesas (formerly Hitachi) H8/300H */
#define EM_H8S		 48	/* Renesas (formerly Hitachi) H8S */
#define EM_H8_500	 49	/* Renesas (formerly Hitachi) H8/500 */
#define EM_IA_64	 50	/* Intel IA-64 Processor */
#define EM_MIPS_X	 51	/* Stanford MIPS-X */
#define EM_MIPS_X	 51	/* Stanford MIPS-X */
#define EM_COLDFIRE	 52	/* Motorola Coldfire */
#define EM_68HC12	 53	/* Motorola M68HC12 */
#define EM_MMA		 54	/* Fujitsu Multimedia Accelerator */
#define EM_PCP		 55	/* Siemens PCP */
#define EM_NCPU 	 56	/* Sony nCPU embedded RISC processor */
#define EM_NDR1 	 57	/* Denso NDR1 microprocessor */
#define EM_STARCORE	 58	/* Motorola Star*Core processor */
#define EM_ME16 	 59	/* Toyota ME16 processor */
#define EM_ST100	 60	/* STMicroelectronics ST100 processor */
#define EM_TINYJ	 61	/* Advanced Logic Corp. TinyJ embedded processor */
#define EM_X86_64	 62	/* Advanced Micro Devices X86-64 processor */
#define EM_AMD64	 62	/* Advanced Micro Devices X86-64 (compat) */
#define EM_PDSP 	 63	/* Sony DSP Processor */
#define EM_PDP10	 64	/* Digital Equipment Corp. PDP-10 */
#define EM_PDP11	 65	/* Digital Equipment Corp. PDP-11 */
#define EM_FX66 	 66	/* Siemens FX66 microcontroller */
#define EM_ST9PLUS	 67	/* STMicroelectronics ST9+ 8/16 bit microcontroller */
#define EM_ST7		 68	/* STMicroelectronics ST7 8-bit microcontroller */
#define EM_68HC16	 69	/* Motorola MC68HC16 Microcontroller */
#define EM_68HC11	 70	/* Motorola MC68HC11 Microcontroller */
#define EM_68HC08	 71	/* Motorola MC68HC08 Microcontroller */
#define EM_68HC05	 72	/* Motorola MC68HC05 Microcontroller */
#define EM_SVX		 73	/* Silicon Graphics SVx */
#define EM_ST19 	 74	/* STMicroelectronics ST19 8-bit cpu */
#define EM_VAX		 75	/* Digital VAX */
#define EM_CRIS 	 76	/* Axis Communications 32-bit embedded processor */
#define EM_JAVELIN	 77	/* Infineon Technologies 32-bit embedded cpu */
#define EM_FIREPATH	 78	/* Element 14 64-bit DSP processor */
#define EM_ZSP		 79	/* LSI Logic's 16-bit DSP processor */
#define EM_MMIX 	 80	/* Donald Knuth's educational 64-bit processor */
#define EM_HUANY	 81	/* Harvard's machine-independent format */
#define EM_PRISM	 82	/* SiTera Prism */
#define EM_AVR		 83	/* Atmel AVR 8-bit microcontroller */
#define EM_FR30 	 84	/* Fujitsu FR30 */
#define EM_D10V 	 85	/* Mitsubishi D10V */
#define EM_D30V 	 86	/* Mitsubishi D30V */
#define EM_V850 	 87	/* Renesas V850 (formerly NEC V850) */
#define EM_M32R 	 88	/* Renesas M32R (formerly Mitsubishi M32R) */
#define EM_MN10300	 89	/* Matsushita MN10300 */
#define EM_MN10200	 90	/* Matsushita MN10200 */
#define EM_PJ		 91	/* picoJava */
#define EM_OPENRISC	 92	/* OpenRISC 32-bit embedded processor */
#define EM_ARC_A5	 93	/* ARC Cores Tangent-A5 */
#define EM_XTENSA	 94	/* Tensilica Xtensa Architecture */
#define EM_VIDEOCORE	 95	/* Alphamosaic VideoCore processor */
#define EM_TMM_GPP	 96	/* Thompson Multimedia General Purpose Processor */
#define EM_NS32K	 97	/* National Semiconductor 32000 series */
#define EM_TPC		 98	/* Tenor Network TPC processor */
#define EM_SNP1K	 99	/* Trebia SNP 1000 processor */
#define EM_ST200	100	/* STMicroelectronics ST200 microcontroller */
#define EM_IP2K 	101	/* Ubicom IP2022 micro controller */
#define EM_MAX		102	/* MAX Processor */
#define EM_CR		103	/* National Semiconductor CompactRISC */
#define EM_F2MC16	104	/* Fujitsu F2MC16 */
#define EM_MSP430	105	/* TI msp430 micro controller */
#define EM_BLACKFIN	106	/* ADI Blackfin */
#define EM_SE_C33	107	/* S1C33 Family of Seiko Epson processors */
#define EM_SEP		108	/* Sharp embedded microprocessor */
#define EM_ARCA 	109	/* Arca RISC Microprocessor */
#define EM_UNICORE	110	/* Microprocessor series from PKU-Unity Ltd. and MPRC of Peking University */
#define EM_EXCESS	111	/* eXcess: 16/32/64-bit configurable embedded CPU */
#define EM_DXP		112	/* Icera Semiconductor Inc. Deep Execution Processor */
#define EM_ALTERA_NIOS2	113	/* Altera Nios II soft-core processor */
#define EM_CRX		114	/* National Semiconductor CRX */
#define EM_XGATE	115	/* Motorola XGATE embedded processor */
#define EM_C166 	116	/* Infineon C16x/XC16x processor */
#define EM_M16C 	117	/* Renesas M16C series microprocessors */
#define EM_DSPIC30F	118	/* Microchip Technology dsPIC30F Digital Signal Controller */
#define EM_CE		119	/* Freescale Communication Engine RISC core */
#define EM_M32C 	120	/* Renesas M32C series microprocessors */
#define EM_res121	121	/* Reserved */
#define EM_res122	122	/* Reserved */
#define EM_res123	123	/* Reserved */
#define EM_res124	124	/* Reserved */
#define EM_res125	125	/* Reserved */
#define EM_res126	126	/* Reserved */
#define EM_res127	127	/* Reserved */
#define EM_res128	128	/* Reserved */
#define EM_res129	129	/* Reserved */
#define EM_res130	130	/* Reserved */
#define EM_TSK3000	131	/* Altium TSK3000 core */
#define EM_RS08 	132	/* Freescale RS08 embedded processor */
#define EM_res133	133	/* Reserved */
#define EM_ECOG2	134	/* Cyan Technology eCOG2 microprocessor */
#define EM_SCORE	135	/* Sunplus Score */
#define EM_SCORE7	135	/* Sunplus S+core7 RISC processor */
#define EM_DSP24	136	/* New Japan Radio (NJR) 24-bit DSP Processor */
#define EM_VIDEOCORE3	137	/* Broadcom VideoCore III processor */
#define EM_LATTICEMICO32 138	/* RISC processor for Lattice FPGA architecture */
#define EM_SE_C17	139	/* Seiko Epson C17 family */
#define EM_TI_C6000	140	/* Texas Instruments TMS320C6000 DSP family */
#define EM_TI_C2000	141	/* Texas Instruments TMS320C2000 DSP family */
#define EM_TI_C5500	142	/* Texas Instruments TMS320C55x DSP family */
#define EM_res143	143	/* Reserved */
#define EM_res144	144	/* Reserved */
#define EM_res145	145	/* Reserved */
#define EM_res146	146	/* Reserved */
#define EM_res147	147	/* Reserved */
#define EM_res148	148	/* Reserved */
#define EM_res149	149	/* Reserved */
#define EM_res150	150	/* Reserved */
#define EM_res151	151	/* Reserved */
#define EM_res152	152	/* Reserved */
#define EM_res153	153	/* Reserved */
#define EM_res154	154	/* Reserved */
#define EM_res155	155	/* Reserved */
#define EM_res156	156	/* Reserved */
#define EM_res157	157	/* Reserved */
#define EM_res158	158	/* Reserved */
#define EM_res159	159	/* Reserved */
#define EM_MMDSP_PLUS	160	/* STMicroelectronics 64bit VLIW Data Signal Processor */
#define EM_CYPRESS_M8C	161	/* Cypress M8C microprocessor */
#define EM_R32C 	162	/* Renesas R32C series microprocessors */
#define EM_TRIMEDIA	163	/* NXP Semiconductors TriMedia architecture family */
#define EM_QDSP6	164	/* QUALCOMM DSP6 Processor */
#define EM_8051 	165	/* Intel 8051 and variants */
#define EM_STXP7X	166	/* STMicroelectronics STxP7x family */
#define EM_NDS32	167	/* Andes Technology compact code size embedded RISC processor family */
#define EM_ECOG1	168	/* Cyan Technology eCOG1X family */
#define EM_ECOG1X	168	/* Cyan Technology eCOG1X family */
#define EM_MAXQ30	169	/* Dallas Semiconductor MAXQ30 Core Micro-controllers */
#define EM_XIMO16	170	/* New Japan Radio (NJR) 16-bit DSP Processor */
#define EM_MANIK	171	/* M2000 Reconfigurable RISC Microprocessor */
#define EM_CRAYNV2	172	/* Cray Inc. NV2 vector architecture */
#define EM_RX		173	/* Renesas RX family */
#define EM_METAG	174	/* Imagination Technologies META processor architecture */
#define EM_MCST_ELBRUS	175	/* MCST Elbrus general purpose hardware architecture */
#define EM_ECOG16	176	/* Cyan Technology eCOG16 family */
#define EM_CR16 	177	/* National Semiconductor CompactRISC 16-bit processor */
#define EM_ETPU 	178	/* Freescale Extended Time Processing Unit */
#define EM_SLE9X	179	/* Infineon Technologies SLE9X core */
#define EM_L1OM 	180	/* Intel L1OM */
#define EM_K1OM 	181	/* Intel K1OM */
#define EM_INTEL182	182	/* Reserved by Intel */
#define EM_res183	183	/* Reserved by ARM */
#define EM_res184	184	/* Reserved by ARM */
#define EM_AVR32	185	/* Atmel Corporation 32-bit microprocessor family */
#define EM_STM8 	186	/* STMicroeletronics STM8 8-bit microcontroller */
#define EM_TILE64	187	/* Tilera TILE64 multicore architecture family */
#define EM_TILEPRO	188	/* Tilera TILEPro multicore architecture family */
#define EM_MICROBLAZE	189	/* Xilinx MicroBlaze 32-bit RISC soft processor core */
#define EM_CUDA 	190	/* NVIDIA CUDA architecture */
#define EM_TILEGX	191	/* Tilera TILE-Gx multicore architecture family */
//
///* Alpha backend magic number.  Written in the absence of an ABI.  */
//#define EM_ALPHA		0x9026
//
///* Special section indexes. */
//
#define SHN_UNDEF	     0		/* Undefined, missing, irrelevant. */
#define SHN_LORESERVE	0xff00		/* First of reserved range. */
#define SHN_LOPROC	0xff00		/* First processor-specific. */
#define SHN_HIPROC	0xff1f		/* Last processor-specific. */
#define SHN_LOOS	0xff20		/* First operating system-specific. */
#define SHN_HIOS	0xff3f		/* Last operating system-specific. */
#define SHN_ABS 	0xfff1		/* Absolute values. */
#define SHN_COMMON	0xfff2		/* Common data. */
#define SHN_XINDEX	0xffff		/* Escape -- index stored elsewhere. */
#define SHN_HIRESERVE	0xffff		/* Last of reserved range. */
//
///* Values for program header, p_type field. */
//
#define PT_NULL 	0		/* Program header table entry unused */
#define PT_LOAD 	1		/* Loadable program segment */
#define PT_DYNAMIC	2		/* Dynamic linking information */
#define PT_INTERP	3		/* Program interpreter */
#define PT_NOTE 	4		/* Auxiliary information */
#define PT_SHLIB	5		/* Reserved, unspecified semantics */
#define PT_PHDR 	6		/* Entry for header table itself */
#define PT_TLS		7		/* Thread local storage segment */
#define PT_LOOS 	0x60000000	/* OS-specific */
#define PT_HIOS 	0x6fffffff	/* OS-specific */
#define PT_LOPROC	0x70000000	/* Processor-specific */
#define PT_HIPROC	0x7FFFFFFF	/* Processor-specific */
//
#define PT_GNU_EH_FRAME (PT_LOOS + 0x474e550) /* Frame unwind information */
#define PT_SUNW_EH_FRAME PT_GNU_EH_FRAME      /* Solaris uses the same value */
#define PT_GNU_STACK    (PT_LOOS + 0x474e551) /* Stack flags */
#define PT_GNU_RELRO    (PT_LOOS + 0x474e552) /* Read-only after relocation */
//
///* Program segment permissions, in program header p_flags field.  */
//
#define PF_X		0x1		/* Segment is executable */
#define PF_W		0x2		/* Segment is writable */
#define PF_R		0x4		/* Segment is readable */
#define PF_MASKOS	0x0FF00000	/* New value, Oct 4, 1999 Draft */
#define PF_MASKPROC	0xF0000000	/* Processor-specific reserved bits */
//
///* Values for section header, sh_type field.  */
//
#define SHT_NULL		 0	/* Section header table entry unused */
#define SHT_PROGBITS		 1	/* Program specific (private) data */
#define SHT_SYMTAB		 2	/* Link editing symbol table */
#define SHT_STRTAB		 3	/* A string table */
#define SHT_RELA		 4	/* Relocation entries with addends */
#define SHT_HASH		 5	/* A symbol hash table */
#define SHT_DYNAMIC		 6	/* Information for dynamic linking */
#define SHT_NOTE		 7	/* Information that marks file */
#define SHT_NOBITS		 8	/* Section occupies no space in file */
#define SHT_REL 		 9	/* Relocation entries, no addends */
#define SHT_SHLIB		10	/* Reserved, unspecified semantics */
#define SHT_DYNSYM		11	/* Dynamic linking symbol table */
//
#define SHT_INIT_ARRAY		14	/* Array of ptrs to init functions */
#define SHT_FINI_ARRAY		15	/* Array of ptrs to finish functions */
#define SHT_PREINIT_ARRAY	16	/* Array of ptrs to pre-init funcs */
#define SHT_GROUP		17	/* Section contains a section group */
#define SHT_SYMTAB_SHNDX	18	/* Indicies for SHN_XINDEX entries */
//
#define SHT_LOOS		0x60000000	/* First of OS specific semantics */
#define SHT_HIOS		0x6fffffff	/* Last of OS specific semantics */
//
#define SHT_GNU_INCREMENTAL_INPUTS 0x6fff4700	/* incremental build data */
#define SHT_GNU_ATTRIBUTES	0x6ffffff5	/* Object attributes */
#define SHT_GNU_HASH		0x6ffffff6	/* GNU style symbol hash table */
#define SHT_GNU_LIBLIST 	0x6ffffff7	/* List of prelink dependencies */
//
///* The next three section types are defined by Solaris, and are named
//   SHT_SUNW*.  We use them in GNU code, so we also define SHT_GNU*
//   versions.  */
#define SHT_SUNW_verdef 	0x6ffffffd	/* Versions defined by file */
#define SHT_SUNW_verneed	0x6ffffffe	/* Versions needed by file */
#define SHT_SUNW_versym 	0x6fffffff	/* Symbol versions */
//
#define SHT_GNU_verdef		SHT_SUNW_verdef
#define SHT_GNU_verneed 	SHT_SUNW_verneed
#define SHT_GNU_versym		SHT_SUNW_versym
//
#define SHT_LOPROC	0x70000000	/* Processor-specific semantics, lo */
#define SHT_HIPROC	0x7FFFFFFF	/* Processor-specific semantics, hi */
#define SHT_LOUSER	0x80000000	/* Application-specific semantics */
#define SHT_HIUSER	0xFFFFFFFF	/* New value, defined in Oct 4, 1999 Draft */
//
///* Values for section header, sh_flags field.  */
//
#define SHF_WRITE		0x1	/* Writable data during execution */
#define SHF_ALLOC		0x2	/* Occupies memory during execution */
#define SHF_EXECINSTR		0x4	/* Executable machine instructions */
#define SHF_MERGE		0x10	/* Data in this section can be merged */
#define SHF_STRINGS		0x20	/* Contains null terminated character strings */
#define SHF_INFO_LINK		0x40	/* sh_info holds section header table index */
#define SHF_LINK_ORDER		0x80	/* Preserve section ordering when linking */
#define SHF_OS_NONCONFORMING	0x100	/* OS specific processing required */
#define SHF_GROUP		0x200	/* Member of a section group */
#define SHF_TLS			0x400	/* Thread local storage section */
//
#define SHF_MASKOS	0x0FF00000	/* New value, Oct 4, 1999 Draft */
#define SHF_MASKPROC	0xF0000000	/* Processor-specific semantics */
//
///* Values of note segment descriptor types for core files. */
//
#define NT_PRSTATUS	1		/* Contains copy of prstatus struct */
#define NT_FPREGSET	2		/* Contains copy of fpregset struct */
#define NT_PRPSINFO	3		/* Contains copy of prpsinfo struct */
#define NT_TASKSTRUCT	4		/* Contains copy of task struct */
#define NT_AUXV 	6		/* Contains copy of Elfxx_auxv_t */
//
#define STN_UNDEF	0		/* Undefined symbol index */
//
#define STB_LOCAL	0		/* Symbol not visible outside obj */
#define STB_GLOBAL	1		/* Symbol visible outside obj */
#define STB_WEAK	2		/* Like globals, lower precedence */
#define STB_LOOS	10		/* OS-specific semantics */
#define STB_GNU_UNIQUE	10		/* Symbol is unique in namespace */
#define STB_HIOS	12		/* OS-specific semantics */
#define STB_LOPROC	13		/* Processor-specific semantics */
#define STB_HIPROC	15		/* Processor-specific semantics */
//
#define STT_NOTYPE	0		/* Symbol type is unspecified */
#define STT_OBJECT	1		/* Symbol is a data object */
#define STT_FUNC	2		/* Symbol is a code object */
#define STT_SECTION	3		/* Symbol associated with a section */
#define STT_FILE	4		/* Symbol gives a file name */
#define STT_COMMON	5		/* An uninitialised common block */
#define STT_TLS 	6		/* Thread local data object */
#define STT_RELC	8		/* Complex relocation expression */
#define STT_SRELC	9		/* Signed Complex relocation expression */
#define STT_LOOS	10		/* OS-specific semantics */
#define STT_GNU_IFUNC	10		/* Symbol is an indirect code object */
#define STT_HIOS	12		/* OS-specific semantics */
#define STT_LOPROC	13		/* Processor-specific semantics */
#define STT_HIPROC	15		/* Processor-specific semantics */
//
///* The following constants control how a symbol may be accessed once it has
//   become part of an executable or shared library.  */
//
#define STV_DEFAULT	0		/* Visibility is specified by binding type */
#define STV_INTERNAL	1		/* OS specific version of STV_HIDDEN */
#define STV_HIDDEN	2		/* Can only be seen inside currect component */
#define STV_PROTECTED	3		/* Treat as STB_LOCAL inside current component */
//
///* Dynamic section tags.  */
//
#define DT_NULL 	0	/* Terminating entry. */
#define DT_NEEDED	1	/* String table offset of a needed shared
//				   library. */
#define DT_PLTRELSZ	2	/* Total size in bytes of PLT relocations. */
#define DT_PLTGOT	3	/* Processor-dependent address. */
#define DT_HASH 	4	/* Address of symbol hash table. */
#define DT_STRTAB	5	/* Address of string table. */
#define DT_SYMTAB	6	/* Address of symbol table. */
#define DT_RELA 	7	/* Address of ElfNN_Rela relocations. */
#define DT_RELASZ	8	/* Total size of ElfNN_Rela relocations. */
#define DT_RELAENT	9	/* Size of each ElfNN_Rela relocation entry. */
#define DT_STRSZ	10	/* Size of string table. */
#define DT_SYMENT	11	/* Size of each symbol table entry. */
#define DT_INIT 	12	/* Address of initialization function. */
#define DT_FINI 	13	/* Address of finalization function. */
#define DT_SONAME	14	/* String table offset of shared object
//				   name. */
#define DT_RPATH	15	/* String table offset of library path. [sup] */
#define DT_SYMBOLIC	16	/* Indicates "symbolic" linking. [sup] */
#define DT_REL		17	/* Address of ElfNN_Rel relocations. */
#define DT_RELSZ	18	/* Total size of ElfNN_Rel relocations. */
#define DT_RELENT	19	/* Size of each ElfNN_Rel relocation. */
#define DT_PLTREL	20	/* Type of relocation used for PLT. */
#define DT_DEBUG	21	/* Reserved (not used). */
#define DT_TEXTREL	22	/* Indicates there may be relocations in
//				   non-writable segments. [sup] */
#define DT_JMPREL	23	/* Address of PLT relocations. */
#define DT_BIND_NOW	24	/* [sup] */
#define DT_INIT_ARRAY	25	/* Address of the array of pointers to
//				   initialization functions */
#define DT_FINI_ARRAY	26	/* Address of the array of pointers to
//				   termination functions */
#define DT_INIT_ARRAYSZ	27	/* Size in bytes of the array of
//				   initialization functions. */
#define DT_FINI_ARRAYSZ	28	/* Size in bytes of the array of
//				   terminationfunctions. */
#define DT_RUNPATH	29	/* String table offset of a null-terminated
//				   library search path string. */
#define DT_FLAGS	30	/* Object specific flag values. */
#define DT_ENCODING	32	/* Values greater than or equal to DT_ENCODING
//				   and less than DT_LOOS follow the rules for
//				   the interpretation of the d_un union
//				   as follows: even == 'd_ptr', odd == 'd_val'
//				   or none */
#define DT_PREINIT_ARRAY 32	/* Address of the array of pointers to
//				   pre-initialization functions. */
#define DT_PREINIT_ARRAYSZ 33	/* Size in bytes of the array of
//				   pre-initialization functions. */
//
#define DT_LOOS		0x6000000d	/* First OS-specific */
#define DT_HIOS		0x6fff0000	/* Last OS-specific */
//
///* The next 2 dynamic tag ranges, integer value range (DT_VALRNGLO to
//   DT_VALRNGHI) and virtual address range (DT_ADDRRNGLO to DT_ADDRRNGHI),
//   are used on Solaris.  We support them everywhere.  Note these values
//   lie outside of the (new) range for OS specific values.  This is a
//   deliberate special case and we maintain it for backwards compatability.
// */
#define DT_VALRNGLO		0x6ffffd00
#define DT_GNU_PRELINKED	0x6ffffdf5
#define DT_GNU_CONFLICTSZ	0x6ffffdf6
#define DT_GNU_LIBLISTSZ	0x6ffffdf7
#define DT_CHECKSUM	0x6ffffdf8	/* elf checksum */
#define DT_PLTPADSZ	0x6ffffdf9	/* pltpadding size */
#define DT_MOVEENT	0x6ffffdfa	/* move table entry size */
#define DT_MOVESZ	0x6ffffdfb	/* move table size */
#define DT_FEATURE	0x6ffffdfc	/* feature holder */
#define DT_POSFLAG_1	0x6ffffdfd	/* flags for DT_* entries, effecting */
//					/*   the following DT_* entry. */
					/*   See DF_P1_* definitions */
#define DT_SYMINSZ	0x6ffffdfe	/* syminfo table size (in bytes) */
#define DT_SYMINENT	0x6ffffdff	/* syminfo entry size (in bytes) */
#define DT_VALRNGHI	0x6ffffdff

#define DT_ADDRRNGLO	0x6ffffe00
#define DT_GNU_HASH	0x6ffffef5	/* GNU-style hash table */
#define DT_TLSDESC_PLT	0x6ffffef6
#define DT_TLSDESC_GOT	0x6ffffef7
#define DT_GNU_CONFLICT 0x6ffffef8
#define DT_GNU_LIBLIST	0x6ffffef9
#define DT_CONFIG	0x6ffffefa	/* configuration information */
#define DT_DEPAUDIT	0x6ffffefb	/* dependency auditing */
#define DT_AUDIT	0x6ffffefc	/* object auditing */
#define DT_PLTPAD	0x6ffffefd	/* pltpadding (sparcv9) */
#define DT_MOVETAB	0x6ffffefe	/* move table */
#define DT_SYMINFO	0x6ffffeff	/* syminfo table */
#define DT_ADDRRNGHI	0x6ffffeff
//
#define DT_RELACOUNT	0x6ffffff9	/* number of RELATIVE relocations */
#define DT_RELCOUNT	0x6ffffffa	/* number of RELATIVE relocations */
#define DT_FLAGS_1	0x6ffffffb	/* state flags - see DF_1_* defs */
#define DT_VERDEF	0x6ffffffc	/* Address of verdef section. */
#define DT_VERDEFNUM	0x6ffffffd	/* Number of elems in verdef section */
#define DT_VERNEED	0x6ffffffe	/* Address of verneed section. */
#define DT_VERNEEDNUM	0x6fffffff	/* Number of elems in verneed section */
//
///* This tag is a GNU extension to the Solaris version scheme.  */
#define DT_VERSYM	0x6ffffff0
//
#define DT_LOPROC	0x70000000	/* First processor-specific type. */
#define DT_HIPROC	0x7fffffff	/* Last processor-specific type. */
//
///* These section tags are used on Solaris.  We support them
//   everywhere, and hope they do not conflict.  */
//
//#define DT_AUXILIARY	0x7ffffffd	/* shared library auxiliary name */
//#define DT_USED 	0x7ffffffe	/* ignored - same as needed */
//#define DT_FILTER	0x7fffffff	/* shared library filter name */
//
//
///* Values used in DT_FEATURE .dynamic entry.  */
//#define DTF_1_PARINIT	0x00000001
///* From
//
//   http://docs.sun.com:80/ab2/coll.45.13/LLM/@Ab2PageView/21165?Ab2Lang=C&Ab2Enc=iso-8859-1
//
//   DTF_1_CONFEXP is the same as DTF_1_PARINIT. It is a typo. The value
//   defined here is the same as the one in <sys/link.h> on Solaris 8.  */
//#define DTF_1_CONFEXP	0x00000002
//
///* Flag values used in the DT_POSFLAG_1 .dynamic entry.	 */
//#define DF_P1_LAZYLOAD	0x00000001
//#define DF_P1_GROUPPERM 0x00000002
//
///* Flag value in in the DT_FLAGS_1 .dynamic entry.  */
//#define DF_1_NOW	0x00000001
//#define DF_1_BIND_NOW	0x00000001	/* Same as DF_BIND_NOW */
//#define DF_1_GLOBAL	0x00000002	/* Set the RTLD_GLOBAL for object */
//#define DF_1_GROUP	0x00000004
//#define DF_1_NODELETE	0x00000008	/* Set the RTLD_NODELETE for object */
//#define DF_1_LOADFLTR	0x00000010	/* Immediate loading of filtees */
//#define DF_1_INITFIRST	0x00000020
//#define DF_1_NOOPEN	0x00000040	/* Do not allow loading on dlopen() */
//#define DF_1_ORIGIN	0x00000080	/* Process $ORIGIN */
//#define DF_1_DIRECT	0x00000100
//#define DF_1_TRANS	0x00000200
//#define DF_1_INTERPOSE	0x00000400
//#define DF_1_NODEFLIB	0x00000800
//#define DF_1_NODUMP	0x00001000
//#define DF_1_CONLFAT	0x00002000
//
///* Flag values for the DT_FLAGS entry. */
#define DF_ORIGIN	0x1	/* Indicates that the object being loaded may
//				   make reference to the $ORIGIN substitution
//				   string */
#define DF_SYMBOLIC	0x2	/* Indicates "symbolic" linking. */
#define DF_TEXTREL	0x4	/* Indicates there may be relocations in
//				   non-writable segments. */
#define DF_BIND_NOW	0x8	/* Indicates that the dynamic linker should
//				   process all relocations for the object
//				   containing this entry before transferring
//				   control to the program. */
#define DF_STATIC_TLS	0x10	/* Indicates that the shared object or
//				   executable contains code using a static
//				   thread-local storage scheme. */
//
///* These constants are used for the version number of a Elf32_Verdef
//   structure.  */
//
#define VER_DEF_NONE		0
#define VER_DEF_CURRENT 	1
#define VER_DEF_IDX(x)		VER_NDX(x)
//
///* These constants appear in the vd_flags field of a Elf32_Verdef
//   structure.
//
//   Cf. the Solaris Linker and Libraries Guide, Ch. 7, Object File Format,
//   Versioning Sections, for a description:
//
//   http://docs.sun.com/app/docs/doc/819-0690/chapter6-93046?l=en&a=view  */
//
//#define VER_FLG_BASE		0x1
//#define VER_FLG_WEAK		0x2
//#define VER_FLG_INFO		0x4
//
///* These special constants can be found in an Elf32_Versym field.  */
//
//#define VER_NDX_LOCAL		0
//#define VER_NDX_GLOBAL		1
//#define VER_NDX_GIVEN		2
//#define VER_NDX_HIDDEN		(1u << 15)
//#define VER_NDX(x)		((x) & ~(1u << 15))
///* These constants are used for the version number of a Elf32_Verneed
//   structure.  */
//
//#define VER_NEED_NONE		0
//#define VER_NEED_CURRENT	1
//#define VER_NEED_WEAK		(1u << 15)
//#define VER_NEED_HIDDEN 	VER_NDX_HIDDEN
//#define VER_NEED_IDX(x) 	VER_NDX(x)
//
///* This flag appears in a Versym structure.  It means that the symbol
//   is hidden, and is only visible with an explicit version number.
//   This is a GNU extension.  */
//
//#define VERSYM_HIDDEN		0x8000
//
///* This is the mask for the rest of the Versym information.  */
//
//#define VERSYM_VERSION		0x7fff
//
///* This is a special token which appears as part of a symbol name.  It
//   indictes that the rest of the name is actually the name of a
//   version node, and is not part of the actual name.  This is a GNU
//   extension.  For example, the symbol name `stat@ver2' is taken to
//   mean the symbol `stat' in version `ver2'.  */
//
//#define ELF_VER_CHR		'@'
//
///* Possible values for si_boundto.  */
//
//#define SYMINFO_BT_SELF 	0xffff	/* Symbol bound to self */
//#define SYMINFO_BT_PARENT	0xfffe	/* Symbol bound to parent */
//#define SYMINFO_BT_LOWRESERVE	0xff00	/* Beginning of reserved entries */
//
///* Possible bitmasks for si_flags.  */
//
//#define SYMINFO_FLG_DIRECT	0x0001	/* Direct bound symbol */
//#define SYMINFO_FLG_PASSTHRU	0x0002	/* Pass-thru symbol for translator */
//#define SYMINFO_FLG_COPY	0x0004	/* Symbol is a copy-reloc */
//#define SYMINFO_FLG_LAZYLOAD	0x0008	/* Symbol bound to object to be lazy loaded */
//
///* Syminfo version values.  */
//
//#define SYMINFO_NONE		0
//#define SYMINFO_CURRENT 	1
//#define SYMINFO_NUM		2
//
///* Section Group Flags.	 */
//
//#define GRP_COMDAT		0x1	/* A COMDAT group */
//
//#endif /* !_SYS_ELF_COMMON_H_ */

// http://gitweb.dragonflybsd.org/dragonfly.git/blob_plain/HEAD:/sys/cpu/x86_64/include/elf.h


///*-
// * Copyright (c) 1996-1997 John D. Polstra.
// * All rights reserved.
// *
// * Redistribution and use in source and binary forms, with or without
// * modification, are permitted provided that the following conditions
// * are met:
// * 1. Redistributions of source code must retain the above copyright
// *    notice, this list of conditions and the following disclaimer.
// * 2. Redistributions in binary form must reproduce the above copyright
// *    notice, this list of conditions and the following disclaimer in the
// *    documentation and/or other materials provided with the distribution.
// *
// * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
// * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
// * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
// * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
// * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
// * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
// * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
// * SUCH DAMAGE.
// *
// * $FreeBSD: src/sys/amd64/include/elf.h,v 1.25 2011/01/07 14:22:34 kib Exp $
// */
//
//#ifndef _CPU_ELF_H_
//#define	_CPU_ELF_H_
//
///*
// * ELF definitions for the x86_64 architecture.
// */
//
//
//#ifndef __ELF_WORD_SIZE
//#define	__ELF_WORD_SIZE	64	/* Used by <sys/elf_generic.h> */
//#endif
//#include <sys/elf32.h>	/* Definitions common to all 32 bit architectures. */
//#include <sys/elf64.h>	/* Definitions common to all 64 bit architectures. */
//#include <sys/elf_generic.h>
//
//#define	ELF_ARCH	EM_X86_64
//
//#define	ELF_MACHINE_OK(x) ((x) == EM_X86_64)
//
///*
// * Auxiliary vector entries for passing information to the interpreter.
// *
// * The i386 supplement to the SVR4 ABI specification names this "auxv_t",
// * but POSIX lays claim to all symbols ending with "_t".
// */
//typedef struct {	/* Auxiliary vector entry on initial stack */
//	int	a_type;			/* Entry type. */
//	union {
//		int	a_val;		/* Integer value. */
//	} a_un;
//} Elf32_Auxinfo;
//
//
//typedef struct {	/* Auxiliary vector entry on initial stack */
//	long	a_type;			/* Entry type. */
//	union {
//		long	a_val;		/* Integer value. */
//		void	*a_ptr;		/* Address. */
//		void	(*a_fcn)(void);	/* Function pointer (not used). */
//	} a_un;
//} Elf64_Auxinfo;
//
//__ElfType(Auxinfo);
//
///* Values for a_type. */
//#define	AT_NULL		0	/* Terminates the vector. */
//#define	AT_IGNORE	1	/* Ignored entry. */
//#define	AT_EXECFD	2	/* File descriptor of program to load. */
//#define	AT_PHDR		3	/* Program header of program already loaded. */
//#define	AT_PHENT	4	/* Size of each program header entry. */
//#define	AT_PHNUM	5	/* Number of program header entries. */
//#define	AT_PAGESZ	6	/* Page size in bytes. */
//#define	AT_BASE		7	/* Interpreter's base address. */
//#define	AT_FLAGS	8	/* Flags (unused for i386). */
//#define	AT_ENTRY	9	/* Where interpreter should transfer control. */
//
///*
// * The following non-standard values are used for passing information
// * from John Polstra's testbed program to the dynamic linker.  These
// * are expected to go away soon.
// *
// * Unfortunately, these overlap the Linux non-standard values, so they
// * must not be used in the same context.
// */
//#define	AT_BRK		10	/* Starting point for sbrk and brk. */
//#define	AT_DEBUG	11	/* Debugging level. */
//
///*
// * The following non-standard values are used in Linux ELF binaries.
// * Types 16-17 and 19-23 are not implemented in the kernel
// */
//#define	AT_NOTELF	10	/* Program is not ELF ?? */
//#define	AT_UID		11	/* Real uid. */
//#define	AT_EUID		12	/* Effective uid. */
//#define	AT_GID		13	/* Real gid. */
//#define	AT_EGID		14	/* Effective gid. */
//#define	AT_EXECPATH	15	/* Path to the executable. */
//#define	AT_CANARY	16	/* Canary for SSP */
//#define	AT_CANARYLEN	17	/* Length of the canary. */
//#define	AT_OSRELDATE	18	/* OSRELDATE. */
//#define	AT_NCPUS	19	/* Number of CPUs. */
//#define	AT_PAGESIZES	20	/* Pagesizes. */
//#define	AT_PAGESIZESLEN	21	/* Number of pagesizes. */
//#define	AT_STACKPROT	23	/* Initial stack protection. */
//
//#define	AT_COUNT	24	/* Count of defined aux entry types. */
//
///*
// * Relocation types.
// */
//
#define	R_X86_64_NONE	0	/* No relocation. */
#define	R_X86_64_64	1	/* Add 64 bit symbol value. */
#define	R_X86_64_PC32	2	/* PC-relative 32 bit signed sym value. */
#define	R_X86_64_GOT32	3	/* PC-relative 32 bit GOT offset. */
#define	R_X86_64_PLT32	4	/* PC-relative 32 bit PLT offset. */
#define	R_X86_64_COPY	5	/* Copy data from shared object. */
#define	R_X86_64_GLOB_DAT 6	/* Set GOT entry to data address. */
#define	R_X86_64_JMP_SLOT 7	/* Set GOT entry to code address. */
#define	R_X86_64_RELATIVE 8	/* Add load address of shared object. */
#define	R_X86_64_GOTPCREL 9	/* Add 32 bit signed pcrel offset to GOT. */
#define	R_X86_64_32	10	/* Add 32 bit zero extended symbol value */
#define	R_X86_64_32S	11	/* Add 32 bit sign extended symbol value */
#define	R_X86_64_16	12	/* Add 16 bit zero extended symbol value */
#define	R_X86_64_PC16	13	/* Add 16 bit signed extended pc relative symbol value */
#define	R_X86_64_8	14	/* Add 8 bit zero extended symbol value */
#define	R_X86_64_PC8	15	/* Add 8 bit signed extended pc relative symbol value */
#define	R_X86_64_DTPMOD64 16	/* ID of module containing symbol */
#define	R_X86_64_DTPOFF64 17	/* Offset in TLS block */
#define	R_X86_64_TPOFF64 18	/* Offset in static TLS block */
#define	R_X86_64_TLSGD	19	/* PC relative offset to GD GOT entry */
#define	R_X86_64_TLSLD	20	/* PC relative offset to LD GOT entry */
#define	R_X86_64_DTPOFF32 21	/* Offset in TLS block */
#define	R_X86_64_GOTTPOFF 22	/* PC relative offset to IE GOT entry */
#define	R_X86_64_TPOFF32 23	/* Offset in static TLS block */
#define	R_X86_64_IRELATIVE 37
//
#define	R_X86_64_COUNT	38	/* Count of defined relocation types. */
//
///* Define "machine" characteristics */
//#if __ELF_WORD_SIZE == 32
//#define ELF_TARG_CLASS  ELFCLASS32
//#else
//#define ELF_TARG_CLASS  ELFCLASS64
//#endif
//#define	ELF_TARG_DATA	ELFDATA2LSB
//#define	ELF_TARG_MACH	EM_X86_64
//#define	ELF_TARG_VER	1
//
// /*
//  * x86_64 load base for PIE binaries
//  */
//#define	ET_DYN_LOAD_ADDR	0x01021000
//
//#ifdef _KERNEL
///*
// * On the i386 we load the dynamic linker where a userland call
// * to mmap(0, ...) would put it.  The rationale behind this
// * calculation is that it leaves room for the heap to grow to
// * its maximum allowed size.
// */
//#define ELF_RTLD_ADDR(vmspace) \
//	(round_page((vm_offset_t)(vmspace)->vm_daddr + maxdsiz))
//
//#endif /* _KERNEL */
//#endif /* !_CPU_ELF_H_ */





//typedef struct {
//	uint32	n_namesz;	/* Length of name. */
//	uint32	n_descsz;	/* Length of descriptor. */
//	uint32	n_type;		/* Type of this note. */
//} Elf_Note;

/* Indexes into the e_ident array.  Keep synced with
   http://www.sco.com/developer/gabi/ch4.eheader.html */
//#define EI_MAG0		0	/* Magic number, byte 0. */
//#define EI_MAG1		1	/* Magic number, byte 1. */
//#define EI_MAG2		2	/* Magic number, byte 2. */
//#define EI_MAG3		3	/* Magic number, byte 3. */
//#define EI_CLASS	4	/* Class of machine. */
//#define EI_DATA		5	/* Data format. */
//#define EI_VERSION	6	/* ELF format version. */
//#define EI_OSABI	7	/* Operating system / ABI identification */
//#define EI_ABIVERSION	8	/* ABI version */
//#define OLD_EI_BRAND	8	/* Start of architecture identification. */
//#define EI_PAD		9	/* Start of padding (per SVR4 ABI). */
//#define EI_NIDENT	16	/* Size of e_ident array. */

/* Values for the magic number bytes. */
//#define ELFMAG0		0x7f
//#define ELFMAG1		'E'
//#define ELFMAG2		'L'
//#define ELFMAG3		'F'
//#define ELFMAG		"\177ELF"	/* magic string */
//#define SELFMAG		4		/* magic string size */

/* Values for e_ident[EI_VERSION] and e_version. */
//#define EV_NONE		0
//#define EV_CURRENT	1

/* Values for e_ident[EI_CLASS]. */
//#define ELFCLASSNONE	0	/* Unknown class. */
//#define ELFCLASS32	1	/* 32-bit architecture. */
//#define ELFCLASS64	2	/* 64-bit architecture. */

/* Values for e_ident[EI_DATA]. */
//#define ELFDATANONE	0	/* Unknown data format. */
//#define ELFDATA2LSB	1	/* 2's complement little-endian. */
//#define ELFDATA2MSB	2	/* 2's complement big-endian. */

/* Values for e_ident[EI_OSABI]. */
//#define ELFOSABI_NONE		0	/* UNIX System V ABI */
//#define ELFOSABI_HPUX		1	/* HP-UX operating system */
//#define ELFOSABI_NETBSD		2	/* NetBSD */
//#define ELFOSABI_LINUX		3	/* GNU/Linux */
//#define ELFOSABI_HURD		4	/* GNU/Hurd */
//#define ELFOSABI_86OPEN		5	/* 86Open common IA32 ABI */
//#define ELFOSABI_SOLARIS	6	/* Solaris */
//#define ELFOSABI_AIX		7	/* AIX */
//#define ELFOSABI_IRIX		8	/* IRIX */
//#define ELFOSABI_FREEBSD	9	/* FreeBSD */
//#define ELFOSABI_TRU64		10	/* TRU64 UNIX */
//#define ELFOSABI_MODESTO	11	/* Novell Modesto */
//#define ELFOSABI_OPENBSD	12	/* OpenBSD */
//#define ELFOSABI_OPENVMS	13	/* Open VMS */
//#define ELFOSABI_NSK		14	/* HP Non-Stop Kernel */
//#define ELFOSABI_ARM		97	/* ARM */
//#define ELFOSABI_STANDALONE	255	/* Standalone (embedded) application */

//#define ELFOSABI_DRAGONFLY	ELFOSABI_FREEBSD	/* DragonFly BSD */
//#define ELFOSABI_SYSV		ELFOSABI_NONE	/* symbol used in old spec */
//#define ELFOSABI_MONTEREY	ELFOSABI_AIX	/* Monterey */

/* e_ident */
//#define IS_ELF(ehdr)	((ehdr).e_ident[EI_MAG0] == ELFMAG0 && \
//			 (ehdr).e_ident[EI_MAG1] == ELFMAG1 && \
//			 (ehdr).e_ident[EI_MAG2] == ELFMAG2 && \
//			 (ehdr).e_ident[EI_MAG3] == ELFMAG3)

/* Values for e_type. */
//#define ET_NONE		0	/* Unknown type. */
//#define ET_REL		1	/* Relocatable. */
//#define ET_EXEC		2	/* Executable. */
//#define ET_DYN		3	/* Shared object. */
//#define ET_CORE		4	/* Core file. */
//#define ET_LOOS		0xfe00	/* First operating system specific. */
//#define ET_HIOS		0xfeff	/* Last operating system-specific. */
//#define ET_LOPROC	0xff00	/* First processor-specific. */
//#define ET_HIPROC	0xffff	/* Last processor-specific. */

/* Values for e_machine. */

/* Non-standard or deprecated. */

/* Special section indexes. */

/* sh_type */

/* Flags for sh_flags. */

/* Values for p_type. */

/* Values for p_flags. */

/* Values for d_tag. */

/* Values for DT_FLAGS */
/*	Indicates that the object being loaded may make reference to
	the $ORIGIN substitution string */

/* Values for n_type.  Used in core files. */

/* Symbol Binding - ELFNN_ST_BIND - st_info */

/* Symbol type - ELFNN_ST_TYPE - st_info */

/* Symbol visibility - ELFNN_ST_VISIBILITY - st_other */

/* Special symbol table indexes. */

/*
 * ELF definitions common to all 32-bit architectures.
 */

typedef uint32	Elf32_Addr;
typedef uint16	Elf32_Half;
typedef uint32	Elf32_Off;
typedef int32		Elf32_Sword;
typedef uint32	Elf32_Word;

typedef Elf32_Word	Elf32_Hashelt;

/* Non-standard class-dependent datatype used for abstraction. */
typedef Elf32_Word	Elf32_Size;
typedef Elf32_Sword	Elf32_Ssize;

/*
 * ELF header.
 */

typedef struct {
	unsigned char	ident[EI_NIDENT];	/* File identification. */
	Elf32_Half	type;		/* File type. */
	Elf32_Half	machine;	/* Machine architecture. */
	Elf32_Word	version;	/* ELF format version. */
	Elf32_Addr	entry;	/* Entry point. */
	Elf32_Off	phoff;	/* Program header file offset. */
	Elf32_Off	shoff;	/* Section header file offset. */
	Elf32_Word	flags;	/* Architecture-specific flags. */
	Elf32_Half	ehsize;	/* Size of ELF header in bytes. */
	Elf32_Half	phentsize;	/* Size of program header entry. */
	Elf32_Half	phnum;	/* Number of program header entries. */
	Elf32_Half	shentsize;	/* Size of section header entry. */
	Elf32_Half	shnum;	/* Number of section header entries. */
	Elf32_Half	shstrndx;	/* Section name strings section. */
} Elf32_Ehdr;

/*
 * Section header.
 */

typedef struct {
	Elf32_Word	name;	/* Section name (index into the
					   section header string table). */
	Elf32_Word	type;	/* Section type. */
	Elf32_Word	flags;	/* Section flags. */
	Elf32_Addr	vaddr;	/* Address in memory image. */
	Elf32_Off	off;	/* Offset in file. */
	Elf32_Word	size;	/* Size in bytes. */
	Elf32_Word	link;	/* Index of a related section. */
	Elf32_Word	info;	/* Depends on section type. */
	Elf32_Word	addralign;	/* Alignment in bytes. */
	Elf32_Word	entsize;	/* Size of each entry in section. */
} Elf32_Shdr;

/*
 * Program header.
 */

typedef struct {
	Elf32_Word	type;		/* Entry type. */
	Elf32_Off	off;	/* File offset of contents. */
	Elf32_Addr	vaddr;	/* Virtual address in memory image. */
	Elf32_Addr	paddr;	/* Physical address (not used). */
	Elf32_Word	filesz;	/* Size of contents in file. */
	Elf32_Word	memsz;	/* Size of contents in memory. */
	Elf32_Word	flags;	/* Access permission flags. */
	Elf32_Word	align;	/* Alignment in memory and file. */
} Elf32_Phdr;

/*
 * Dynamic structure.  The ".dynamic" section contains an array of them.
 */

typedef struct {
	Elf32_Sword	d_tag;		/* Entry type. */
	union {
		Elf32_Word	d_val;	/* Integer value. */
		Elf32_Addr	d_ptr;	/* Address value. */
	} d_un;
} Elf32_Dyn;

/*
 * Relocation entries.
 */

/* Relocations that don't need an addend field. */
typedef struct {
	Elf32_Addr	off;	/* Location to be relocated. */
	Elf32_Word	info;		/* Relocation type and symbol index. */
} Elf32_Rel;

/* Relocations that need an addend field. */
typedef struct {
	Elf32_Addr	off;	/* Location to be relocated. */
	Elf32_Word	info;		/* Relocation type and symbol index. */
	Elf32_Sword	addend;	/* Addend. */
} Elf32_Rela;

/* Macros for accessing the fields of r_info. */
#define ELF32_R_SYM(info)	((info) >> 8)
#define ELF32_R_TYPE(info)	((unsigned char)(info))

/* Macro for constructing r_info from field values. */
#define ELF32_R_INFO(sym, type)	(((sym) << 8) + (unsigned char)(type))

/*
 * Relocation types.
 */

#define	R_ALPHA_NONE		0	/* No reloc */
#define	R_ALPHA_REFLONG		1	/* Direct 32 bit */
#define	R_ALPHA_REFQUAD		2	/* Direct 64 bit */
#define	R_ALPHA_GPREL32		3	/* GP relative 32 bit */
#define	R_ALPHA_LITERAL		4	/* GP relative 16 bit w/optimization */
#define	R_ALPHA_LITUSE		5	/* Optimization hint for LITERAL */
#define	R_ALPHA_GPDISP		6	/* Add displacement to GP */
#define	R_ALPHA_BRADDR		7	/* PC+4 relative 23 bit shifted */
#define	R_ALPHA_HINT		8	/* PC+4 relative 16 bit shifted */
#define	R_ALPHA_SREL16		9	/* PC relative 16 bit */
#define	R_ALPHA_SREL32		10	/* PC relative 32 bit */
#define	R_ALPHA_SREL64		11	/* PC relative 64 bit */
#define	R_ALPHA_OP_PUSH		12	/* OP stack push */
#define	R_ALPHA_OP_STORE	13	/* OP stack pop and store */
#define	R_ALPHA_OP_PSUB		14	/* OP stack subtract */
#define	R_ALPHA_OP_PRSHIFT	15	/* OP stack right shift */
#define	R_ALPHA_GPVALUE		16
#define	R_ALPHA_GPRELHIGH	17
#define	R_ALPHA_GPRELLOW	18
#define	R_ALPHA_IMMED_GP_16	19
#define	R_ALPHA_IMMED_GP_HI32	20
#define	R_ALPHA_IMMED_SCN_HI32	21
#define	R_ALPHA_IMMED_BR_HI32	22
#define	R_ALPHA_IMMED_LO32	23
#define	R_ALPHA_COPY		24	/* Copy symbol at runtime */
#define	R_ALPHA_GLOB_DAT	25	/* Create GOT entry */
#define	R_ALPHA_JMP_SLOT	26	/* Create PLT entry */
#define	R_ALPHA_RELATIVE	27	/* Adjust by program base */

#define	R_ALPHA_COUNT		28


#define	R_ARM_NONE		0	/* No relocation. */
#define	R_ARM_PC24		1
#define	R_ARM_ABS32		2
#define	R_ARM_REL32		3
#define	R_ARM_PC13		4
#define	R_ARM_ABS16		5
#define	R_ARM_ABS12		6
#define	R_ARM_THM_ABS5		7
#define	R_ARM_ABS8		8
#define	R_ARM_SBREL32		9
#define	R_ARM_THM_PC22		10
#define	R_ARM_THM_PC8		11
#define	R_ARM_AMP_VCALL9	12
#define	R_ARM_SWI24		13
#define	R_ARM_THM_SWI8		14
#define	R_ARM_XPC25		15
#define	R_ARM_THM_XPC22		16
#define	R_ARM_COPY		20	/* Copy data from shared object. */
#define	R_ARM_GLOB_DAT		21	/* Set GOT entry to data address. */
#define	R_ARM_JUMP_SLOT		22	/* Set GOT entry to code address. */
#define	R_ARM_RELATIVE		23	/* Add load address of shared object. */
#define	R_ARM_GOTOFF		24	/* Add GOT-relative symbol address. */
#define	R_ARM_GOTPC		25	/* Add PC-relative GOT table address. */
#define	R_ARM_GOT32		26	/* Add PC-relative GOT offset. */
#define	R_ARM_PLT32		27	/* Add PC-relative PLT offset. */
#define	R_ARM_CALL		28
#define	R_ARM_JUMP24	29
#define	R_ARM_V4BX		40
#define	R_ARM_GOT_PREL		96
#define	R_ARM_GNU_VTENTRY	100
#define	R_ARM_GNU_VTINHERIT	101
#define	R_ARM_TLS_IE32		107
#define	R_ARM_TLS_LE32		108
#define	R_ARM_RSBREL32		250
#define	R_ARM_THM_RPC22		251
#define	R_ARM_RREL32		252
#define	R_ARM_RABS32		253
#define	R_ARM_RPC24		254
#define	R_ARM_RBASE		255

#define	R_ARM_COUNT		38	/* Count of defined relocation types. */


#define	R_386_NONE	0	/* No relocation. */
#define	R_386_32	1	/* Add symbol value. */
#define	R_386_PC32	2	/* Add PC-relative symbol value. */
#define	R_386_GOT32	3	/* Add PC-relative GOT offset. */
#define	R_386_PLT32	4	/* Add PC-relative PLT offset. */
#define	R_386_COPY	5	/* Copy data from shared object. */
#define	R_386_GLOB_DAT	6	/* Set GOT entry to data address. */
#define	R_386_JMP_SLOT	7	/* Set GOT entry to code address. */
#define	R_386_RELATIVE	8	/* Add load address of shared object. */
#define	R_386_GOTOFF	9	/* Add GOT-relative symbol address. */
#define	R_386_GOTPC	10	/* Add PC-relative GOT table address. */
#define	R_386_TLS_TPOFF	14	/* Negative offset in static TLS block */
#define	R_386_TLS_IE	15	/* Absolute address of GOT for -ve static TLS */
#define	R_386_TLS_GOTIE	16	/* GOT entry for negative static TLS block */
#define	R_386_TLS_LE	17	/* Negative offset relative to static TLS */
#define	R_386_TLS_GD	18	/* 32 bit offset to GOT (index,off) pair */
#define	R_386_TLS_LDM	19	/* 32 bit offset to GOT (index,zero) pair */
#define	R_386_TLS_GD_32	24	/* 32 bit offset to GOT (index,off) pair */
#define	R_386_TLS_GD_PUSH 25	/* pushl instruction for Sun ABI GD sequence */
#define	R_386_TLS_GD_CALL 26	/* call instruction for Sun ABI GD sequence */
#define	R_386_TLS_GD_POP 27	/* popl instruction for Sun ABI GD sequence */
#define	R_386_TLS_LDM_32 28	/* 32 bit offset to GOT (index,zero) pair */
#define	R_386_TLS_LDM_PUSH 29	/* pushl instruction for Sun ABI LD sequence */
#define	R_386_TLS_LDM_CALL 30	/* call instruction for Sun ABI LD sequence */
#define	R_386_TLS_LDM_POP 31	/* popl instruction for Sun ABI LD sequence */
#define	R_386_TLS_LDO_32 32	/* 32 bit offset from start of TLS block */
#define	R_386_TLS_IE_32	33	/* 32 bit offset to GOT static TLS offset entry */
#define	R_386_TLS_LE_32	34	/* 32 bit offset within static TLS block */
#define	R_386_TLS_DTPMOD32 35	/* GOT entry containing TLS index */
#define	R_386_TLS_DTPOFF32 36	/* GOT entry containing TLS offset */
#define	R_386_TLS_TPOFF32 37	/* GOT entry of -ve static TLS offset */

#define	R_386_COUNT	38	/* Count of defined relocation types. */

#define	R_PPC_NONE		0	/* No relocation. */
#define	R_PPC_ADDR32		1
#define	R_PPC_ADDR24		2
#define	R_PPC_ADDR16		3
#define	R_PPC_ADDR16_LO		4
#define	R_PPC_ADDR16_HI		5
#define	R_PPC_ADDR16_HA		6
#define	R_PPC_ADDR14		7
#define	R_PPC_ADDR14_BRTAKEN	8
#define	R_PPC_ADDR14_BRNTAKEN	9
#define	R_PPC_REL24		10
#define	R_PPC_REL14		11
#define	R_PPC_REL14_BRTAKEN	12
#define	R_PPC_REL14_BRNTAKEN	13
#define	R_PPC_GOT16		14
#define	R_PPC_GOT16_LO		15
#define	R_PPC_GOT16_HI		16
#define	R_PPC_GOT16_HA		17
#define	R_PPC_PLTREL24		18
#define	R_PPC_COPY		19
#define	R_PPC_GLOB_DAT		20
#define	R_PPC_JMP_SLOT		21
#define	R_PPC_RELATIVE		22
#define	R_PPC_LOCAL24PC		23
#define	R_PPC_UADDR32		24
#define	R_PPC_UADDR16		25
#define	R_PPC_REL32		26
#define	R_PPC_PLT32		27
#define	R_PPC_PLTREL32		28
#define	R_PPC_PLT16_LO		29
#define	R_PPC_PLT16_HI		30
#define	R_PPC_PLT16_HA		31
#define	R_PPC_SDAREL16		32
#define	R_PPC_SECTOFF		33
#define	R_PPC_SECTOFF_LO	34
#define	R_PPC_SECTOFF_HI	35
#define	R_PPC_SECTOFF_HA	36

#define	R_PPC_COUNT		37	/* Count of defined relocation types. */

#define R_PPC_TLS		67
#define R_PPC_DTPMOD32		68
#define R_PPC_TPREL16		69
#define R_PPC_TPREL16_LO	70
#define R_PPC_TPREL16_HI	71
#define R_PPC_TPREL16_HA	72
#define R_PPC_TPREL32		73
#define R_PPC_DTPREL16		74
#define R_PPC_DTPREL16_LO	75
#define R_PPC_DTPREL16_HI	76
#define R_PPC_DTPREL16_HA	77
#define R_PPC_DTPREL32		78
#define R_PPC_GOT_TLSGD16	79
#define R_PPC_GOT_TLSGD16_LO	80
#define R_PPC_GOT_TLSGD16_HI	81
#define R_PPC_GOT_TLSGD16_HA	82
#define R_PPC_GOT_TLSLD16	83
#define R_PPC_GOT_TLSLD16_LO	84
#define R_PPC_GOT_TLSLD16_HI	85
#define R_PPC_GOT_TLSLD16_HA	86
#define R_PPC_GOT_TPREL16	87
#define R_PPC_GOT_TPREL16_LO	88
#define R_PPC_GOT_TPREL16_HI	89
#define R_PPC_GOT_TPREL16_HA	90

#define	R_PPC_EMB_NADDR32	101
#define	R_PPC_EMB_NADDR16	102
#define	R_PPC_EMB_NADDR16_LO	103
#define	R_PPC_EMB_NADDR16_HI	104
#define	R_PPC_EMB_NADDR16_HA	105
#define	R_PPC_EMB_SDAI16	106
#define	R_PPC_EMB_SDA2I16	107
#define	R_PPC_EMB_SDA2REL	108
#define	R_PPC_EMB_SDA21		109
#define	R_PPC_EMB_MRKREF	110
#define	R_PPC_EMB_RELSEC16	111
#define	R_PPC_EMB_RELST_LO	112
#define	R_PPC_EMB_RELST_HI	113
#define	R_PPC_EMB_RELST_HA	114
#define	R_PPC_EMB_BIT_FLD	115
#define	R_PPC_EMB_RELSDA	116

					/* Count of defined relocation types. */
#define	R_PPC_EMB_COUNT		(R_PPC_EMB_RELSDA - R_PPC_EMB_NADDR32 + 1)


#define R_SPARC_NONE		0
#define R_SPARC_8		1
#define R_SPARC_16		2
#define R_SPARC_32		3
#define R_SPARC_DISP8		4
#define R_SPARC_DISP16		5
#define R_SPARC_DISP32		6
#define R_SPARC_WDISP30		7
#define R_SPARC_WDISP22		8
#define R_SPARC_HI22		9
#define R_SPARC_22		10
#define R_SPARC_13		11
#define R_SPARC_LO10		12
#define R_SPARC_GOT10		13
#define R_SPARC_GOT13		14
#define R_SPARC_GOT22		15
#define R_SPARC_PC10		16
#define R_SPARC_PC22		17
#define R_SPARC_WPLT30		18
#define R_SPARC_COPY		19
#define R_SPARC_GLOB_DAT	20
#define R_SPARC_JMP_SLOT	21
#define R_SPARC_RELATIVE	22
#define R_SPARC_UA32		23
#define R_SPARC_PLT32		24
#define R_SPARC_HIPLT22		25
#define R_SPARC_LOPLT10		26
#define R_SPARC_PCPLT32		27
#define R_SPARC_PCPLT22		28
#define R_SPARC_PCPLT10		29
#define R_SPARC_10		30
#define R_SPARC_11		31
#define R_SPARC_64		32
#define R_SPARC_OLO10		33
#define R_SPARC_HH22		34
#define R_SPARC_HM10		35
#define R_SPARC_LM22		36
#define R_SPARC_PC_HH22		37
#define R_SPARC_PC_HM10		38
#define R_SPARC_PC_LM22		39
#define R_SPARC_WDISP16		40
#define R_SPARC_WDISP19		41
#define R_SPARC_GLOB_JMP	42
#define R_SPARC_7		43
#define R_SPARC_5		44
#define R_SPARC_6		45
#define	R_SPARC_DISP64		46
#define	R_SPARC_PLT64		47
#define	R_SPARC_HIX22		48
#define	R_SPARC_LOX10		49
#define	R_SPARC_H44		50
#define	R_SPARC_M44		51
#define	R_SPARC_L44		52
#define	R_SPARC_REGISTER	53
#define	R_SPARC_UA64		54
#define	R_SPARC_UA16		55


/*
 * Magic number for the elf trampoline, chosen wisely to be an immediate
 * value.
 */
#define ARM_MAGIC_TRAMP_NUMBER	0x5c000003


/*
 * Symbol table entries.
 */

typedef struct {
	Elf32_Word	name;	/* String table index of name. */
	Elf32_Addr	value;	/* Symbol value. */
	Elf32_Word	size;	/* Size of associated object. */
	unsigned char	info;	/* Type and binding information. */
	unsigned char	other;	/* Reserved (not used). */
	Elf32_Half	shndx;	/* Section index of symbol. */
} Elf32_Sym;

/* Macros for accessing the fields of st_info. */
#define ELF32_ST_BIND(info)		((info) >> 4)
#define ELF32_ST_TYPE(info)		((info) & 0xf)

/* Macro for constructing st_info from field values. */
#define ELF32_ST_INFO(bind, type)	(((bind) << 4) + ((type) & 0xf))

/* Macro for accessing the fields of st_other. */
#define ELF32_ST_VISIBILITY(oth)	((oth) & 0x3)

/*
 * ELF definitions common to all 64-bit architectures.
 */

typedef uint64	Elf64_Addr;
typedef uint16	Elf64_Half;
typedef uint64	Elf64_Off;
typedef int32		Elf64_Sword;
typedef int64		Elf64_Sxword;
typedef uint32	Elf64_Word;
typedef uint64	Elf64_Xword;

/*
 * Types of dynamic symbol hash table bucket and chain elements.
 *
 * This is inconsistent among 64 bit architectures, so a machine dependent
 * typedef is required.
 */

#ifdef __alpha__
typedef Elf64_Off	Elf64_Hashelt;
#else
typedef Elf64_Word	Elf64_Hashelt;
#endif

/* Non-standard class-dependent datatype used for abstraction. */
typedef Elf64_Xword	Elf64_Size;
typedef Elf64_Sxword	Elf64_Ssize;

/*
 * ELF header.
 */

typedef struct {
	unsigned char	ident[EI_NIDENT];	/* File identification. */
	Elf64_Half	type;		/* File type. */
	Elf64_Half	machine;	/* Machine architecture. */
	Elf64_Word	version;	/* ELF format version. */
	Elf64_Addr	entry;	/* Entry point. */
	Elf64_Off	phoff;	/* Program header file offset. */
	Elf64_Off	shoff;	/* Section header file offset. */
	Elf64_Word	flags;	/* Architecture-specific flags. */
	Elf64_Half	ehsize;	/* Size of ELF header in bytes. */
	Elf64_Half	phentsize;	/* Size of program header entry. */
	Elf64_Half	phnum;	/* Number of program header entries. */
	Elf64_Half	shentsize;	/* Size of section header entry. */
	Elf64_Half	shnum;	/* Number of section header entries. */
	Elf64_Half	shstrndx;	/* Section name strings section. */
} Elf64_Ehdr;

/*
 * Section header.
 */

typedef struct Elf64_Shdr Elf64_Shdr;
struct Elf64_Shdr {
	Elf64_Word	name;	/* Section name (index into the
					   section header string table). */
	Elf64_Word	type;	/* Section type. */
	Elf64_Xword	flags;	/* Section flags. */
	Elf64_Addr	addr;	/* Address in memory image. */
	Elf64_Off	off;	/* Offset in file. */
	Elf64_Xword	size;	/* Size in bytes. */
	Elf64_Word	link;	/* Index of a related section. */
	Elf64_Word	info;	/* Depends on section type. */
	Elf64_Xword	addralign;	/* Alignment in bytes. */
	Elf64_Xword	entsize;	/* Size of each entry in section. */
	
	int	shnum;  /* section number, not stored on disk */
	Sym*	secsym; /* section symbol, if needed; not on disk */
};

/*
 * Program header.
 */

typedef struct {
	Elf64_Word	type;		/* Entry type. */
	Elf64_Word	flags;	/* Access permission flags. */
	Elf64_Off	off;	/* File offset of contents. */
	Elf64_Addr	vaddr;	/* Virtual address in memory image. */
	Elf64_Addr	paddr;	/* Physical address (not used). */
	Elf64_Xword	filesz;	/* Size of contents in file. */
	Elf64_Xword	memsz;	/* Size of contents in memory. */
	Elf64_Xword	align;	/* Alignment in memory and file. */
} Elf64_Phdr;

/*
 * Dynamic structure.  The ".dynamic" section contains an array of them.
 */

typedef struct {
	Elf64_Sxword	d_tag;		/* Entry type. */
	union {
		Elf64_Xword	d_val;	/* Integer value. */
		Elf64_Addr	d_ptr;	/* Address value. */
	} d_un;
} Elf64_Dyn;

/*
 * Relocation entries.
 */

/* Relocations that don't need an addend field. */
typedef struct {
	Elf64_Addr	off;	/* Location to be relocated. */
	Elf64_Xword	info;		/* Relocation type and symbol index. */
} Elf64_Rel;

/* Relocations that need an addend field. */
typedef struct {
	Elf64_Addr	off;	/* Location to be relocated. */
	Elf64_Xword	info;		/* Relocation type and symbol index. */
	Elf64_Sxword	addend;	/* Addend. */
} Elf64_Rela;

/* Macros for accessing the fields of r_info. */

/* Macro for constructing r_info from field values. */

/*
 * Symbol table entries.
 */

typedef struct {
	Elf64_Word	name;	/* String table index of name. */
	unsigned char	info;	/* Type and binding information. */
	unsigned char	other;	/* Reserved (not used). */
	Elf64_Half	shndx;	/* Section index of symbol. */
	Elf64_Addr	value;	/* Symbol value. */
	Elf64_Xword	size;	/* Size of associated object. */
} Elf64_Sym;

/* Macros for accessing the fields of st_info. */

/* Macro for constructing st_info from field values. */

/* Macro for accessing the fields of st_other. */

/*
 * Go linker interface
 */

#define	ELF64HDRSIZE	64
#define	ELF64PHDRSIZE	56
#define	ELF64SHDRSIZE	64
#define	ELF64RELSIZE	16
#define	ELF64RELASIZE	24
#define	ELF64SYMSIZE	sizeof(Elf64_Sym)

#define	ELF32HDRSIZE	sizeof(Elf32_Ehdr)
#define	ELF32PHDRSIZE	sizeof(Elf32_Phdr)
#define	ELF32SHDRSIZE	sizeof(Elf32_Shdr)
#define	ELF32SYMSIZE	sizeof(Elf32_Sym)
#define	ELF32RELSIZE	8

/*
 * The interface uses the 64-bit structures always,
 * to avoid code duplication.  The writers know how to
 * marshal a 32-bit representation from the 64-bit structure.
 */
typedef Elf64_Ehdr ElfEhdr;
typedef Elf64_Shdr ElfShdr;
typedef Elf64_Phdr ElfPhdr;

void	elfinit(void);
ElfEhdr	*getElfEhdr(void);
ElfShdr	*newElfShdr(vlong);
ElfPhdr	*newElfPhdr(void);
uint32	elfwritehdr(void);
uint32	elfwritephdrs(void);
uint32	elfwriteshdrs(void);
void	elfwritedynent(Sym*, int, uint64);
void	elfwritedynentsym(Sym*, int, Sym*);
void	elfwritedynentsymsize(Sym*, int, Sym*);
uint32	elfhash(uchar*);
uint64	startelf(void);
uint64	endelf(void);
extern	int	numelfphdr;
extern	int	numelfshdr;
extern	int	iself;
extern	int	elfverneed;
int	elfinterp(ElfShdr*, uint64, uint64, char*);
int	elfwriteinterp(void);
int	elfnetbsdsig(ElfShdr*, uint64, uint64);
int	elfwritenetbsdsig(void);
int	elfopenbsdsig(ElfShdr*, uint64, uint64);
int	elfwriteopenbsdsig(void);
void	addbuildinfo(char*);
int	elfbuildinfo(ElfShdr*, uint64, uint64);
int	elfwritebuildinfo(void);
void	elfdynhash(void);
ElfPhdr* elfphload(Segment*);
ElfShdr* elfshbits(Section*);
ElfShdr* elfshalloc(Section*);
ElfShdr* elfshname(char*);
ElfShdr* elfshreloc(Section*);
void	elfsetstring(char*, int);
void	elfaddverneed(Sym*);
void	elfemitreloc(void);
void	shsym(ElfShdr*, Sym*);
void	phsh(ElfPhdr*, ElfShdr*);
void	doelf(void);
void	elfsetupplt(void);
void	dwarfaddshstrings(Sym*);
void	dwarfaddelfsectionsyms(void);
void	dwarfaddelfheaders(void);
void	asmbelf(vlong symo);
void	asmbelfsetup(void);
extern char dragonflydynld[];
extern char linuxdynld[];
extern char freebsddynld[];
extern char netbsddynld[];
extern char openbsddynld[];
int	elfreloc1(Reloc*, vlong sectoff);
void	putelfsectionsyms(void);

EXTERN	int	elfstrsize;
EXTERN	char*	elfstrdat;
EXTERN	int	buildinfolen;

/*
 * Total amount of space to reserve at the start of the file
 * for Header, PHeaders, SHeaders, and interp.
 * May waste some.
 * On FreeBSD, cannot be larger than a page.
 */



