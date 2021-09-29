#include "megaphone.h"

void	megaphone(int argc, char *argv[])
{
	int	i;
	int j;
	int	length;

	i = 0;
	while (++i < argc)
	{
		j = -1;
		length = ft_strlen(argv[i]);
		while (++j < length)
		{
			std::cout << (char)ft_toupper(argv[i][j]);
		}
		std::cout << " ";
	}
	std::cout << std::endl;
}

int	main (int argc, char *argv[])
{
	if (argc > 1)
	{
		megaphone(argc, argv);
	}
	else
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	return (0);
}
