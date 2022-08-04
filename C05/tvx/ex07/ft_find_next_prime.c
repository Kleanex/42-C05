/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosteine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 14:02:09 by dosteine          #+#    #+#             */
/*   Updated: 2022/08/03 18:21:59 by dosteine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i < nb && nb <= 2147483647)
	{
		if (nb != 1 && nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
	{
		return (nb);
	}
	return (ft_find_next_prime(nb + 1));
}

#include <stdio.h>

int main()
{
	printf("%d\n", ft_find_next_prime(-20));
	printf("%d\n", ft_find_next_prime(25));
	printf("%d\n", ft_find_next_prime(17));
	printf("%d\n", ft_find_next_prime(33));
	return (0);
}
