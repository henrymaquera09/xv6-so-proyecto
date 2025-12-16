#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  int i;

  if(argc == 2){
    int num = atoi(argv[1]);
    int c = getsyscount(num);
    printf(1, "Syscall %d: %d invocaciones\n", num, c);
  } else {
    printf(1, "Resumen de syscalls:\n");
    for(i = 1; i < 24; i++){
      printf(1, "Syscall %d: %d\n", i, getsyscount(i));
    }
  }
  exit();
}
