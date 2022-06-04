/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 19:56:39 by sizquier          #+#    #+#             */
/*   Updated: 2022/06/04 19:56:43 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <limits.h>
# include <stdarg.h>
/* MAIN FUNCTIONS */

int	ft_printf(char const *str, ...);
int	ft_arg_printf(va_list ap, char chr);

/* EXTRA FUNCTIONS */
int	ft_putchar(char c);
int	ft_putstr(char	*str);
int	ft_putnbr(unsigned int numb);
int	ft_hexa(unsigned long int numb, char chr);
int	ft_putnbrv2(int nb);

#endif
