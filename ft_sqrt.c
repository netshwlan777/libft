/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poatmeal <poatmeal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:19:02 by poatmeal          #+#    #+#             */
/*   Updated: 2019/09/22 13:49:24 by poatmeal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sqrt(int nb)
{
	int i;

	if (nb <= 0)
	{
		return (0);
	}
	else
	{
		i = 1;
		while ((i * i) < nb)
		{
			i++;
		}
		if ((i * i) == nb)
			return (i);
		else
			return (0);
	}
}