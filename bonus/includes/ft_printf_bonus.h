/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsampiet <lsampiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:32:35 by lsampiet          #+#    #+#             */
/*   Updated: 2024/01/20 21:10:38 by lsampiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *format_str, ...);
int		print_format_str(char specifier, va_list ap);
int		print_num(long n);
int		print_u_int(unsigned int n, unsigned int base);
int		print_hex(char specifier, unsigned long n, unsigned int base);
int		print_ptr(unsigned long ptr);
int		ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(char *s, int fd);
int		ft_count_digits(int n);
char	*ft_makestr(int n, int digits, char *str);
char	*ft_itoa(int n);
int		print_hash(unsigned long n, char next_s);
int		print_space(int n, char next_s);
int		print_plus(int n, char next_s);
int		read_flag(char **format_str, va_list ap);
int		is_flag(char specifier);

#endif
