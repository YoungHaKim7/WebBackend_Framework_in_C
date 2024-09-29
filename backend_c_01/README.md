# `man 2 socket`

```
                                   System Calls Manual                                               SOCKET(2)

NAME
     socket – create an endpoint for communication

SYNOPSIS
     #include <sys/socket.h>

     int
     socket(int domain, int type, int protocol);

DESCRIPTION
     socket() creates an endpoint for communication and returns a descriptor.

     The domain parameter specifies a communications domain within which communication will take place; this selects the protocol
     family which should be used.  These families are defined in the include file ⟨sys/socket.h⟩.  The currently understood formats
     are

           PF_LOCAL        Host-internal protocols, formerly called PF_UNIX,
```

# `man 3 syslog`

```
SYSLOG(3)                                             Library Functions Manual                                            SYSLOG(3)

NAME
     closelog, openlog, setlogmask, syslog, vsyslog – control system log

LIBRARY
     Standard C Library (libc, -lc)

SYNOPSIS
     #include <syslog.h>

     void
     closelog(void);

     void
     openlog(const char *ident, int logopt, int facility);

     int
     setlogmask(int maskpri);

```
