/* hello_signal.c */
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <time.h>
#include <stdbool.h>
#include "timer.h"


bool t = true;

void handler(int signum)
{ //signal handler
  printf("Hello World!\n");
  t=false;
  numOfAlarms++;
  alarm(1);
 
  //exit(1); //exit after printing
}
 
int main(int argc, char * argv[])
{
 
  signal(SIGALRM,handler); 
  signal(SIGINT, signal_handler);
  numOfAlarms++;
  alarm(1);
  
  while(1){
    
    while(t == true){
    //alarm(1); //Schedule a SIGALRM for 1 second
    }
    printf("Turing was right!\n");  
    t=true;
    
    
  } //busy wait for signal to be delivered
  
  printf("Turing was right!\n");
  return 0; //never reached
}
