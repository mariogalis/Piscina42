#include <unistd.h>

void	ft_putchar(char b);

void	ft_putchar(char b)
{
	write(1, &b, 1);
}
