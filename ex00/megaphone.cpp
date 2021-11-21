#include <iostream>

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
	}
	return i;
}

void ft_toUpperCase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			std::cout <<  char(str[i] - 32);
		else
			std::cout <<  char(str[i]);
	}
	
}

int main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
	{
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
		return 0;
	}
	i = 0;
	while (++i < argc)
		ft_toUpperCase(argv[i]);
	std::cout << std::endl;
	return 0;
}