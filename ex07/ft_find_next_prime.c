/* The function returns the next prime number greater or equal to the number given as argument.*/

static int ft_is_prime(int nb)
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

int ft_find_next_prime(int nb)
{
	nb += 1;
	while (!ft_is_prime(nb))
		nb += 1;
	return (nb);
}
