/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 09:35:49 by ameunier          #+#    #+#             */
/*   Updated: 2021/11/24 15:35:03 by ameunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minitalk.h"

void	send_str(int pid, char *str)
{
	int		i;
	char	c;
	int		len;

	len = ft_strlen(str);
	while (len)
	{
		i = 8;
		c = *str;
		while (i--)
		{
			if (c >> i & 1)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			usleep(100);
		}
		str++;
		len--;
	}
}

void	error_pid(void)
{
	ft_printf("Bad PID");
	exit (EXIT_FAILURE);
}

int	main(int argc, char **argv)
{
	int	i;
	int	pid;

	if (argc != 3)
	{
		ft_printf("format: ./client <PID> <\"message\">\n");
		exit (EXIT_FAILURE);
	}
	else
	{
		i = 0;
		while (argv[1][i])
		{
			if (!ft_strchr("0123456789", argv[1][i++]))
				error_pid();
		}
	}
	pid = ft_atoi(argv[1]);
	send_str(ft_atoi(argv[1]), argv[2]);
	return (0);
}
