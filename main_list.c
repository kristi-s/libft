#include <stdio.h>
#include "libft.h"

void	ft_print_list(t_list *begin)
{
	while (begin)
	{
		printf("%s\n", begin->content);
		begin = begin->next;
	}
}

void	ft_print_one(void *data)
{
	printf("one print: %s\n", data);
}

int main()
{
	char *str = "1hello";
	t_list	*ptr1;
	char *str1 = "2hi cat";
	t_list *ptr2;

	ptr1 = ft_lstnew(str);
	ptr2 = ft_lstnew(str1);

	//ft_lstadd_back(&ptr1, ptr2);
	ft_lstadd_front(&ptr1, ptr2);

	ft_lstiter(ptr1, &ft_print_one);
	return 0;
}
