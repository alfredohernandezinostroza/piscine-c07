
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		src_size;
	char	*copy;

	src_size = 0;
	while (src[src_size])
	{
		src_size++;
	}
	copy = malloc(src_size + 1);
	copy[src_size] = 0;
	src_size--;
	while (src_size >= 0)
	{
		copy[src_size] = src[src_size];
		src_size--;
	}
	return (copy);
}
