/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosteine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:38:22 by dosteine          #+#    #+#             */
/*   Updated: 2022/08/02 12:27:25 by dosteine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	if (index < 0)
		return (-1); 
	
	if (index > 1)
 		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	else if(index == 1)
		return (1);
	else
		return(0);
}

#include <stdio.h>

int main()
{
// 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610
	printf("%d", ft_fibonacci(12));
	return (0);
}
