/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sknkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 10:25:55 by sknkosi           #+#    #+#             */
/*   Updated: 2020/06/24 10:26:14 by sknkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{

	int	factorial;
	int	i;

	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	factorial = 1;
	i = 0;
	while (i++ < nb)
		factorial *= i;
	return (factorial);

}
