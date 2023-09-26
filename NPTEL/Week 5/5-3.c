#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N); /* The value of N is taken from the test case data */
 
/* Complete the code.
Use the printf statements as below
printf("%d is a number that can be expressed as power of 2.",N);
printf("%d cannot be expressed as power of 2.",N);
*/
int n=N;
int temp=0,flag=0;
while(n!=0){
  if(n%2==0){
   flag=0;
  }
  else{
    if(n!=1){
  		flag=1;
		break;	
  }
  }
  n=n/2;
}
if(flag==0){
  printf("%d is a number that can be expressed as power of 2.",N);
}
else{
  printf("%d cannot be expressed as power of 2.",N);
}
}
