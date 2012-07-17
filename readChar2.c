#include <stdio.h>

/* copy input to output; 2nd version */
main()
{
	int c;

	while (((c = getchar()) != EOF)== 0){
		putchar(c);
	}	
	printf("%d",c);
}
