/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosteine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 09:22:18 by dosteine          #+#    #+#             */
/*   Updated: 2022/08/01 16:26:39 by dosteine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);

	if (nb < 0)
		return (0);
	else
		return (nb * ft_recursive_factorial(nb-1));
}

#include <stdio.h>
int main()
{
	printf("%d", ft_recursive_factorial(-1));
	return (0);
}
