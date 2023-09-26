#include <stdio.h>  
long power(int, int);
int main()
{
int pow, num;
long result;

scanf("%d", &num); //The number taken as input from test case data 

scanf("%d", &pow); //The power is taken from the test case 
result = power(num, pow);
printf("%d^%d is %ld", num, pow, result);
return 0;
}
long power(int num1, int pow1){
  if(pow1==0){
    return 1;
  }
  else{
   return num1*power(num1,pow1-1); 
  }
}
