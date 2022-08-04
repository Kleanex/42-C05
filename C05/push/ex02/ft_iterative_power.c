/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosteine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:30:31 by dosteine          #+#    #+#             */
/*   Updated: 2022/08/03 10:13:49 by dosteine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	r;

	r = nb;
	i = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i < power)
	{
		r *= nb;
		i++;
	}
	return (r);
}
