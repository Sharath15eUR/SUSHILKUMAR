#include<stdio.h>
int HCF(int, int); //You have to write this function which calculates the HCF. 
	 
int main()
{
   int a, b, c, d, result;
   scanf("%d %d %d %d", &a, &b, &c, &d); /* Takes 4 number as input from the test data */
   result = HCF(HCF(a, b), HCF(c,d));
   printf("The HCF is %d", result);
}
int HCF(int a,int b){
  if(a < b){
    if (a!=0){
      return HCF(a, b % a);
    }
    else
    {
      return b;
    }
  }
  else{
   if (b!=0){
      return HCF(b, a % b);
    }
    else
    {
      return a;
    }
  } 
}
