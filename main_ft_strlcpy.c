#include <string.h>
#include <stdio.h>
size_t		ft_strlen(const char *s);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const char *src_copy;

	if (!dst || !src)
		return (0);

	src_copy = src;	
	while (dstsize > 1)
	{
		*dst = *src;
		dstsize--;
		dst++;
		src++;
	}
	*dst = '\0';
	return (ft_strlen(src_copy));
}

int main() {
  
	char str1[12] = "hello world";
	char str_dst[12] = "\0";
	char str2[12] = "hello world";
	char str_dst2[12] = "\0";
  	size_t len_src = 0;
  	size_t len_src2 = 0;
  
	len_src = strlcpy(str_dst, str1, 10);
	len_src2 = ft_strlcpy(str_dst2, str2, 10);

	printf("len_src = %zu dst = %s\n", len_src, str_dst);
	printf("my len_src = %zu dst = %s\n", len_src2, str_dst2);
  
  return 0;
}
