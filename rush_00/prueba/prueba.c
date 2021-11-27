#include <unistd.h>
void ft_print_numbers(void);

int main(void)
{
ft_print_numbers();
return 0;
}

void ft_print_numbers(void)
{
	char a ='a';
	while (a <= 'z')
	{
		write(1,&a,1);
		a++;
	}
	
}