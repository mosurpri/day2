#include <unistd.h>

void ft_putchar(char ch)
{
	write(1,&ch, 1)
}
void ft_print_number(void)
{
	char number ='0';
	while (number < '9')
	{
		ft_putchar(number);
		number++;
	}
}
