/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosteine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 12:28:16 by dosteine          #+#    #+#             */
/*   Updated: 2022/08/02 18:42:24 by dosteine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;
	int tmp;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i < 46341)
	{	
		tmp = i * i;
		if (tmp == nb)
			return (i);
 		i++;
 	}
	
	return (0);
}

#include <stdio.h>

int main()
{
	printf("%d", ft_sqrt(4));
	return (0);
}

// 5 au carre = 25 && racine de 25 = 5 !
// 9 au carre = 3 && racine de 3 = 9 !
//49 au carre = 2401 && racine de 2401 = 49 !
	
