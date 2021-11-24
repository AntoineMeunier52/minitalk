/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 09:36:17 by ameunier          #+#    #+#             */
/*   Updated: 2021/10/04 09:36:19 by ameunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	return (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ');
}

int	ft_atoi(const char *str)
{
	int						i;
	unsigned long long int	num;
	int						sign;
	int						c;

	c = 0;
	i = 0;
	num = 0;
	sign = 1;
	while (ft_isspace(*(str + i)))
		i++;
	if (*(str + i) == '-')
		sign = -1;
	if (*(str + i) == '-' || *(str + i) == '+')
		i++;
	while (*(str + i) && *(str + i) >= '0' && *(str + i) <= '9')
	{
		num = num * 10 + (*(str + i++) - '0');
		c++;
	}
	if ((c > 19 && sign > 0) || (num > 9223372036854775807ull && sign > 0))
		return (-1);
	if ((c > 19 && sign < 0) || (num > 9223372036854775808ull && sign < 0))
		return (0);
	return (num * sign);
}
