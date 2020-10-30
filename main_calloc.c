#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);

int		main()
{
	char *ptr1;
	char *ptr2;
	int i1, i2;

	i1 = 0;
	i2 = 0;

	printf("i1 = %d, i2 = %d\n", i1, i2);

	if (!(ptr1 = calloc(10, sizeof(char))))
	{
		printf("1) ptr1 = %p\n", ptr1);
		return (0);
	}
	if (!(ptr2 = ft_calloc(10, sizeof(char))))
	{
		printf("2)my ptr2 = %p\n", ptr2);
		return (0);
	}
	
	while (i1 < 10)
	{
		if (*(ptr1 + i1) != '\0')
		{
			printf("KO\n");
			return 0;
		}
		i1++;
	}
	while (i2 < 10)
	{
		if (*(ptr2 + i2) != '\0')
		{
			printf("KO my fn\n");
			return 0;
		}
		i2++;
	}

	printf("i1 = %d, i2 = %d\n", i1, i2);
	printf("Ok\n");
	return 0;
}
