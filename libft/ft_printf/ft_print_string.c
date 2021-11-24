/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 09:12:50 by ameunier          #+#    #+#             */
/*   Updated: 2021/10/04 09:14:06 by ameunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_print_string(t_printl *tab)
{
	char	*str;
	int		cpt;

	str = va_arg(tab->args, char *);
	if (!str)
		str = "(null)";
	cpt = 0;
	while (*str)
	{
		write(1, str, 1);
		str++;
		cpt++;
	}
	tab->tlen += cpt;
}
