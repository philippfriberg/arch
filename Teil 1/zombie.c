#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char **argv)
{
 pid_t kind1;

 while(1)
  {
   switch( kind1=fork() )
    {
      case -1 :   printf("Fehler bei fork()..........\n");
                  exit(0);
      case  0 :   sleep(2);
                  printf("Kindprozess ist fertig!!\n\n");
                  exit(1);
      default :   printf("Elternprozess schläft 30 sec.\n Rufen sie ps x in der neuen Konsole auf!!!\n");
                  sleep(30);
                  printf("Elternprozess ist fertig\n");
                  exit(2);
    }
  }
 return 0;
}