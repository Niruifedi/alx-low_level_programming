#include <stdio.h>
/**
 * main -main block
 * Return: 0
 */
int main(void)
{
	printf("Size of char is %ld byte(s)\n", sizeof(char));
	printf("Size of int is %ld byte(s)\n", sizeof(int));
	printf("Size of long int is %ld byte(s)\n", sizeof(long int));
	printf("Size of long long int is %d byte(s)\n", sizeof(long long int));
	printf("Size of float is %ld byte(s)\n", sizeof(float));

	return (0);
}
