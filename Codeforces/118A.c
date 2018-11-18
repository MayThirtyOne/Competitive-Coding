#include <stdio.h>
#include<string.h>
#include<ctype.h>



int main(void) {

char str[101];
int i, none=0;
scanf("%s",&str);
for(i=0;i<strlen(str);i++)
{
  char c=str[i];
  if(c=='a'|| c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='y'||c=='Y')
  {none=none+1;}

else

printf(".%c",tolower(c));


}
  return 0;
}
