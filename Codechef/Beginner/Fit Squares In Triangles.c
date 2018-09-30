#include<stdio.h>


int main(void)

{

int a,i,j,b,q,c=0;
scanf("%d",&a);


for(j=0;j<a;j++)
  {
    scanf("%d",&b);
    q=b/2;
    if(q==0)
    c=0;
  
else


q=q-1;
c=0;

{
  for(i=0;i<=q;i++)
{
c=c+i;
}
}
printf("%d\n",c);

}

return 0;
}
