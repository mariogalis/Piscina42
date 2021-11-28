#include "ft_putchar.c"

void fwhile(int j, int i, int fila, int columna);


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
    if(a > 0 && b > 0){
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
		if ((i == 0 || i == fila - 1) && (j == 0 || j == columna - 1))
		{
            ft_putchar('o');
		}
		else if ((i == 0 || i == fila - 1) && (j != columna - 1 && j != 0))
		{
            ft_putchar('-');
		}
		else if ((i != 0 && i != fila - 1) && (j == columna - 1 || j == 0))
		{
            ft_putchar('|');
		}
		else
		{
            ft_putchar(' ');
		}
		j++;


    }
}
