/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sknkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 10:29:54 by sknkosi           #+#    #+#             */
/*   Updated: 2020/06/24 10:30:01 by sknkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (!nb || power < 0)
		return (0);
	if (!power)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
