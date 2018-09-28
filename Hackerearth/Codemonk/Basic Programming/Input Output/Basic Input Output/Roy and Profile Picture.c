


#include <stdio.h>

void main()


{
	int required;
	int num;
	int i;
	int w;
	int h;
	scanf("%d",&required);
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{    
	    scanf("%d",&w);
	    scanf("%d",&h);
	        if(w<required||h<required)
	            printf("UPLOAD ANOTHER\n");
	        
	            
	        else if(w>=required&&h>=required&&w==h)
	            printf("ACCEPTED\n");
	        else
	            printf("CROP IT\n");
	}
	
}




