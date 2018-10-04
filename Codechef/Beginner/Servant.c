#include<stdio.h>

int main(void)

{

int n,a;
scanf("%d",&n);
while(n--)
{
scanf("%d",&a);
if(a<10)
printf("What an obedient servant you are!\n");
else
printf("-1\n");
}

return 0;
}
