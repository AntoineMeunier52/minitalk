/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 09:20:34 by ameunier          #+#    #+#             */
/*   Updated: 2021/10/04 09:23:47 by ameunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_read_conversion(t_printl *tab, const char *format, int i)
{
	if (format[i] == 'c')
		ft_print_char(tab);
	else if (format[i] == 's')
		ft_print_string(tab);
	else if (format[i] == 'p')
		ft_print_ptn(tab);
	else if (format[i] == 'd' || format[i] == 'i')
		ft_print_num(tab);
	else if (format[i] == 'u')
		ft_print_uns_num(tab);
	else if (format[i] == 'x' || format[i] == 'X')
		ft_print_hexa(tab, format[i]);
	else if (format[i] == '%')
		ft_print_pour(tab);
	return (i);
}
