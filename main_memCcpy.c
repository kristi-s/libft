#include <string.h>
#include <stdio.h>
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);

int		main()
{
	char str1[11] = "0123456789";
	char str2[11] = "0123456789";
	char st1[10] = "qwertyabc";
	char st2[10] = "qwertyabc";
	char str3[11] = "0123456789";
	char str4[11] = "0123456789";
	char st3[10] = "qwertyabc";
	char st4[10] = "qwertyabc";
	int ch = 97;   // a
	int ch2 = 37; // % 
	char *ptr1, *ptr2;

	ptr1 =  memccpy(str1, st1, ch, 9);
	ptr2 =  ft_memccpy(str2, st2, ch, 9);
	printf("std str = %s ptr = %s\n", str1, ptr1); 
	printf("my str = %s ptr = %s\n", str2, ptr2);
	
	ptr1 =  memccpy(st3, str3, ch2, 3);
	ptr2 =  ft_memccpy(st4, str4, ch2, 3);
	printf("std str = %s ptr = %p\n", st3, ptr1); 
	printf("my str = %s ptr = %p\n", st4, ptr2); 
	return 0;
}
