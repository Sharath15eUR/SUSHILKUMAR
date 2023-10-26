#include<stdio.h>
int main()
{
	int n,i,count=0;
	scanf("%d",&n);
	int n1=n+1;
	int a[n1];
	int flag=0;
	for(i=0;i<n1;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n1-1;i++){
		if(a[i]==a[n1-1]){
			printf("%d present at %d\n",a[n1-1],i+1);
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("%d not present in the array",a[n1-1]);
	}
}
