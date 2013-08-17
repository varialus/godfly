// Created by cgo -godefs - DO NOT EDIT
// cgo -godefs types_freebsd.go

package syscall

type Timespec struct {
	Sec  int64
	Nsec int64
}

type Timeval struct {
	Sec  int64
	Usec int64
}
