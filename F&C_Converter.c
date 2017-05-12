#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(){
double FC, F, C, CF;
char cv;

 puts("\n");
 top:
 
  puts("\n Enter 'f' for Fahrenheit 'c' for Celsius\n");
  scanf(" %c", &cv);
  
  switch (cv){
    
  case 'f':{
  printf(" Conversion from Fahrenheit to Celsius:\n");
  scanf(" %lf", &F);
  FC=(5.0/9.0)* (F-32.0);
  printf(" %.2lf\n", FC);  }
    goto top;
    
    case 'c':{
    printf(" Conversion from Celsius to Fahrenheit:\n");
  scanf(" %lf", &C);
  CF=(C*9.0)/5.0+32.0;
  printf(" %.2lf\n", CF);  }
      goto top;
 
    default: exit(0);
}/*switch*/
  
  
  }
