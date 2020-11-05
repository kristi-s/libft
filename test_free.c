void  ft_free(char **ptr, int i)
{
	 while(i >= 0)
	 {
	    free(ptr[i]);
	    i--;
	 }
	 free(ptr);
}
int main() 
{
	 char **arr_ptr;
	 int i;
	  
	 i = 0;
	 if (!(arr_ptr = malloc(6 * sizeof(char *))))
	 	return 0;
	 arr_ptr[5] = 0;
	 while (i < 5)
	 {
	 	if (!(arr_ptr[i] = malloc(5 * sizeof(char))))
	    	return 0;
	    i++;
	 }
	 ft_free(arr_ptr, 4);
	  
	 return 0;
}
