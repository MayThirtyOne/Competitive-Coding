#include<stdio.h>

int main(void)

{ 
int a;
scanf("%d",&a);
int b,c,i;

for(i=0;i<a;i++)
{
scanf("%d",&b);
scanf("%d",&c);
if(b>c)
printf(">\n");
else if(b<c)
printf("<\n");
else
printf("=\n");
	
}

return 0;
}
