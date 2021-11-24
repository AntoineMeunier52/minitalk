/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 09:17:30 by ameunier          #+#    #+#             */
/*   Updated: 2021/10/04 09:18:35 by ameunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_print_num(t_printl *tab)
{
	int		i;
	char	*num;

	i = va_arg(tab->args, int);
	num = ft_itoa(i);
	if (!num)
		return ;
	i = 0;
	while (num[i])
		tab->tlen += write(1, &num[i++], 1);
	free(num);
}
