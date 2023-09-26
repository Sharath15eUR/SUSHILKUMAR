#include<stdio.h>
int main()
{
    int a,b,c; 
    scanf("%d %d %d",&a, &b, &c); /*The length of three sides are entered from the test cases */
 
/* Complete the program. Copy and paste from the printf statements mentioned below wherever required for printing the outputs 

printf("Triangle is not possible");
printf("Right-angle Triangle");
printf("Isosceles Triangle");
printf("Equilateral Triangle");
printf("Scalene Triangle");

*/
if( ((a+b)>c)  || ((b+c)>a) || ((c+a)>b) ){
  if ((a==b) && (b==c)){
    printf("Equilateral Triangle");
  }
  else if ( (a==b) || (b==c) ){
    printf("Isosceles Triangle");
  }
  else if ( ((a*a+b*b) == c*c) || ((b*b+c*c)==a*a) || ((a*a+c*c)==b*b) ){
    printf("Right-angle Triangle");
  }
  else{
    printf("Scalene Triangle");
  }
  
}
else {
  printf("Triangle is not possible");
}

}

