#include <stdio.h>
#include<string.h>




int main(void) {

char str[101];
int i, counter=0,cntr,flag=0,o;
scanf("%s",&str);
for(i=0;i<strlen(str);i++)
{
  char c=str[i];
  if(str[i+1]==str[i]&&str[i+2]==str[i+1])
  {counter=counter+1;
  cntr=counter;
    if(cntr>=5)
    {
      flag=1;
    }
  
  }
  else
  counter=0;
}



if(flag==1)
printf("YES\n");
else
printf("NO\n");




  return 0;
}
