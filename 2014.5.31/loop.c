#include <stdio.h>

int main()
{
	int i = 0;
a:
	if (10 <= i){
		goto b;
	}
	printf("i=%d\n", i);
	i++;
	goto a;
b:

return 0;
	}