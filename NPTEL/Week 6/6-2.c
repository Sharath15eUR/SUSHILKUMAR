#include<stdio.h>
 
int main() {
   int arr[20], i, n;
 
   scanf("%d", &n); /* Accepts the number of elements in the array */

  for (i = 0; i < n; i++) 
     scanf("%d", &arr[i]); /*Accepts the elements of the array */
i=0;
int j=n-1;
int temp=0;
while(i!=n/2){
  temp=arr[i];
  arr[i]=arr[j];
  arr[j]=temp;
  i++;
  j--;
}
for (i = 0; i < n; i++) {
      printf("%d\n", arr[i]); // For printing the array elements 
   }
 
   return (0);
}
