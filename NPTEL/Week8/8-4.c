#include<stdio.h>
#include<string.h>

void reverse(char[], int, int);
    int main()
    {
        char str1[20];
        scanf("%s", str1); //The string is taken as input form the test data. 
        int len;
len=strlen(str1);
reverse(str1,len,len);
return 0;
}

void reverse(char str[],int n1,int n2){
  char temp=0,i;
  int j=n1-1;
  for(i=0;i<n1;i++){
  	if(j<i){
  		temp=str[j];
  		str[j]=str[i];
  		str[i]=temp;
	  }
	  j--;
  }
  printf("The string after reversing is: %s", str); 
}
