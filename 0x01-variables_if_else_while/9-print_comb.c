#include <stdio.h>
/**
 * main - Entry point
 * Description:Prints all possible combination of single digits numbers
 * Return: Always 0 (success)
*/
int main(void)
{

	int i = 0;

while (i < 10)
{
putchar(i + ''0');
if (i != 9)
{
putchar(', ');
putchar(' ');
}
i++;
}
putchar('\n');
return (0);

}
