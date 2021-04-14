#include<stdio.h>


void split_time(long,int*,int*,int*);
// Write the declaration of function split_time



int main(){
int n,hr,min,sec;
printf("Enter seconds:");
scanf("%d",&n);
/* Write the statement to call split_time */
split_time(n, &hr, &min, &sec);

/* Write
the corresponding expressions */ 
printf("Converted format: %d hour %d mins %d secs",
hr, min, sec);
printf("\n");
return 0;
}




void split_time(long total_sec, int *hr, int *min, int
*sec){
/* 
   Write the statements to calculate hr, min and sec
*/
  *hr=total_sec/3600;
  *min =total_sec % 3600 /60;
  *sec =(total_sec %3600)%60;
}