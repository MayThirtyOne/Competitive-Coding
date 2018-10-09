#include <stdio.h>
#include<string.h>

int main(void) {
  int num,i;
  scanf("%d",&num);
  while(num--)

  {

    char s[100000];
    int flag=0;
    scanf("%s",&s);
    for(i=0;i<strlen(s);i++)
    {
    
    
    if(s[i]==s[i+1])
      {flag=flag+1;}
  
    }
    printf("%d\n",flag);
  }
  return 0;
}
