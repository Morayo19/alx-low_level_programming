#include<stdio.h>
/**
 * main- a program that retuens the name of the file it was compiled from
 *
 * retun: 0 (success)
 */
int main(void)
{

	printf("%s\n",__FILE__);
	return (0);
}
