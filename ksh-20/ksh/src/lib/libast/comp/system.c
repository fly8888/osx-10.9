/***********************************************************************
*                                                                      *
*               This software is part of the ast package               *
*          Copyright (c) 1985-2011 AT&T Intellectual Property          *
*                      and is licensed under the                       *
*                  Common Public License, Version 1.0                  *
*                    by AT&T Intellectual Property                     *
*                                                                      *
*                A copy of the License is available at                 *
*            http://www.opensource.org/licenses/cpl1.0.txt             *
*         (with md5 checksum 059e8cd6165cb4c31e351f2b69388fd9)         *
*                                                                      *
*              Information and Software Systems Research               *
*                            AT&T Research                             *
*                           Florham Park NJ                            *
*                                                                      *
*                 Glenn Fowler <gsf@research.att.com>                  *
*                  David Korn <dgk@research.att.com>                   *
*                   Phong Vo <kpv@research.att.com>                    *
*                                                                      *
***********************************************************************/
#pragma prototyped
/*
 * ast library system(3)
 */

#define system		______system

#define _STDLIB_H_	1	/* uwin workaround */

#include <ast.h>
#include <proc.h>

#undef	system

#undef	_def_map_ast
#include <ast_map.h>

#if defined(__EXPORT__)
#define extern	__EXPORT__
#endif

extern int
system(const char* cmd)
{
	char*	sh[4];

	if (!cmd)
		return !eaccess(pathshell(), X_OK);
	sh[0] = "sh";
	sh[1] = "-c";
	sh[2] = (char*)cmd;
	sh[3] = 0;
	return procrun(NiL, sh, 0);
}