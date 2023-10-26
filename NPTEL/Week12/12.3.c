#include <stdio.h>
#include <stdlib.h>
int main()
{
int n; 
float element;
scanf("%d", &n); 
element=(float*)calloc(n, sizeof(float));
if(element==NULL)
{
    printf("Error!!! memory not allocated.");
    exit(0);
}
int i;
for(i=0;i<n;i++)
{
    scanf("%f",&element[i]);
}
for(i=1;i<n;i++)
{
    if(element[i]<element[i+1])
    element[i]=element[i+1];
}
printf("Largest element = %.2f\n",element[0]);
return 0;
}
