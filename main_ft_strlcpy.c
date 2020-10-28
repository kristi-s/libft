#include <string.h>
#include <stdio.h>

/*size_t	strlcpy(char *dst, const char *src, size_t dstsize)
{
	if 	
}*/

int main() {
  
  char str1[12] = "hello world";
  char str_dst[9] = "\0";
  size_t len_src = 0;
  
   //len_src = strlcpy(str_dst, str1, 12);
	//len_src = strlcpy(str_dst, str1, 10);
	 len_src = strlcpy(str_dst, str1, 10);

	printf("len_src = %zu dst = %s\n", len_src, str_dst);
  
  return 0;
}
