// Copyright 2011 The Go Authors.  All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.


package net

import (
//	"os"
	"syscall"
)

// interfaceMulticastAddrTable returns addresses for a specific
// interface.
func interfaceMulticastAddrTable(ifi *Interface) ([]Addr, error) {
	
	return nil, nil
}

func newMulticastAddr(ifi *Interface, m *syscall.InterfaceMulticastAddrMessage) ([]Addr, error) {
	
	return nil, nil
}
