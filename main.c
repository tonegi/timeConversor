#include <stdio.h>

int main(void) {
  int startHour, startMinute, startSecond, startTimeConversion, durationTime, finalTimeConversion, finalHour, finalMinute, finalSecond, remainder;
  printf("Enter the experiment start time (Ex: 10h10m10s): ");
    scanf("%dh%dm%ds", &startHour, &startMinute, &startSecond);
  
  startTimeConversion = startHour * 3600 + startMinute * 60 + startSecond;

  printf("Enter the duration of the experiment in seconds (Ex: 3600s): ");
    scanf("%ds", &durationTime);
  printf("\n");

  finalTimeConversion = durationTime + startTimeConversion;

  finalHour = finalTimeConversion / 3600;
  remainder = finalTimeConversion % 3600;
  finalMinute = remainder / 60;
  finalSecond = remainder % 60;  

  printf("The end time of the experiment was: %dh%dm%ds",finalHour, finalMinute, finalSecond);

  
  return 0;
}
