#include <stdio.h>

/* print Fahrenheit-Celsius table
	for fahr = -, 20, ..., 300 */

main()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;	/* lower limit of temperature scale */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */

	fahr = lower;
	printf("\n******The temp converter*****\n\n");
	printf("fahr\t  Cel\n");
	while (fahr <= upper) {
		celsius = 5 * (fahr-32) / 9;
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
