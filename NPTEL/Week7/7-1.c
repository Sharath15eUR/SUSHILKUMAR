#include<stdio.h>
int main() {
   int upper = 0, lower = 0;
   char ch[100];
   scanf(" %[^\n]s", ch);  /*A word or a sentence is accepted from test case data */

/* Complete the remaining part of the code to store number of uppercase letters
in the variable upper and lowercase letters in variable lower.
The print part of already written. You can declare any variable if necessary */
int count=0;
int i;
for(i=0;i<100;i++){
  if(ch[i]!=NULL){
   count++; 
  }
  else{
   break; 
  }
}


for(i=0;i<count;i++){
  if(ch[i]>='A' && ch[i]<='Z'){
    upper++;
  }
  else if(ch[i] >='a' && ch[i]<='z'){
   lower++; 
  }
}
printf("Uppercase Letters : %d\n", upper); /*prints number of uppercase letters */
   printf("Lowercase Letters : %d", lower); /*prints number of lowercase letters */
 
   return (0);
}
