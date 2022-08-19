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
#include <stdio.h>

void	ft_atoi_base_test(char *str, char *base, int expected_number)
{
	ft_convert_base(str, base, "0123456789");
	printf("\nExpected: $d.\n", expected_number);
}

int	main(void)
{
	// teste com bases binarias
	printf("Bases binarias:\n");
	ft_atoi_base_test("\n \t\r \v \f++++--1000,.fs", "01", 8);
	ft_atoi_base_test("\n \t\r \v \f++++--*/*/**,.fs", "/*", 43);
	// teste com bases octais
	printf("Bases octais:\n");
	ft_atoi_base_test("\n \t\r \v \f++-++--205,.fs", "01234567", -133);
	ft_atoi_base_test("\n \t\r \v \f+-+++--fdd,.fs", "abcdefgh", -347);
	// teste com bases decimais
	printf("Bases decimais:\n");
	ft_atoi_base_test("\n \t\r \v \f++-++--2147483648,.fs", "0123456789", -2147483648);
	ft_atoi_base_test("\n \t\r \v \f+-+++-+jjf,.fs", "abcdefghij", 995);
	// teste com bases hexadecimais
	printf("Bases hexadecimais:\n");
	ft_atoi_base_test("\n \t\r \v \f++-+-+--F0FA,.fs", "0123456789ABCDEF", 61690);
	ft_atoi_base_test("\n \t\r \v \f+-+++-+ninc,.fs", "abcdefghijklmnop", 55506);
	// // teste com bases invalidas
	// printf("Bases invalidas:\n");
	// ft_atoi_base_test("\n \t\r ++-++-123456,das", "", 0);
	// ft_atoi_base_test("\n \t\r ++-++-123456,das", "0", 0);
	// ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123456678", 0);
	// ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123\n", 0);
	// ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123\v", 0);
	// ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123\t", 0);
	// ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123\f", 0);
	// ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123\r", 0);
	// ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123 ", 0);
	// ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123+", 0);
	// ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123-", 0);
}