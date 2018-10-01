#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char c, s[100], q[100];
    scanf("%c",&c);
    scanf("%s",&s);
    scanf(" %[^\n]", q);
    printf("%c\n",c);
    printf("%s\n",s);
    printf("%s\n",q);
        
    return 0;
}
