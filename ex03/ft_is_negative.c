#include <unistd.h>
 void ft_putchar(char ch)
{
	write(1,&ch, 1);
}
void ft_is_negative(int n);
{
	if (n < 0)
	{
		ft_putchar('N')
	}
	if (n >= 0)
	{
		ft_putchar('p')
	}
}

