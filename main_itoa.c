#include <stdio.h>
#include <stdlib.h>
char *ft_itoa(int n);

int		main()
{
	int num1 = -2147483648;
	int num2 = 2147483647;
	int num3 = -1234;
	int num4 = 0;
	int num5 = 1234;
	int num6 = 1;
	int num7 = -2;

	char *p1;
	char *p2;
	char *p3;
	char *p4;
	char *p5;
	char *p6;
	char *p7;

	p1 = ft_itoa(num1);
	printf("num1 = %d, ft_itoa = %s\n", num1, p1);
	free (p1);

	p2 = ft_itoa(num2);
	printf("num2 = %d, ft_itoa = %s\n", num2, p2);
	free (p2);

	p3 = ft_itoa(num3);
	printf("num3 = %d, ft_itoa = %s\n", num3, p3);
	free (p3);

	p4 = ft_itoa(num4);
	printf("num4 = %d, ft_itoa = %s\n", num4, p4);
	free (p4);

	p5 = ft_itoa(num5);
	printf("num5 = %d, ft_itoa = %s\n", num5, p5);
	free (p5);

	p6 = ft_itoa(num6);
	printf("num6 = %d, ft_itoa = %s\n", num6, p6);
	free (p6);

	p7 = ft_itoa(num7);
	printf("num7 = %d, ft_itoa = %s\n", num7, p7);
	free (p7);
	return 0;
}
