// Copyright 2012 The Go Authors.  All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

#include <stdio.h>
#include "a.h"

/*
 * Helpers for building cmd/go and cmd/cgo.
 */

// mkzdefaultcc writes zdefaultcc.go:
//
//	package main
//	const defaultCC = <defaultcc>
//
// It is invoked to write cmd/go/zdefaultcc.go
// but we also write cmd/cgo/zdefaultcc.go.
void
mkzdefaultcc(char *dir, char *file)
{
	// TODO: Remove print line
	printf("buildgo.c mkzdefaultcc()\n");
	Buf b, out;
	
	USED(dir);

	binit(&out);
	bprintf(&out,
		"// auto generated by go tool dist\n"
		"\n"
		"package main\n"
		"\n"
		"const defaultCC = `%s`\n",
		defaultcc);

	writefile(&out, file, 0);

	// Convert file name to replace.
	binit(&b);	
	bwritestr(&b, file);
	if(slash[0] == '/')
		bsubst(&b, "/go/zdefaultcc.go", "/cgo/zdefaultcc.go");
	else
		bsubst(&b, "\\go\\zdefaultcc.go", "\\cgo\\zdefaultcc.go");
	writefile(&out, bstr(&b), 0);

	bfree(&b);
	bfree(&out);
	// TODO: Remove print line
	printf("finishing buildgo.c mkzdefaultcc()\n");
}
