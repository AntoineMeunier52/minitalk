/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 09:31:16 by ameunier          #+#    #+#             */
/*   Updated: 2021/10/04 09:31:19 by ameunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t count)
{
	unsigned char	*c_ptr;

	c_ptr = (unsigned char *)pointer;
	while (count-- > 0)
		*(c_ptr++) = (unsigned char)value;
	return (pointer);
}
