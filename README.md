godfly
======

Golang on DragonFly BSD

Recent Error
------------

### Build Error

```
# Building C bootstrap tool.
cmd/dist
# Building compilers and Go bootstrap tool for host, dragonflybsd/amd64
lib9
libbio
...
pkg/go/build
cmd/go
./make.bash: line 141: 19396 Segmentation fault: 11 (core dumped) "$GOTOOLDIR"/go_bootstrap clean -i std
bash-4.2# Aug  11 16:32:21  kernel: pid 19396 (go_bootstrap), uid 0: exited on signal 11 (core dumped)
```

### gdb

```
gdb --args ../pkg/tool/dragonfly_amd64/go_bootstrap clean -i std
...
Reading symbols from /root/go/pkg/tool/dragonfly_amd64/go_bootstrap...done.
(gdb) r
Starting program: /root/go/pkg/tool/dragonflybsd_amd64/go_bootstrap clean -i std

Program received signal SIGSEGV, Segmentation fault.
runtime.settls () at /root/go/src/pkg/runtime/sys_dragonflybsd.s:260
260             MOVL    $0xf1, 0xf1  // crash
(gdb) bt
#0  runtime.settls () at /root/go/src/pkg/runtime/sys_dragonfly_amd64.s:260
#1  0x000000000044b006 in _rt0_go ()
    at /root/go/src/pkg/runtime/asm_amd64.s:58
#2  0x0000000000000000 in ?? ()
(gdb) disass
Dump of assembler code for function runtime.settls:
   0x0000000000465b30 <+0>:     sub    $0x8,%rsp
   0x0000000000464b34 <+4>:     add    $0x10,%rdi
   0x0000000000464b38 <+8>:     mov    %rdi,(%rsp)
   0x0000000000465b3c <+12>:    mov    %rsp,%rsi
   0x0000000000465b3f <+15>:    mov    $0x81,%rdi
   0x0000000000465b46 <+22>:    mov    $0xa5,%eax
   0x0000000000465b4b <+27>:    syscall
   0x0000000000465b4d <+29>:    jae    0x465b5a <runtime.settls+42>
=> 0x0000000000465b4f <+31>:    movl   $0xf1,0xf1
   0x0000000000465b5a <+42>:    add    $0x8,%rsp
   0x0000000000465b5e <+46>:    retq
End of assembler dump
(gdb) p /x $rax
$1 = 0x2d
```

### truss

```
bash-4.2# truss ../pkg/tool/dragonfly_amd64/go_bootstrap clean -i std
open("/proc/curproc/mem",0x1,0400032600400)      = 3 (0x3)
fcntl(0x3,0x2,0x1)                               = 0 (0x0)
ioctl(3,PIOCBIS,0x21)                            = 0 (0x0)
ioctl(3,PIOCSFL,0x1)                             = 0 (0x0)
execve(<missing argument>,<missing argument>,<missing argument>)sysarch(0x81,0x7ffffffff640)
SIGNAL 11
SIGNAL 11
Process stopped because of:  16
process exit, rval = 139
Segmentation fault: 11
bash-4.2# Aug 17 07:37:51  kernel: pid 22655 (go_bootstrap), uid 0: exited on signal 11 (core dumped)
Aug 17 07:37:51  kernel: pid 22654 (truss), uid 0: exited on signal 11
```

### Notes

* My plea for help. https://groups.google.com/forum/#!topic/golang-dev/bwF5jTJmybM
* Very related discussion. http://comments.gmane.org/gmane.comp.lang.go.devel/30746
* Started assembly language documentation in src/pkg/runtime/sys_dragonflybsd_amd64.s
* Conversation between Snert and dho at http://go-lang.cat-v.org/irc-logs/go-nuts/2009-11-19
* http://www.dragonflybsd.org/docs/user/GlossaryOfTerms/
* http://www.dragonflybsd.org/features/
* set_tls_area() at http://gitweb.dragonflybsd.org/dragonfly.git/blob_plain/HEAD:/sys/kern/syscalls.master
* tls_set_tcb(), tls_set_gs and tls_set_fs at http://gitweb.dragonflybsd.org/dragonfly.git/blob/HEAD:/sys/cpu/x86_64/include/tls.h
* set_tls_area() at http://gitweb.dragonflybsd.org/dragonfly.git/blob/HEAD:/sys/sys/tls.h
* sys_set_tls_area() at http://gitweb.dragonflybsd.org/dragonfly.git/blob/HEAD:/sys/platform/pc64/x86_64/tls.c
* http://www.dragonflybsd.org/docs/developer/Locking_and_Synchronization/

