/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptn.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 09:14:59 by ameunier          #+#    #+#             */
/*   Updated: 2021/10/04 09:16:59 by ameunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_print_ptn(t_printl *tab)
{
	unsigned long	j;

	j = (unsigned long)va_arg(tab->args, void *);
	write(1, "0x", 2);
	if (!j)
	{
		write (1, "0", 1);
		tab->tlen += 3;
		return ;
	}
	tab->tlen += (ft_putnbr_base(j, "0123456789abcdef") + 2);
}
