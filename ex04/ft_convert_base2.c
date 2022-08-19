/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:51:40 by aantonio          #+#    #+#             */
/*   Updated: 2022/08/19 17:52:17 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <limits.h>


int	pwr(int base, int exponent);
int	is_valid_base(char *base);

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

void	write_number_in_base(int number, char *base)
{
	int	digit_count;
	int	index;
	int	length_new_base;
	int	copy_number;

	copy_number = number;
	length_new_base = ft_strlen(base);
	digit_count = 1;
	while (copy_number / length_new_base > 0)
	{
		copy_number = copy_number / length_new_base;
		digit_count++;
	}
	while (digit_count > 0)
	{
		index = number / pwr(length_new_base, digit_count - 1);
		write(1, base + index, 1);
		number = number % pwr(length_new_base, digit_count - 1);
		digit_count--;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (!base || *base == 0 || !is_valid_base(base))
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		if (nbr == INT_MIN)
		{
			ft_putnbr_base(INT_MAX / 10, base);
			write(1, base + (INT_MAX % 10 + 1), 1);
			return ;
		}
		else
			nbr = nbr * -1;
	}
	write_number_in_base(nbr, base);
}