#include <stdio.h>
/**
 * main - print out sizes of data types in C
 * code by sunnie
 * Return: 0
*/
int main(void)
{

printf("Size of a char: %zu byte(S)\n", (unsigned long)sizeof(char));
printf("Size of a int: %zu byte(S)\n", (unsigned long)sizeof(int));
printf("Size of a long int: %zu byte(S)\n", (unsigned long)sizeof(long int));
printf("Size of a long long int: %zu byte(S)\n", (unsigned long)sizeof(long long int));
printf("Size of a float: %zu byte(S)\n", (unsigned long)sizeof(float));
return (0);
}