Go Linux Emulation on 32-bit DragonFly BSD
------------------------------------------

1. Instal 32-bit DragonFly BSD
2. Log in as root
3. kldload linux
4. pkg_radd suse_base
5. ln -s /usr/pkg/emul /compat
6. curl http://go.googlecode.com/files/go1.1.1.linux-386.tar.gz -O
7. mkdir /compat/linux/usr/local
8. tar -C /compat/linux/usr/local -xzf go1.1.1.linux-386.tar.gz
9. brandelf -t Linux /compat/linux/usr/local/go/bin/go
10. /compat/linux/usr/local/go/bin/go env

Roadmap
-------

1. Install FreeBSD and DragonFly BSD. I'm using VirtualBox for snapshots.
2. Build Go on FreeBSD and DragonFly BSD at the same time.
3. Compare differences and fix problems in DragonFly BSD.

Setup
-----

1. Install the latest version of FreeBSD and DragonFly BSD.
2. On FreeBSD use pkg_add -r package_name to install bash, gmake, bison and git.
3. On DragonFly BSD use pkg_radd package_name to install bash, gmake and bison.
4. bash
5. mkdir ~/go
6. mkdir ~/bin
7. cd go
8. git clone http://github.com/varialus/godfly.git .
9. cd src
10. ./all.bash
11. Fix errors and push fixes to github.com.
12. cd ..
13. git clean -f
14. rm -r ~/bin
15. mkdir ~/bin
16. git pull
17. Repeat steps 9 through 16.

Notes
-----

* http://golang.org/doc/install/source
* Used FreeBSD specific code as a template.

Auto-Generated Files Needing Git Commit
---------------------------------------

* src/pkg/runtime/defs_dragonflybsd_386.h
* src/pkg/runtime/defs_dragonflybsd_amd64.h
* src/pkg/syscall/zerrors_dragonflybsd_386.go
* src/pkg/syscall/zerrors_dragonflybsd_amd64.go
* src/pkg/syscall/zsyscall_dragonflybsd_386.go
* src/pkg/syscall/zsyscall_dragonflybsd_amd64.go
* src/pkg/syscall/zsysnum_dragonflybsd_386.go
* src/pkg/syscall/zsysnum_dragonflybsd_amd64.go
* src/pkg/syscall/ztypes_dragonflybsd_386.go
* src/pkg/syscall/ztypes_dragonflybsd_amd64.go
* All Other Auto-Generated Files

Files Needing Manual Review
---------------------------

* src/libmach/dragonflybsd.c
* src/pkg/os/stat_dragonflybsd.go
* src/pkg/runtime/defs_dragonflybsd.go
* src/pkg/runtime/os_dragonflybsd.h
* src/pkg/runtime/os_dragonflybsd.c
* src/pkg/runtime/mem_dragonflybsd.c
* src/pkg/runtime/rt0_dragonflybsd_386.s
* src/pkg/runtime/rt0_dragonflybsd_amd64.s
* src/pkg/runtime/signal_dragonflybsd_386.h
* src/pkg/runtime/signal_dragonflybsd_amd64.h
* src/pkg/runtime/signals_dragonflybsd.h
* src/pkg/runtime/sys_dragonflybsd_386.s
* src/pkg/runtime/sys_dragonflybsd_amd64.s
* src/pkg/syscall/syscall_dragonflybsd.go
* src/pkg/syscall/syscall_dragonflybsd_386.go
* src/pkg/syscall/syscall_dragonflybsd_amd64.go
* Any Other Copied Manually-Written-Code
