/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 12:59:27 by aantonio          #+#    #+#             */
/*   Updated: 2022/08/18 15:06:49 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_total_size(char **words, int size)
{
	int	i;
	int	count;
	int	nth_word;

	count = 0;
	nth_word = 0;
	while (nth_word < size)
	{
		i = 0;
		while (words[nth_word][i])
		{
			count++;
			i++;
		}
		nth_word++;
	}
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_size;
	int		current_word;
	int		word_cursor;
	int		result_cursor;
	char	*result;

	total_size = get_total_size(strs, size);
	result = malloc(total_size + (size - 1) + 1);
	word_cursor = 0;
	result_cursor = 0;
	current_word = 0;
	while (current_word < size)
	{
		word_cursor = 0;
		while (strs[current_word][word_cursor])
		{
			result[result_cursor] = strs[current_word][word_cursor];
			result_cursor++;
			word_cursor++;
		}
		if (current_word < size - 1)
		{
			result[result_cursor] = *sep;
			result_cursor++;
		}
		current_word++;
	}
	result[total_size + size - 1] = 0;
	return (result);
}
