/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sknkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 10:32:34 by sknkosi           #+#    #+#             */
/*   Updated: 2020/06/24 10:32:40 by sknkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The function returns the square root of a number (if it exists), or 0 if the square root is an irrational number. */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
