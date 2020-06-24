/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sknkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 10:28:38 by sknkosi           #+#    #+#             */
/*   Updated: 2020/06/24 10:28:42 by sknkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{

	int result;

	result = 1;
	
	if (power < 0)
		return (0);
	
	while (power--)
		result *= nb;
	
	return (result);
}
