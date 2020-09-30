#include <stdio.h>
#include <stdlib.h>
#include "timer.h"


void signal_handler(int signum){

  printf("\n Number of Alarms: %d \n", numOfAlarms);
  exit(0);

};
