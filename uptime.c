#include "types.h"
#include "stat.h"
#include "user.h"
int
main(void)
{
int ticks;
int seconds;

ticks = uptime();
seconds = ticks /100;

printf(1,"Uptime:\n");
printf(1,"Ticks : %d\n",ticks);
printf(1,"Seconds : %d\n" ,seconds);

exit();
}
