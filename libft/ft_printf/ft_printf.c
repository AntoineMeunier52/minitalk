/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 09:12:28 by ameunier          #+#    #+#             */
/*   Updated: 2021/10/04 09:12:31 by ameunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_printf(const char *format, ...)
{
	t_printl	*tab;
	int			i;
	int			ret;

	tab = (t_printl *)malloc(sizeof(t_printl));
	if (!tab)
		return (-1);
	tab->tlen = 0;
	va_start(tab->args, format);
	i = -1;
	ret = 0;
	while (format[++i])
	{
		if (format[i] == '%')
			i = ft_read_conversion(tab, format, i + 1);
		else
			tab->tlen += write(1, &format[i], 1);
	}
	va_end(tab->args);
	ret = tab->tlen;
	free(tab);
	return (ret);
}
