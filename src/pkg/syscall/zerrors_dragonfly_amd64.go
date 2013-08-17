// mkerrors.sh -m64
// NOT MACHINE GENERATED BY THE COMMAND ABOVE; DO EDIT

// Not Created by cgo -godefs - DO EDIT
// cgo -godefs -- -m64 _const.go

package syscall

// Errors
// http://gitweb.dragonflybsd.org/dragonfly.git/blob_plain/HEAD:/sys/sys/errno.h
const (
	EPERM		= Errno(1)		/* Operation not permitted */
	ENOENT		= Errno(2)		/* No such file or directory */
	ESRCH		= Errno(3)		/* No such process */
	EINTR		= Errno(4)		/* Interrupted system call */
	EIO		= Errno(5)		/* Input/output error */
	ENXIO		= Errno(6)		/* Device not configured */
	E2BIG		= Errno(7)		/* Argument list too long */
	ENOEXEC		= Errno(8)		/* Exec format error */
	EBADF		= Errno(9)		/* Bad file descriptor */
	ECHILD		= Errno(10)		/* No child processes */
	EDEADLK		= Errno(11)		/* Resource deadlock avoided */
						/* 11 was EAGAIN */
	ENOMEM		= Errno(12)		/* Cannot allocate memory */
	EACCES		= Errno(13)		/* Permission denied */
	EFAULT		= Errno(14)		/* Bad address */
	EBUSY		= Errno(16)		/* Device busy */
	EEXIST		= Errno(17)		/* File exists */
	EXDEV		= Errno(18)		/* Cross-device link */
	ENODEV		= Errno(19)		/* Operation not supported by device */
	ENOTDIR		= Errno(20)		/* Not a directory */
	EISDIR		= Errno(21)		/* Is a directory */
	EINVAL		= Errno(22)		/* Invalid argument */
	ENFILE		= Errno(23)		/* Too many open files in system */
	EMFILE		= Errno(24)		/* Too many open files */
	ENOTTY		= Errno(25)		/* Inappropriate ioctl for device */
	EFBIG		= Errno(27)		/* File too large */
	ENOSPC		= Errno(28)		/* No space left on device */
	ESPIPE		= Errno(29)		/* Illegal seek */
	EROFS		= Errno(30)		/* Read-only filesystem */
	EMLINK		= Errno(31)		/* Too many links */
	EPIPE		= Errno(32)		/* Broken pipe */

	/* math software */
	EDOM		= Errno(33)		/* Numerical argument out of domain */
	ERANGE		= Errno(34)		/* Result too large */

	/* non-blocking and interrupt i/o */
	EAGAIN		= Errno(35)		/* Resource temporarily unavailable */
	EWOULDBLOCK	= Errno(EAGAIN)		/* Operation would block */
	EINPROGRESS	= Errno(36)		/* Operation now in progress */
	EALREADY	= Errno(37)		/* Operation already in progress */

	/* ipc/network software -- argument errors */
	ENOTSOCK	= Errno(38)		/* Socket operation on non-socket */
	EDESTADDRREQ	= Errno(39)		/* Destination address required */
	EMSGSIZE	= Errno(40)		/* Message too long */
	EPROTOTYPE	= Errno(41)		/* Protocol wrong type for socket */
	ENOPROTOOPT	= Errno(42)		/* Protocol not available */
	EPROTONOSUPPORT	= Errno(43)		/* Protocol not supported */
	ESOCKTNOSUPPORT	= Errno(44)		/* Socket type not supported */
	EOPNOTSUPP	= Errno(45)		/* Operation not supported */
	ENOTSUP		= Errno(EOPNOTSUPP)	/* Operation not supported */
	EPFNOSUPPORT	= Errno(46)		/* Protocol family not supported */
	EAFNOSUPPORT	= Errno(47)		/* Address family not supported by protocol family */
	EADDRINUSE	= Errno(48)		/* Address already in use */
	EADDRNOTAVAIL	= Errno(49)		/* Can't assign requested address */

	/* ipc/network software -- operational errors */
	ENETDOWN	= Errno(50)		/* Network is down */
	ENETUNREACH	= Errno(51)		/* Network is unreachable */
	ENETRESET	= Errno(52)		/* Network dropped connection on reset */
	ECONNABORTED	= Errno(53)		/* Software caused connection abort */
	ECONNRESET	= Errno(54)		/* Connection reset by peer */
	ENOBUFS		= Errno(55)		/* No buffer space available */
	EISCONN		= Errno(56)		/* Socket is already connected */
	ENOTCONN	= Errno(57)		/* Socket is not connected */
	ESHUTDOWN	= Errno(58)		/* Can't send after socket shutdown */
	ETOOMANYREFS	= Errno(59)		/* Too many references: can't splice */
	ETIMEDOUT	= Errno(60)		/* Operation timed out */
	ECONNREFUSED	= Errno(61)		/* Connection refused */

	ELOOP		= Errno(62)		/* Too many levels of symbolic links */
	ENAMETOOLONG	= Errno(63)		/* File name too long */

	/* should be rearranged */
	ENOTEMPTY	= Errno(66)		/* Directory not empty */

	/* quotas & mush */

	ENOLCK		= Errno(77)		/* No locks available */
	ENOSYS		= Errno(78)		/* Function not implemented */

	EBADMSG		= Errno(89)		/* Bad message */
	EMULTIHOP	= Errno(90)		/* Multihop attempted */
	ENOLINK		= Errno(91)		/* Link has been severed */
	EPROTO		= Errno(92)		/* Protocol error */
)

// Error table
// http://gitweb.dragonflybsd.org/dragonfly.git/blob_plain/HEAD:/sys/sys/errno.h
var errors = [...]string{
	1: "Operation not permitted",
	2: "No such file or directory",
	3: "No such process",
	4: "Interrupted system call",
	5: "Input/output error",
	6: "Device not configured",
	7: "Argument list too long",
	8: "Exec format error",
	9: "Bad file descriptor",
	10: "No child processes",
	11: "Resource deadlock avoided",
	12: "Cannot allocate memory",
	13: "Permission denied",
	14: "Bad address",
	16: "Device busy",
	17: "File exists",
	18: "Cross-device link",
	19: "Operation not supported by device",
	20: "Not a directory",
	21: "Is a directory",
	22: "Invalid argument",
	23: "Too many open files in system",
	24: "Too many open files",
	25: "Inappropriate ioctl for device",
	27: "File too large",
	28: "No space left on device",
	29: "Illegal seek",
	30: "Read-only filesystem",
	31: "Too many links",
	32: "Broken pipe",

	/* math software */
	33: "Numerical argument out of domain",
	34: "Result too large",

	/* non-blocking and interrupt i/o */
	35: "Resource temporarily unavailable",
	63: "File name too long",

	/* should be rearranged */
	66: "Directory not empty",

	/* quotas & mush */

	77: "No locks available",
	78: "Function not implemented",

	89: "Bad message",
	90: "Multihop attempted",
	91: "Link has been severed",
	92: "Protocol error",
}
