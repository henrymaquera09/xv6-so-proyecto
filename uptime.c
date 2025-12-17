#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  int ticks;
  int seconds;

  ticks = uptime();
  seconds = ticks / 100;   // xv6 = 100 ticks por segundo

  printf(1, "Uptime:\n");
  printf(1, "Ticks   : %d\n", ticks);
  printf(1, "Seconds : %d\n", seconds);

  exit();
}
