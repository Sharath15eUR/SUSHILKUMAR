#include <stdio.h>  
void main()
{
int N, sum=0; 
scanf("%d", &N); /* The value of N is taken from the test cases */

/* Complete the program. Please use the printf statement given below to 
exactly match your output with the test cases.

printf("Sum = %d", sum);

*/
int i=0;
int n=N;
while(n!=0){
  if(i%2==0){
   sum=sum+i; 
  }
  i++;
  n--;
}
if(N%2==0){
  	sum=sum+i;
  }
printf("Sum = %d", sum);
}

