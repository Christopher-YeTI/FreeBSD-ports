PHP_ARG_ENABLE([libresense],
  [whether to enable libresense support],
  [AS_HELP_STRING([--enable-libresense],
    [Enable libresense support])],
  [no])

PHP_ADD_INCLUDE(/usr/local/include)

PHP_ADD_LIBRARY_WITH_PATH(netgraph, /usr/lib, LIBRESENSE_SHARED_LIBADD)
PHP_ADD_LIBRARY_WITH_PATH(pfctl, /usr/lib, LIBRESENSE_SHARED_LIBADD)
PHP_ADD_LIBRARY_WITH_PATH(vici, /usr/local/lib/ipsec, LIBRESENSE_SHARED_LIBADD)

PHP_SUBST(LIBRESENSE_SHARED_LIBADD)

if test "$PHP_LIBRESENSE" != "no"; then
  AC_DEFINE(HAVE_LIBRESENSE, 1, [ Have libresense support ])
  PHP_NEW_EXTENSION(libreSense, libreSense.c %%DUMMYNET%% %%ETHERSWITCH%%, $ext_shared)
fi
