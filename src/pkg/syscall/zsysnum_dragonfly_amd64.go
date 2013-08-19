// mksysnum_dragonfly.pl
// NOT MACHINE GENERATED BY THE ABOVE COMMAND; DO EDIT

package syscall

const (

/*
 * SYSTEM CALL NUMBERS.
 *
 * DO NOT EDIT-- TO REGENERATE THIS FILE, EDIT SYSCALLS.MASTER FOLLOWED
 *               BY RUNNING MAKE SYSENT IN THE SAME DIRECTORY.
 */

	SYS_SYSCALL	=  0
	SYS_EXIT	=  1
	SYS_FORK	=  2
	SYS_READ	=  3
	SYS_WRITE	=  4
	SYS_OPEN	=  5
	SYS_CLOSE	=  6
	SYS_WAIT4	=  7
				/* 8 IS OLD CREAT */

	SYS_LINK	=  9
	SYS_UNLINK	=  10
				/* 11 IS OBSOLETE EXECV */

	SYS_CHDIR	= 12
	SYS_FCHDIR	= 13
	SYS_MKNOD	= 14
	SYS_CHMOD	= 15
	SYS_CHOWN	= 16
	SYS_BREAK	= 17
	SYS_GETFSSTAT	= 18
				/* 19 IS OLD LSEEK */

	SYS_GETPID	= 20
	SYS_MOUNT	= 21
	SYS_UNMOUNT	= 22
	SYS_SETUID	= 23
	SYS_GETUID	= 24
	SYS_GETEUID	= 25
	SYS_PTRACE	= 26
	SYS_RECVMSG	= 27
	SYS_SENDMSG	= 28
	SYS_RECVFROM	= 29
	SYS_ACCEPT	= 30
	SYS_GETPEERNAME	= 31
	SYS_GETSOCKNAME	= 32
	SYS_ACCESS	= 33
	SYS_CHFLAGS	= 34
	SYS_FCHFLAGS	= 35
	SYS_SYNC	= 36
	SYS_KILL	= 37
				/* 38 IS OLD STAT */

	SYS_GETPPID	= 39
				/* 40 IS OLD LSTAT */

	SYS_DUP	= 41
	SYS_PIPE	= 42
	SYS_GETEGID	= 43
	SYS_PROFIL	= 44
	SYS_KTRACE	= 45
				/* 46 IS OBSOLETE FREEBSD3_SIGACTION */

	SYS_GETGID	= 47
				/* 48 IS OBSOLETE FREEBSD3_SIGPROCMASK */

	SYS_GETLOGIN	= 49
	SYS_SETLOGIN	= 50
	SYS_ACCT	= 51
				/* 52 IS OBSOLETE FREEBSD3_SIGPENDING */

	SYS_SIGALTSTACK	= 53
	SYS_IOCTL	= 54
	SYS_REBOOT	= 55
	SYS_REVOKE	= 56
	SYS_SYMLINK	= 57
	SYS_READLINK	= 58
	SYS_EXECVE	= 59
	SYS_UMASK	= 60
	SYS_CHROOT	= 61
				/* 62 IS OLD FSTAT */
				/* 63 IS OLD GETKERNINFO */
				/* 64 IS OLD GETPAGESIZE */

	SYS_MSYNC	= 65
	SYS_VFORK	= 66
				/* 67 IS OBSOLETE VREAD */
				/* 68 IS OBSOLETE VWRITE */

	SYS_SBRK	= 69
	SYS_SSTK	= 70
				/* 71 IS OLD MMAP */
				/* 72 IS OLD VADVISE */

	SYS_MUNMAP	= 73
	SYS_MPROTECT	= 74
	SYS_MADVISE	= 75
				/* 76 IS OBSOLETE VHANGUP */
				/* 77 IS OBSOLETE VLIMIT */
	SYS_MINCORE	= 78
	SYS_GETGROUPS	= 79
	SYS_SETGROUPS	= 80
	SYS_GETPGRP	= 81
	SYS_SETPGID	= 82
	SYS_SETITIMER	= 83
				/* 84 IS OLD WAIT */
	SYS_SWAPON	= 85
	SYS_GETITIMER	= 86
				/* 87 IS OLD GETHOSTNAME */
				/* 88 IS OLD SETHOSTNAME */
	SYS_GETDTABLESIZE	= 89
	SYS_DUP2	= 90
	SYS_FCNTL	= 92
	SYS_SELECT	= 93
	SYS_FSYNC	= 95
	SYS_SETPRIORITY	= 96
	SYS_SOCKET	= 97
	SYS_CONNECT	= 98
				/* 99 IS OLD ACCEPT */
	SYS_GETPRIORITY	= 100
				/* 101 IS OLD SEND */
				/* 102 IS OLD RECV */
				/* 103 IS OBSOLETE FREEBSD3_SIGRETURN */
	SYS_BIND	= 104
	SYS_SETSOCKOPT	= 105
	SYS_LISTEN	= 106
				/* 107 IS OBSOLETE VTIMES */
				/* 108 IS OLD SIGVEC */
				/* 109 IS OLD SIGBLOCK */
				/* 110 IS OLD SIGSETMASK */
				/* 111 IS OBSOLETE FREEBSD3_SIGSUSPEND */
				/* 112 IS OLD SIGSTACK */
				/* 113 IS OLD RECVMSG */
				/* 114 IS OLD SENDMSG */
				/* 115 IS OBSOLETE VTRACE */
	SYS_GETTIMEOFDAY	= 116
	SYS_GETRUSAGE	= 117
	SYS_GETSOCKOPT	= 118
	SYS_READV	= 120
	SYS_WRITEV	= 121
	SYS_SETTIMEOFDAY	= 122
	SYS_FCHOWN	= 123
	SYS_FCHMOD	= 124
				/* 125 IS OLD RECVFROM */
	SYS_SETREUID	= 126
	SYS_SETREGID	= 127
	SYS_RENAME	= 128
				/* 129 IS OLD TRUNCATE */
				/* 130 IS OLD FTRUNCATE */
	SYS_FLOCK	= 131
	SYS_MKFIFO	= 132
	SYS_SENDTO	= 133
	SYS_SHUTDOWN	= 134
	SYS_SOCKETPAIR	= 135
	SYS_MKDIR	= 136
	SYS_RMDIR	= 137
	SYS_UTIMES	= 138
				/* 139 IS OBSOLETE 4.2 SIGRETURN */
	SYS_ADJTIME	= 140
				/* 141 IS OLD GETPEERNAME */
				/* 142 IS OLD GETHOSTID */
				/* 143 IS OLD SETHOSTID */
				/* 144 IS OLD GETRLIMIT */
				/* 145 IS OLD SETRLIMIT */
				/* 146 IS OLD KILLPG */
	SYS_SETSID	= 147
	SYS_QUOTACTL	= 148
				/* 149 IS OLD QUOTA */
				/* 150 IS OLD GETSOCKNAME */
	SYS_NFSSVC	= 155
				/* 156 IS OLD GETDIRENTRIES */
	SYS_STATFS	= 157
	SYS_FSTATFS	= 158
	SYS_GETFH	= 161
	SYS_GETDOMAINNAME	= 162
	SYS_SETDOMAINNAME	= 163
	SYS_UNAME	= 164
	SYS_SYSARCH	= 165
	SYS_RTPRIO	= 166
	SYS_SEMSYS	= 169
	SYS_MSGSYS	= 170
	SYS_SHMSYS	= 171
	// http://comments.gmane.org/gmane.os.dragonfly-bsd.kernel/9280
	SYS_PREAD	= 173
	SYS_PWRITE	= 174
	SYS_NTP_ADJTIME	= 176
	SYS_SETGID	= 181
	SYS_SETEGID	= 182
	SYS_SETEUID	= 183
				/* 188 IS OLD STAT */
				/* 189 IS OLD FSTAT */
				/* 190 IS OLD LSTAT */
	SYS_PATHCONF	= 191
	SYS_FPATHCONF	= 192
	SYS_GETRLIMIT	= 194
	SYS_SETRLIMIT	= 195
				/* 196 IS OLD GETDIRENTRIES */
	SYS_MMAP	= 197
	SYS___SYSCALL	= 198
	SYS_LSEEK	= 199
	SYS_TRUNCATE	= 200
	SYS_FTRUNCATE	= 201
	SYS___SYSCTL	= 202
	SYS_MLOCK	= 203
	SYS_MUNLOCK	= 204
	SYS_UNDELETE	= 205
	SYS_FUTIMES	= 206
	SYS_GETPGID	= 207
	SYS_POLL	= 209
	SYS___SEMCTL	= 220
	SYS_SEMGET	= 221
	SYS_SEMOP	= 222
	SYS_MSGCTL	= 224
	SYS_MSGGET	= 225
	SYS_MSGSND	= 226
	SYS_MSGRCV	= 227
	SYS_SHMAT	= 228
	SYS_SHMCTL	= 229
	SYS_SHMDT	= 230
	SYS_SHMGET	= 231
	SYS_CLOCK_GETTIME	= 232
	SYS_CLOCK_SETTIME	= 233
	SYS_CLOCK_GETRES	= 234
	SYS_NANOSLEEP	= 240
	SYS_MINHERIT	= 250
	SYS_RFORK	= 251
	SYS_OPENBSD_POLL	= 252
	SYS_ISSETUGID	= 253
	SYS_LCHOWN	= 254
				/* 272 IS OLD GETDENTS */
	SYS_LCHMOD	= 274
	SYS_NETBSD_LCHOWN	= 275
	SYS_LUTIMES	= 276
	SYS_NETBSD_MSYNC	= 277
				/* 278 IS OBSOLETE { */
				/* 279 IS OBSOLETE { */
				/* 280 IS OBSOLETE { */
	// http://comments.gmane.org/gmane.os.dragonfly-bsd.kernel/9280
	SYS_PREADV	= 289
	SYS_PWRITEV	= 290
	SYS_FHSTATFS	= 297
	SYS_FHOPEN	= 298
				/* 299 IS OLD FHSTAT */
	SYS_MODNEXT	= 300
	SYS_MODSTAT	= 301
	SYS_MODFNEXT	= 302
	SYS_MODFIND	= 303
	SYS_KLDLOAD	= 304
	SYS_KLDUNLOAD	= 305
	SYS_KLDFIND	= 306
	SYS_KLDNEXT	= 307
	SYS_KLDSTAT	= 308
	SYS_KLDFIRSTMOD	= 309
	SYS_GETSID	= 310
	SYS_SETRESUID	= 311
	SYS_SETRESGID	= 312
				/* 313 IS OBSOLETE SIGNANOSLEEP */
	SYS_AIO_RETURN	= 314
	SYS_AIO_SUSPEND	= 315
	SYS_AIO_CANCEL	= 316
	SYS_AIO_ERROR	= 317
	SYS_AIO_READ	= 318
	SYS_AIO_WRITE	= 319
	SYS_LIO_LISTIO	= 320
	SYS_YIELD	= 321
	SYS_MLOCKALL	= 324
	SYS_MUNLOCKALL	= 325
	SYS___GETCWD	= 326
	SYS_SCHED_SETPARAM	= 327
	SYS_SCHED_GETPARAM	= 328
	SYS_SCHED_SETSCHEDULER	= 329
	SYS_SCHED_GETSCHEDULER	= 330
	SYS_SCHED_YIELD	= 331
	SYS_SCHED_GET_PRIORITY_MAX	= 332
	SYS_SCHED_GET_PRIORITY_MIN	= 333
	SYS_SCHED_RR_GET_INTERVAL	= 334
	SYS_UTRACE	= 335
				/* 336 IS OBSOLETE FREEBSD4_SENDFILE */
	SYS_KLDSYM	= 337
	SYS_JAIL	= 338
	SYS_SIGPROCMASK	= 340
	SYS_SIGSUSPEND	= 341
	SYS_SIGACTION	= 342
	SYS_SIGPENDING	= 343
	SYS_SIGRETURN	= 344
	SYS_SIGTIMEDWAIT	= 345
	SYS_SIGWAITINFO	= 346
	SYS___ACL_GET_FILE	= 347
	SYS___ACL_SET_FILE	= 348
	SYS___ACL_GET_FD	= 349
	SYS___ACL_SET_FD	= 350
	SYS___ACL_DELETE_FILE	= 351
	SYS___ACL_DELETE_FD	= 352
	SYS___ACL_ACLCHECK_FILE	= 353
	SYS___ACL_ACLCHECK_FD	= 354
	SYS_EXTATTRCTL	= 355
	SYS_EXTATTR_SET_FILE	= 356
	SYS_EXTATTR_GET_FILE	= 357
	SYS_EXTATTR_DELETE_FILE	= 358
	SYS_AIO_WAITCOMPLETE	= 359
	SYS_GETRESUID	= 360
	SYS_GETRESGID	= 361
	SYS_KQUEUE	= 362
	SYS_KEVENT	= 363
	SYS_SCTP_PEELOFF	= 364
	SYS_LCHFLAGS	= 391
	SYS_UUIDGEN	= 392
	SYS_SENDFILE	= 393
	SYS_VARSYM_SET	= 450
	SYS_VARSYM_GET	= 451
	SYS_VARSYM_LIST	= 452
				/* 453 IS OBSOLETE UPC_REGISTER */
				/* 454 IS OBSOLETE UPC_CONTROL */
				/* 455 IS OBSOLETE CAPS_SYS_SERVICE */
				/* 456 IS OBSOLETE CAPS_SYS_CLIENT */
				/* 457 IS OBSOLETE CAPS_SYS_CLOSE */
				/* 458 IS OBSOLETE CAPS_SYS_PUT */
				/* 459 IS OBSOLETE CAPS_SYS_REPLY */
				/* 460 IS OBSOLETE CAPS_SYS_GET */
				/* 461 IS OBSOLETE CAPS_SYS_WAIT */
				/* 462 IS OBSOLETE CAPS_SYS_ABORT */
				/* 463 IS OBSOLETE CAPS_SYS_GETGEN */
				/* 464 IS OBSOLETE CAPS_SYS_SETGEN */
	SYS_EXEC_SYS_REGISTER	= 465
	SYS_EXEC_SYS_UNREGISTER	= 466
	SYS_SYS_CHECKPOINT	= 467
	SYS_MOUNTCTL	= 468
	SYS_UMTX_SLEEP	= 469
	SYS_UMTX_WAKEUP	= 470
	SYS_JAIL_ATTACH	= 471
	SYS_SET_TLS_AREA	= 472
	SYS_GET_TLS_AREA	= 473
	SYS_CLOSEFROM	= 474
	SYS_STAT	= 475
	SYS_FSTAT	= 476
	SYS_LSTAT	= 477
	SYS_FHSTAT	= 478
	SYS_GETDIRENTRIES	= 479
	SYS_GETDENTS	= 480
	SYS_USCHED_SET	= 481
	// http://comments.gmane.org/gmane.os.dragonfly-bsd.kernel/9280
	SYS_EXTACCEPT	= 482 // was going to remove the ext, but SYS_ACCEPT is already defined above
	SYS_EXTCONNECT	= 483
				/* 484 IS OBSOLETE SYSLINK */
	SYS_MCONTROL	= 485
	SYS_VMSPACE_CREATE	= 486
	SYS_VMSPACE_DESTROY	= 487
	SYS_VMSPACE_CTL	= 488
	SYS_VMSPACE_MMAP	= 489
	SYS_VMSPACE_MUNMAP	= 490
	SYS_VMSPACE_MCONTROL	= 491
	SYS_VMSPACE_PREAD	= 492
	SYS_VMSPACE_PWRITE	= 493
	SYS_EXTEXIT	= 494
	SYS_LWP_CREATE	= 495
	SYS_LWP_GETTID	= 496
	SYS_LWP_KILL	= 497
	SYS_LWP_RTPRIO	= 498
	SYS_PSELECT	= 499
	SYS_STATVFS	= 500
	SYS_FSTATVFS	= 501
	SYS_FHSTATVFS	= 502
	SYS_GETVFSSTAT	= 503
	SYS_OPENAT	= 504
	SYS_FSTATAT	= 505
	SYS_FCHMODAT	= 506
	SYS_FCHOWNAT	= 507
	SYS_UNLINKAT	= 508
	SYS_FACCESSAT	= 509
	SYS_MQ_OPEN	= 510
	SYS_MQ_CLOSE	= 511
	SYS_MQ_UNLINK	= 512
	SYS_MQ_GETATTR	= 513
	SYS_MQ_SETATTR	= 514
	SYS_MQ_NOTIFY	= 515
	SYS_MQ_SEND	= 516
	SYS_MQ_RECEIVE	= 517
	SYS_MQ_TIMEDSEND	= 518
	SYS_MQ_TIMEDRECEIVE	= 519
	SYS_IOPRIO_SET	= 520
	SYS_IOPRIO_GET	= 521
	SYS_CHROOT_KERNEL	= 522
	SYS_RENAMEAT	= 523
	SYS_MKDIRAT	= 524
	SYS_MKFIFOAT	= 525
	SYS_MKNODAT	= 526
	SYS_READLINKAT	= 527
	SYS_SYMLINKAT	= 528
	SYS_SWAPOFF	= 529
	SYS_VQUOTACTL	= 530
	SYS_LINKAT	= 531
	SYS_EACCESS	= 532
	SYS_LPATHCONF	= 533
	SYS_MAXSYSCALL	= 534
)