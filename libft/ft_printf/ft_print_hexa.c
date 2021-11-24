/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 09:18:44 by ameunier          #+#    #+#             */
/*   Updated: 2021/10/04 09:19:21 by ameunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_print_hexa(t_printl *tab, int c)
{
	unsigned int	j;

	j = va_arg(tab->args, int);
	if (c == 88)
		tab->tlen += ft_putnbr_base(j, "0123456789ABCDEF");
	if (c == 120)
		tab->tlen += ft_putnbr_base(j, "0123456789abcdef");
}
