/*
** fcntl.c
**
** See Copyright Notice in mruby.h
*/

#include "mruby.h"
#include <fcntl.h>

void
mrb_mruby_fcntl_gem_init(mrb_state* mrb)
{
  struct RClass *fcntl;
  fcntl = mrb_define_module(mrb, "Fcntl");

#ifdef F_DUPFD
  mrb_define_const(mrb, fcntl, "F_DUPFD", mrb_fixnum_value(F_DUPFD));
#endif
#ifdef F_GETFD
  mrb_define_const(mrb, fcntl, "F_GETFD", mrb_fixnum_value(F_GETFD));
#endif
#ifdef F_GETLK
  mrb_define_const(mrb, fcntl, "F_GETLK", mrb_fixnum_value(F_GETLK));
#endif
#ifdef F_SETFD
  mrb_define_const(mrb, fcntl, "F_SETFD", mrb_fixnum_value(F_SETFD));
#endif
#ifdef F_GETFL
  mrb_define_const(mrb, fcntl, "F_GETFL", mrb_fixnum_value(F_GETFL));
#endif
#ifdef F_SETFL
  mrb_define_const(mrb, fcntl, "F_SETFL", mrb_fixnum_value(F_SETFL));
#endif
#ifdef F_SETLK
  mrb_define_const(mrb, fcntl, "F_SETLK", mrb_fixnum_value(F_SETLK));
#endif
#ifdef F_SETLKW
  mrb_define_const(mrb, fcntl, "F_SETLKW", mrb_fixnum_value(F_SETLKW));
#endif
#ifdef FD_CLOEXEC
  mrb_define_const(mrb, fcntl, "FD_CLOEXEC", mrb_fixnum_value(FD_CLOEXEC));
#endif
#ifdef F_RDLCK
  mrb_define_const(mrb, fcntl, "F_RDLCK", mrb_fixnum_value(F_RDLCK));
#endif
#ifdef F_UNLCK
  mrb_define_const(mrb, fcntl, "F_UNLCK", mrb_fixnum_value(F_UNLCK));
#endif
#ifdef F_WRLCK
  mrb_define_const(mrb, fcntl, "F_WRLCK", mrb_fixnum_value(F_WRLCK));
#endif
#ifdef O_CREAT
  mrb_define_const(mrb, fcntl, "O_CREAT", mrb_fixnum_value(O_CREAT));
#endif
#ifdef O_EXCL
  mrb_define_const(mrb, fcntl, "O_EXCL", mrb_fixnum_value(O_EXCL));
#endif
#ifdef O_NOCTTY
  mrb_define_const(mrb, fcntl, "O_NOCTTY", mrb_fixnum_value(O_NOCTTY));
#endif
#ifdef O_TRUNC
  mrb_define_const(mrb, fcntl, "O_TRUNC", mrb_fixnum_value(O_TRUNC));
#endif
#ifdef O_APPEND
  mrb_define_const(mrb, fcntl, "O_APPEND", mrb_fixnum_value(O_APPEND));
#endif
#ifdef O_NONBLOCK
  mrb_define_const(mrb, fcntl, "O_NONBLOCK", mrb_fixnum_value(O_NONBLOCK));
#endif
#ifdef O_NDELAY
  mrb_define_const(mrb, fcntl, "O_NDELAY", mrb_fixnum_value(O_NDELAY));
#endif
#ifdef O_RDONLY
  mrb_define_const(mrb, fcntl, "O_RDONLY", mrb_fixnum_value(O_RDONLY));
#endif
#ifdef O_RDWR
  mrb_define_const(mrb, fcntl, "O_RDWR", mrb_fixnum_value(O_RDWR));
#endif
#ifdef O_WRONLY
  mrb_define_const(mrb, fcntl, "O_WRONLY", mrb_fixnum_value(O_WRONLY));
#endif
#ifdef O_ACCMODE
  mrb_define_const(mrb, fcntl, "O_ACCMODE", mrb_fixnum_value(O_ACCMODE));
#endif

}

void 
mrb_mruby_fcntl_gem_final(mrb_state* mrb) {

}
