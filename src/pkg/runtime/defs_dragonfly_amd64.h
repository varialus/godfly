// Created by cgo -cdefs - DO NOT EDIT
// cgo -cdefs=true defs_dragonfly.go


enum {
	PROT_NONE	= 0x0,
	PROT_READ	= 0x1,
	PROT_WRITE	= 0x2,
	PROT_EXEC	= 0x4,

	MAP_ANON	= 0x1000,
	MAP_PRIVATE	= 0x2,
	MAP_FIXED	= 0x10,

	MADV_FREE	= 0x5,

	SA_SIGINFO	= 0x40,
	SA_RESTART	= 0x2,
	SA_ONSTACK	= 0x1,

	EINTR	= 0x4,

	SIGHUP		= 0x1,
	SIGINT		= 0x2,
	SIGQUIT		= 0x3,
	SIGILL		= 0x4,
	SIGTRAP		= 0x5,
	SIGABRT		= 0x6,
	SIGEMT		= 0x7,
	SIGFPE		= 0x8,
	SIGKILL		= 0x9,
	SIGBUS		= 0xa,
	SIGSEGV		= 0xb,
	SIGSYS		= 0xc,
	SIGPIPE		= 0xd,
	SIGALRM		= 0xe,
	SIGTERM		= 0xf,
	SIGURG		= 0x10,
	SIGSTOP		= 0x11,
	SIGTSTP		= 0x12,
	SIGCONT		= 0x13,
	SIGCHLD		= 0x14,
	SIGTTIN		= 0x15,
	SIGTTOU		= 0x16,
	SIGIO		= 0x17,
	SIGXCPU		= 0x18,
	SIGXFSZ		= 0x19,
	SIGVTALRM	= 0x1a,
	SIGPROF		= 0x1b,
	SIGWINCH	= 0x1c,
	SIGINFO		= 0x1d,
	SIGUSR1		= 0x1e,
	SIGUSR2		= 0x1f,

	FPE_INTDIV	= 0x2,
	FPE_INTOVF	= 0x1,
	FPE_FLTDIV	= 0x3,
	FPE_FLTOVF	= 0x4,
	FPE_FLTUND	= 0x5,
	FPE_FLTRES	= 0x6,
	FPE_FLTINV	= 0x7,
	FPE_FLTSUB	= 0x8,

	BUS_ADRALN	= 0x1,
	BUS_ADRERR	= 0x2,
	BUS_OBJERR	= 0x3,

	SEGV_MAPERR	= 0x1,
	SEGV_ACCERR	= 0x2,

	ITIMER_REAL	= 0x0,
	ITIMER_VIRTUAL	= 0x1,
	ITIMER_PROF	= 0x2,
// http://gitweb.dragonflybsd.org/dragonfly.git/blob_plain/HEAD:/sys/sys/event.h
	EVFILT_READ	= (-1),
	EVFILT_WRITE	= (-2),
	EVFILT_AIO	= (-3),	/* attached to aio requests */
	EVFILT_VNODE	= (-4),	/* attached to vnodes */
	EVFILT_PROC	= (-5),	/* attached to struct proc */
	EVFILT_SIGNAL	= (-6),	/* attached to struct proc */
	EVFILT_TIMER	= (-7),	/* timers */
	EVFILT_EXCEPT	= (-8),	/* exceptional conditions */
///* actions */
	EV_ADD		= 0x0001,		/* add event to kq (implies enable) */
	EV_DELETE	= 0x0002,		/* delete event from kq */
	EV_ENABLE	= 0x0004,		/* enable event */
	EV_DISABLE	= 0x0008,		/* disable event (not reported) */
//
///* flags */
	EV_ONESHOT	= 0x0010,		/* only report one occurrence */
	EV_CLEAR	= 0x0020,		/* clear event state after reporting */
//
	EV_SYSFLAGS	= 0xF000,		/* reserved by system */
	EV_FLAG1	= 0x2000,		/* filter-specific flag */
//
///* returned values */
	EV_EOF		= 0x8000,		/* EOF detected */
	EV_ERROR	= 0x4000,		/* error, data contains errno */
	EV_NODATA	= 0x1000,		/* EOF and no more data */
};

typedef struct Rtprio Rtprio;
typedef struct ThrParam ThrParam;
typedef struct Sigaltstack Sigaltstack;
typedef struct Sigset Sigset;
typedef struct StackT StackT;
typedef struct Siginfo Siginfo;
typedef struct Mcontext Mcontext;
typedef struct Ucontext Ucontext;
typedef struct Timespec Timespec;
typedef struct Timeval Timeval;
typedef struct Itimerval Itimerval;
// Copied from defs_freebsd_amd64.h
typedef struct Kevent Kevent;


#pragma pack on

struct Rtprio {
	uint16	type;
	uint16	prio;
};
struct ThrParam {
	void	*func;
	byte	*arg;
	byte	*stack;
	int32	*tid1;
	int32	*tid2;
};
struct Sigaltstack {
	int8	*ss_sp;
	uint64	ss_size;
	int32	ss_flags;
	byte	Pad_cgo_0[4];
};
struct Sigset {
	uint32	__bits[4];
};
struct StackT {
	int8	*ss_sp;
	uint64	ss_size;
	int32	ss_flags;
	byte	Pad_cgo_0[4];
};

struct Siginfo {
	int32	si_signo;
	int32	si_errno;
	int32	si_code;
	int32	si_pid;
	uint32	si_uid;
	int32	si_status;
	byte	*si_addr;
	byte	si_value[8];
	int64	si_band;
	int32	__spare__[7];
	byte	Pad_cgo_0[4];
};

struct Mcontext {
	int64	mc_onstack;
	int64	mc_rdi;
	int64	mc_rsi;
	int64	mc_rdx;
	int64	mc_rcx;
	int64	mc_r8;
	int64	mc_r9;
	int64	mc_rax;
	int64	mc_rbx;
	int64	mc_rbp;
	int64	mc_r10;
	int64	mc_r11;
	int64	mc_r12;
	int64	mc_r13;
	int64	mc_r14;
	int64	mc_r15;
	int64	mc_xflags;
	int64	mc_trapno;
	int64	mc_addr;
	int64	mc_flags;
	int64	mc_err;
	int64	mc_rip;
	int64	mc_cs;
	int64	mc_rflags;
	int64	mc_rsp;
	int64	mc_ss;
	uint32	mc_len;
	uint32	mc_fpformat;
	uint32	mc_ownedfp;
	uint32	mc_reserved;
	uint32	mc_unused[8];
	int32	mc_fpregs[256];
};
struct Ucontext {
	Sigset	uc_sigmask;
	byte	Pad_cgo_0[48];
	Mcontext	uc_mcontext;
	Ucontext	*uc_link;
	StackT	uc_stack;
	int32	__spare__[8];
};

struct Timespec {
	int64	tv_sec;
	int64	tv_nsec;
};
struct Timeval {
	int64	tv_sec;
	int64	tv_usec;
};
struct Itimerval {
	Timeval	it_interval;
	Timeval	it_value;
};

// Copied from defs_freebsd_amd64.h
struct Kevent {
	uint64	ident;
	int16	filter;
	uint16	flags;
	uint32	fflags;
	int64	data;
	byte	*udata;
};



#pragma pack off