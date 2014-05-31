#include <stdio.h>

int main()
{
	int i = 0;

a:
	if (10 < i){
		goto b;
	}

	if (i % 3 == 0){
	
		printf("AHO!\n");
		
	}else{printf("i=%d\n", i);}
	i++;
	goto a;
		
	b:

	return 0;
	
}