/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsampiet <lsampiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 12:15:03 by lsampiet          #+#    #+#             */
/*   Updated: 2024/01/20 21:12:51 by lsampiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_bonus.h"

int	read_flag(char **format_str, va_list ap)
{
	int		count;
	char	next_s;

	count = 0;
	next_s = *(++(*format_str));
	if ((*format_str)[-1] == '#')
		count += print_hash(va_arg(ap, unsigned int), next_s);
	else if ((*format_str)[-1] == ' ' && (next_s == 'd' || next_s == 'i'))
		count += print_space(va_arg(ap, int), next_s);
	else if ((*format_str)[-1] == ' ' && next_s == 's')
		count += ft_putstr_fd(va_arg(ap, char *), 1);
	else if ((*format_str)[-1] == '+')
		count += print_plus(va_arg(ap, int), next_s);
	return (count);
}

int	print_format_str(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_putchar_fd(va_arg(ap, int), 1);
	else if (specifier == 's')
		count += ft_putstr_fd(va_arg(ap, char *), 1);
	else if (specifier == 'i' || specifier == 'd')
		count += print_num(va_arg(ap, int));
	else if (specifier == 'u')
		count += print_u_int(va_arg(ap, unsigned int), 10);
	else if (specifier == 'p')
		count += print_ptr(va_arg(ap, unsigned long));
	else if (specifier == 'x')
		count += print_hex(specifier, va_arg(ap, unsigned int), 16);
	else if (specifier == 'X')
		count += print_hex(specifier, va_arg(ap, unsigned int), 16);
	else if (specifier == '%')
		count += write(1, "%", 1);
	else
		write(1, &specifier, 1);
	return (count);
}

int	ft_printf(const char *format_str, ...)
{
	va_list	ap;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(ap, format_str);
	if (!format_str)
		return (-1);
	while (format_str[i] != '\0')
	{
		if (format_str[i] == '%')
		{
			format_str++;
			if (is_flag(format_str[i]) == 1)
				count += read_flag((char **)&format_str, ap);
			else
				count += print_format_str(*format_str, ap);
		}
		else
			count += ft_putchar_fd(*format_str, 1);
		format_str++;
	}
	va_end(ap);
	return (count);
}
