/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 09:28:52 by ameunier          #+#    #+#             */
/*   Updated: 2021/10/04 09:28:54 by ameunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_len_word(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && !(str[i] == c))
		i++;
	return (i);
}

int	count_word(char const *str, char c)
{
	int	n;
	int	len_word;

	n = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		len_word = ft_count_len_word(str, c);
		str += len_word;
		if (len_word)
			n++;
	}
	return (n);
}

char	*ft_strmal(char const *str, int len)
{
	char	*dest;
	int		n;

	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	n = 0;
	while (n < len)
	{
		dest[n] = str[n];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}

char	**ft_split(char const *str, char c)
{
	char	**split;
	int		size_split;
	int		word_len;
	int		i;

	size_split = count_word(str, c);
	split = malloc(sizeof(char *) * size_split + 1);
	if (!split)
		return (NULL);
	i = 0;
	while (i < size_split)
	{
		while (*str && *str == c)
			str++;
		word_len = ft_count_len_word(str, c);
		split[i] = ft_strmal(str, word_len);
		if (!split[i])
			return (NULL);
		str += word_len;
		i++;
	}
	split[size_split] = 0;
	return (split);
}
