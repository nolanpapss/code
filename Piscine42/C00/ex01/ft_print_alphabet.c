#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	count;
	char	letters;

	letters = 97;
	count = 0;
	while (count <= 25)
	{
		write(1, &letters, 1);
		count++;
		letters++;
	}
}


int	main(void)
{
	ft_print_alphabet();
	return (0);
}
