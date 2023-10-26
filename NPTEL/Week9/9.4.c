#include <stdio.h>
int main() {
  int array[100], n, c;
  scanf("%d", &n);
  for (c = 0; c < n; c++) {
    scanf("%d", &array[c]);
  }
int temp,l;
l=n-1;
for(c=0;c<n/2;c++) {
temp=array[c];
array[c]=array[l];
array[l]=temp;
l--;
}
printf("Reversed array elements are:\n");
for(c=0;c<n;c++){
    printf("%d\n",array[c]);
}
  return 0;
}
