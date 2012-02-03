// Copyright 2009 The Go Authors. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

/*

Nm is a version of the Plan 9 nm command.  The original is documented at

	http://plan9.bell-labs.com/magic/man2html/1/nm

It prints the name list (symbol table) for programs compiled by gc as well as the
Plan 9 C compiler.

This implementation adds the flag -S, which prints each symbol's size 
in decimal after its address.

It is installed as go tool nm and is architecture-independent.

*/
package documentation
