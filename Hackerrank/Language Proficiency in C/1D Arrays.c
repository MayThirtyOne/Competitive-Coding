#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int num;
    scanf("%d",&num);
    int arr[num],sum=0;
    while(num--)
        {scanf("%d",&arr[num]);
      
        sum=sum+arr[num];}
    printf("%d\n",sum);
        
    return 0;
}
