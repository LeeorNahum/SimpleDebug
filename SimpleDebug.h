#ifndef SIMPLEDEBUG_H
#define SIMPLEDEBUG_H

#ifdef DEBUG_ENABLE
  #define DEBUG(x) x
#else
  #define DEBUG(x)
#endif

#endif // SIMPLEDEBUG_H