#include<stdio.h>
int main()
{
	int n,count=0;
	scanf("%d",&n);
	int a[n+1];
	for(int i=0;i<n+1;i++){
		scanf("%d",&a[i]);
	}
	
	for(int i=0;i<n;i++){
		if(a[i]==a[0]){
			printf("%d present at %d\n",a[0],i+1);
			count++;
		}
	}
	printf("%d is present totally %d times",a[0],count);
}
