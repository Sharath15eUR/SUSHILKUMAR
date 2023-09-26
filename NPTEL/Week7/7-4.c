#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]={0},substr[100][100]={0}; 
//str[100] is for storing the sentence and substr[50][50] is for storing each word.
    
scanf("%[^\n]s", str); //Accepts the sentence from the test case data.

/* Complete the program to get the desired output.
The print statement should be as below
 
printf("Largest Word is: %s\nSmallest word is: %s\n", -------,--------);

*/
int i=0,j=0,k=0;
char small[100],large[100];
for(i=0;i<100;i++){
	if(str[i]!='\0' && str[i]!=' '){
		substr[k][j++]=str[i];
	}
	else{
		k++;
		j=0;
	}
}
strcpy(small, substr[0]);  
strcpy(large, substr[0]);  

for(i=0;i<=(k+1);i++){
	if(strlen(small)>strlen(substr[i])){
		strcpy(small,substr[i]);
	}
	if(strlen(large)<strlen(substr[i])){
		strcpy(large,substr[i]);
	}
}
  printf("Largest Word is: %s\nSmallest word is: %s\n",large,small);
}

