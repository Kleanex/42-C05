/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosteine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:21:34 by dosteine          #+#    #+#             */
/*   Updated: 2022/08/03 17:21:50 by dosteine         ###   ########.fr       */
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

#include <stdio.h>

int main()
{
	printf("%d\n", ft_is_prime(-2));
	printf("%d\n", ft_is_prime(11));
	printf("%d\n", ft_is_prime(20087));
	printf("%d\n", ft_is_prime(90));
	printf("%d\n", ft_is_prime(29));

	return (0);
}
