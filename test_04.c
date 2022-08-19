/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 21:10:53 by vgoncalv          #+#    #+#             */
/*   Updated: 2022/08/19 17:53:52 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ex04/ft_convert_base.c"
#include "ex04/ft_convert_base2.c"

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int		main(void)
{
	char nbr[] = "-+--2147483648";
	char base_to[] = "0123456789ABCDEF";
	char base_from[] = "0123456789";
	char *res;

	res = ft_convert_base(nbr, base_from, base_to);
	if (res == NULL)
		return (1);
	printf("%s\n", res);
	free(res);
	return (0);
}

// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   test_04.c                                          :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2022/08/19 16:49:41 by aantonio          #+#    #+#             */
// /*   Updated: 2022/08/19 17:46:55 by aantonio         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "ex04/ft_convert_base.c"
// #include <stdio.h>

// void	ft_atoi_base_test(char *str, char *base, int expected_number)
// {
// 	int ft_buff;

// 	ft_buff = ft_convert_base(str, base, "0123456789");
// 	if (ft_buff != expected_number)
// 		printf("> KO, expected: %d got: %d\n", expected_number, ft_buff);
// 	else
// 		printf("> OK, result: %d\n", ft_buff);
// }

// int	main(void)
// {
// 	// teste com bases binarias
// 	printf("Bases binarias:\n");
// 	ft_atoi_base_test("\n \t\r \v \f++++--1000,.fs", "01", 8);
// 	ft_atoi_base_test("\n \t\r \v \f++++--*/*/**,.fs", "/*", 43);
// 	// teste com bases octais
// 	printf("Bases octais:\n");
// 	ft_atoi_base_test("\n \t\r \v \f++-++--205,.fs", "01234567", -133);
// 	ft_atoi_base_test("\n \t\r \v \f+-+++--fdd,.fs", "abcdefgh", -347);
// 	// teste com bases decimais
// 	printf("Bases decimais:\n");
// 	ft_atoi_base_test("\n \t\r \v \f++-++--2147483648,.fs", "0123456789", -2147483648);
// 	ft_atoi_base_test("\n \t\r \v \f+-+++-+jjf,.fs", "abcdefghij", 995);
// 	// teste com bases hexadecimais
// 	printf("Bases hexadecimais:\n");
// 	ft_atoi_base_test("\n \t\r \v \f++-+-+--F0FA,.fs", "0123456789ABCDEF", 61690);
// 	ft_atoi_base_test("\n \t\r \v \f+-+++-+ninc,.fs", "abcdefghijklmnop", 55506);
// 	// teste com bases invalidas
// 	printf("Bases invalidas:\n");
// 	ft_atoi_base_test("\n \t\r ++-++-123456,das", "", 0);
// 	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0", 0);
// 	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123456678", 0);
// 	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123\n", 0);
// 	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123\v", 0);
// 	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123\t", 0);
// 	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123\f", 0);
// 	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123\r", 0);
// 	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123 ", 0);
// 	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123+", 0);
// 	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123-", 0);
// }