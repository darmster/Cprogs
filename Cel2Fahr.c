#include <stdio.h>

/* Convert and print values from fahrenheit to celsius from 0 to 300 */

main()
{

	float fahr, celsius;
	float lower, upper, step;

	lower = 0;	// lower limit of temperature scale 
	upper = 300;	// upper limit
	step = 20;	// step size 

	celsius = lower;
	while (celsius <= upper) {
		fahr = celsius * (9.0/5.0) + 32.0;
		printf("%6.1f %3.0f\n", celsius, fahr);
		celsius = celsius + step;
	}
}

