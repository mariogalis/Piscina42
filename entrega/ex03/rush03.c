#include <unistd.h>
void	rush(int i, int j);
void	fwhile(int j, int i, int fila, int columna);
void	ft_putchar(char b);

void	rush(int x, int y)
{
	int	fila;
	int	columna;
	int	i;
	int	j;

	i = 0;
	j = 0;
	fila = x;
	columna = y;
	if (x > 0 && y > 0)
	{
		while (i <= fila - 1 )
		{
			j = 0;
			fwhile(j, i, fila, columna);
			i++;
			if (i != fila)
				ft_putchar('\n');
		}
	}
}

void	fwhile(int j, int i, int fila, int columna)
{
	while (j <= columna - 1)
	{
		if ((i == 0 || i == fila - 1) && (j == 0 ))
		{
			ft_putchar('A');
		}
		else if ((i == 0 || i == fila - 1) && (j == columna - 1))
		{
			ft_putchar('C');
		}
		else if ((i == 0 || i == fila - 1) && (j != columna - 1 && j != 0))
		{
			ft_putchar('B');
		}
		else if ((i != 0 && i != fila - 1) && (j == columna - 1 || j == 0))
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
		j++;
	}
}
