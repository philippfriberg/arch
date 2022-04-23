/* forkdemo.c */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
  int status;
  int daten;
  int k, pid;

  // Zufallszahl (0-100)
  daten = rand() % 100;
  k=fork();
  if( k == 0 ) {
    // Kindprozess
    daten++;
    printf("Kindeprozess id: %d, daten: %d\n", getpid(), daten);
    exit(0);
  } else {
    // Elternprozess
    daten--;
    printf("Elternprozess id: %d, daten: %d\n", getpid(), daten);
    pid = wait(&status);
  }

  return 0;
}
