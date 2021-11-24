/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 09:26:59 by ameunier          #+#    #+#             */
/*   Updated: 2021/10/04 09:27:02 by ameunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t slen)
{
	size_t	i;
	size_t	c;
	size_t	n_len;
	char	*hay;

	i = 0;
	hay = (char *)s;
	n_len = ft_strlen(find);
	if (n_len == 0 || s == find)
		return (hay);
	while (hay[i] != '\0' && i < slen)
	{
		c = 0;
		while (hay[i + c] != '\0' && find[c] != '\0'
			&& hay[i + c] == find[c] && i + c < slen)
			c++;
		if (c == n_len)
			return (hay + i);
		i++;
	}
	return (0);
}
