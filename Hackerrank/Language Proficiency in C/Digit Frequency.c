#include <stdio.h>
#include<string.h>



int main(void) {
  char s[1000];
  int i;
  int zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0,none=0;
  scanf("%s",&s);
  for(i=0;i<strlen(s);i++)
  {
    char ch= s[i];
  switch(ch)
  {
    case '0' :  zero++;
      break;
    case '1':  one++;
      break;
    case '2':  two++;
      break;
    case '3':  three++;
      break;
    case '4':  four++;
      break;
    case '5':  five++;
      break;
    case '6':  six++;
      break;
    case '7':  seven++;
      break;
    case '8':  eight++;
      break;
    case '9':  nine++;
      break;
     default:  none++;
      break;
      
  }
  }
  
  printf("%d %d %d %d %d %d %d %d %d %d ",zero,one,two,three,four,five,six,seven,eight,nine);
  return 0;
}
