/*The function returns 1 if the number given as a parameter is a prime number, and 0 if it isn’t.*/

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 0)
		return (0);
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		else
			i += 1;
	}
	return (1);
}
