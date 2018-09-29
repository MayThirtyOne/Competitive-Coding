
// Sample code to perform I/O:
#include <stdio.h>

int main(){
	int num;
	int i;
	int m;
	scanf("%d", &num);              			// Reading input from STDIN
	for(i=0;i<num;i++)
	    {scanf("%d",&m);
	    if(m%12==0)
	        printf("%d WS\n",m-11);
	    else if(m%12==1)
	        printf("%d WS\n",m+11);    
	    else if(m%12==2)
	        printf("%d MS\n", m+9);
	   else if(m%12==3)
	        printf("%d AS\n", m+7);
	   else if(m%12==4)
	        printf("%d AS\n", m+5);
	   else if(m%12==5)
	        printf("%d MS\n", m+3);
	   else if(m%12==6)
	        printf("%d WS\n", m+1);
	   else if(m%12==7)
	        printf("%d WS\n", m-1);
	   else if(m%12==8)
	        printf("%d MS\n", m-3);
	   else if(m%12==9)
	        printf("%d AS\n", m-5);
	   else if(m%12==10)
	        printf("%d AS\n", m-7);
	   else if(m%12==11)
	        printf("%d MS\n", m-9);
	   
	        
	   
	    }
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here
