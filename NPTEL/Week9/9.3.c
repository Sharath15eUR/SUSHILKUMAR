#include <stdio.h>
int main()
{
 int c, n, search,
 array[100];
 scanf("%d",&n);

 for (c = 0; c < n; c++)
 scanf("%d",&array[c]);
 scanf("%d", &search);
int i,j,k,flag=0;
i=0;
j=n;
k=(j+i)/2;
for(i=0;i<j;i++){
    if (array[k]<search){
    	i=k+1;
	}
    else if(array[k]==search) {
        printf("%d found at location %d.", search, k+1);
        flag=1;
        break;
    }
    else{
    	j=k-1;
	}
    k=(i+j)/2;
    }
if(flag=0){
	printf("Not found! %d isn't present in the list.", search);
}
return 0;
}
