#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
 if(argc !=2){
  printf(2,"Uso:trace 0 | 1\n");
  exit();
 }
 trace(atoi(argv[1]));
 exit();
}
