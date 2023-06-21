#include "main.h"
/**
 * main - Determine if a num is positive, nagative or zero
(* 0 : is the number to be checked
 * Return : 0 on success
 */
void positive_ornegative(int i)
{
	if (i < 0)
		{
		printf("%d is %s/n", i, "negative");
		}
	else if (i > 0)
		{
                printf("%d is %s/n", i, "positive");
                }
	else
		{
                printf("%d is %s/n", i, "zero");
                }
return;

}
