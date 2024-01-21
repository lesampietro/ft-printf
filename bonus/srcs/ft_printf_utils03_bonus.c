/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils03_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsampiet <lsampiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 18:25:59 by lsampiet          #+#    #+#             */
/*   Updated: 2024/01/20 21:10:27 by lsampiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_bonus.h"

int	is_flag(char specifier)
{
	int	i;

	i = 0;
	if (specifier == '#' || specifier == ' ' \
		|| specifier == '+')
		i++;
	return (i);
}

int	print_hash(unsigned long n, char next_s)
{
	int	count;

	count = 0;
	if (n == 0)
		count += write(1, "0", 1);
	else if (next_s == 'x')
	{
		count += write(1, "0x", 2);
		count += print_hex(next_s, n, 16);
	}
	else
	{
		count += write(1, "0X", 2);
		count += print_hex(next_s, n, 16);
	}
	return (count);
}

int	print_space(int n, char next_s)
{
	int	count;

	count = 0;
	if ((n >= 0) && (next_s == 'd' || next_s == 'i'))
	{
		count += write(1, " ", 1);
		count += print_num(n);
	}
	else
		count += print_num(n);
	return (count);
}

int	print_plus(int n, char next_s)
{
	int	count;

	count = 0;
	if ((n >= 0) && (next_s == 'd' || next_s == 'i'))
	{
		count += write(1, "+", 1);
		count += print_num(n);
	}
	else
		count += print_num(n);
	return (count);
}
