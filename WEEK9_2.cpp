#include <stdio.h>
#include <string.h>

int chartoint(char n){
	int num = 0 ;
	num = n - '0' ;
	
	return num;
}

int main()
{
    char n[6];
    int s=1;

    
printf("Input number<100000: ");
scanf("%s",&n); 

    int length = sizeof(n);
    for (int i = 0; i < sizeof(n); i++) {
	   if(n[i]!=0){
	   	s = s*chartoint(n[i]);
	   } 

    }
    
    printf("%d", s);

}

