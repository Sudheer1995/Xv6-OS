#include "types.h"
#include "fs.h"
#include "user.h"
#include "stat.h"

int main(int argc, char *argv[]) {

  int running_time;
  int wait_time ;
  printf(1,"execution time of %s\n", argv[1]);

  int pid = fork();

  if(pid == 0){
    //child process
    exec(argv[1],argv);
  }
  else
  {
    //parent process
    waitx(&running_time,&wait_time);
    printf(1,"%s running time = %d waiting time = %d\n", argv[1], running_time, wait_time);
  }
  exit();
}
