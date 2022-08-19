/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 19:33:15 by aantonio          #+#    #+#             */
/*   Updated: 2022/08/19 17:50:36 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str);
int		is_valid_base(char *base);
void	write_number_in_base(int number, char *base);
void	ft_putnbr_base(int nbr, char *base);

int	pwr(int base, int exponent)
{
	int	i;
	int	result;

	if (base == 0)
		return (0);

	result = 1;
	i = 0;
	while (i < exponent)
	{
		result *= base;
		i++;
	}
	return (result);
}


int	find_index(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int	get_number(char *start, int size, char *base)
{	
	int	i;
	int	number;
	int	base_size;

	base_size = 0;
	while (base[base_size])
		base_size++;

	number = 0;
	i = 0;
	while (i < size)
	{
		number += find_index(start[i], base) * pwr(base_size, size - i - 1);
		i++;
	}
	return (number);
}

int	is_valid_base(char *base)
{
	int	base_size;
	int	i;
	int	j;

	base_size = 0;
	while (base[base_size])
		base_size++;
	if (!base || base_size == 1 || base_size > 16)
		return (0);
	i = 0;
	while (i < base_size)
	{
		j = i + 1;
		while (j < base_size)
		{
			if (base[i] == base[j] || base[j] == '+' || base[j] == '-')
				return (0);
			if (base[j] <= ' ')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_convert_base(char *str, char *base_from, char *base_to)
{
	int		i;
	char	*start;
	int		number;
	int		number_size;
	int		sign;

	if (!base_from || *base_from == 0 || !base_from || *base_from == 0)
		return ;
	if (!is_valid_base(base_from) || !is_valid_base(base_to))
		return ;
	sign = 1;
	i = 0;
	while (find_index(str[i], base_from) == -1)
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	start = str + i;
	number_size = 1;
	while (find_index(str[i + number_size], base_from) != -1)
	{
		number_size++;
	}
	number = get_number(start, number_size, base_from);
	ft_putnbr_base(sign * number, base_to);
}
