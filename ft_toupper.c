#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

int	main(void)
{
	printf("%d", ft_toupper('z'));
	return (0);
}
