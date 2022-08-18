/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:38:48 by aantonio          #+#    #+#             */
/*   Updated: 2022/08/18 15:39:12 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	size;
	int	i;

	if (min >= max)
		return ((int *)0);
	size = max - min;
	if (size < 0)
		size = size * -1;
	range = malloc(4 * size);
	i = min;
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
