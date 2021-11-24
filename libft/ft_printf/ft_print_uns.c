/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uns.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 09:12:03 by ameunier          #+#    #+#             */
/*   Updated: 2021/10/04 09:12:19 by ameunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_print_uns_num(t_printl *tab)
{
	unsigned int	i;
	char			*num;

	i = va_arg(tab->args, unsigned int);
	num = ft_uitoa(i);
	i = 0;
	while (num[i])
		tab->tlen += write(1, &num[i++], 1);
	free(num);
}
