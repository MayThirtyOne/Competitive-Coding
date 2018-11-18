#include <stdio.h>
#include<string.h>
#include<ctype.h>




int main(void) {

char str[1001];
int i;
scanf("%s",&str);
printf("%c",toupper(str[0]));
for(i=1;i<strlen(str);i++)
{
  printf("%c",str[i]);
}



  return 0;
}
