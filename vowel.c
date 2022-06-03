#include<stdio.h>
int main(){
  char ch;
  printf("Enter your input:");
  scanf("%c",&ch);
  // (ch== 'a'||ch== 'e'||ch== 'i'||ch== 'o'||ch== 'u')?printf("vowel"):printf("Not vowel");
  if(ch =='a'||ch=='A'||ch== 'e'||ch== 'E'||ch== 'i'||ch== 'I'||ch== 'o'||ch== 'O'||ch== 'u'||ch== 'U'){
    printf("Vowel");
  }else{
    printf("Not Vowel");
  }
  
  return 0;
}