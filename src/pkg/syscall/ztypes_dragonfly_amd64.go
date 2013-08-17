// Not Created by cgo -godefs - DO EDIT
// cgo -godefs types_dragonfly.go

package syscall

type Timespec struct {
	Sec  int64
	Nsec int64
}

type Timeval struct {
	Sec  int64
	Usec int64
}

// Copied from ztypes_freebsd_amd64.go
type _Socklen uint32
