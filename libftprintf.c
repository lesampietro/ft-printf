/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 17:45:15 by marvin            #+#    #+#             */
/*   Updated: 2023/12/30 17:45:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

int ft_printf(const char *format, ...)
{
    va_list ap;

}

int main()
{
    int count;

    count = ft_printf("Hello, %s\n", "John");
    ft_printf("The chars written are %d\n", count);

}
