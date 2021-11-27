#include <unistd.h>
void	rush(int i, int j);
void	fwhile(int j, int i, int fila, int columna);

int	main(void)
{
	int	i;
	int	j;

	rush(5, 5);
	return (0);
}

void	rush(int a, int b)
{
	int	fila;
	int	columna;
	int	i;
	int	j;

	i = 0;
	j = 0;
	fila = a ;
	columna = b;
	while (i <= fila - 1 )
	{
		j = 0;
		fwhile(j, i, fila, columna);
		i++;
		if (i != fila)
			write(1, "\n", 1);
	}
}

void	fwhile(int j, int i, int fila, int columna)
{
	while (j <= columna - 1)
	{
		if ((i == 0 ) && (j == 0 || j == columna - 1))
		{
			write(1, "A", 1);
		}
		else if ((i == fila - 1) && (j == 0 || j == columna - 1))
		{
			write(1, "C", 1);
		}
		else if ((i == 0 || i == fila - 1) && (j != columna - 1 && j != 0))
		{
			write(1, "B", 1);
		}
		else if ((i != 0 && i != fila - 1) && (j == columna - 1 || j == 0))
		{
			write(1, "B", 1);
		}
		else
		{
			write(1, " ", 1);
		}
		j++;
	}
}
