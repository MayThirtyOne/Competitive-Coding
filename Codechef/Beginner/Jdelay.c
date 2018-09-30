#include<stdio.h>
int main(){
int t,n,i,n1,n2,count=0;
scanf("%d",&t);
while(t--){
 count=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     scanf("%d %d",&n1,&n2);
     if((n2-n1)>5)
     {
         count++;
     }
 }
printf("%d\n",count);
}
return(0);
}
