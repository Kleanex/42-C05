/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosteine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 10:39:29 by dosteine          #+#    #+#             */
/*   Updated: 2022/08/01 16:21:09 by dosteine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	int r;
	int m;
	
	m = 2;	
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	r = 1;
	while(m <= nb)
	{
		r = m * r;
		m++;
	}
	return (r);
} 		
		
#include <stdio.h>
int main()
{
	printf("%d", ft_iterative_factorial(7));
	return (0);
}
