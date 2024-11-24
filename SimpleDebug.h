#ifndef SIMPLEDEBUG_H
#define SIMPLEDEBUG_H

#ifdef DEBUG_ENABLE
  #define DEBUG(...) __VA_ARGS__
#else
  #define DEBUG(...)
#endif

#endif // SIMPLEDEBUG_H