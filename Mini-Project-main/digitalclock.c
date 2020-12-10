#include<stdio.h>
#include<time.h>
int main()
{
  time_t s; 
    struct tm* current_time; 
  // time in seconds 
    s = time(NULL); 
// to get current time 
    current_time = localtime(&s); 
 // print time in minutes, 
    // hours and seconds 
    printf("Time : %02d:%02d:%02d\n", 
           current_time->tm_hour, 
           current_time->tm_min, 
           current_time->tm_sec);   
  
  char cur_time[128];
  
  time_t      t;
  struct tm*  ptm;
  
  t = time(NULL);
  ptm = localtime(&t);
    
  strftime(cur_time, 128, "%A,%d-%b-%Y ", ptm);
  
  printf("Date : %s\n", cur_time);
    
  
    return 0; 
}    
    



