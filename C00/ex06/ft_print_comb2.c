/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsartesc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:42:17 by gsartesc          #+#    #+#             */
/*   Updated: 2022/05/09 13:00:52 by gsartesc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char *arr)
{
	write (1, &arr[0], 1);
	write (1, &arr[1], 1);
	write (1, " ", 1);
	write (1, &arr[2], 1);
	write (1, &arr[3], 1);
}

void	ft_space(int x, int y)
{
	if (x == 98 && y == 99)
	{
	}
	else
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	char	arr[4];
	int		i;
	int		j;

	arr[0] = '0';
	arr[1] = '0';
	arr[2] = '0';
	arr[3] = '0';
	i = -1;
	while (++i <= 98)
	{
		j = i;
		while (++j <= 99)
		{
			arr[0] = i / 10 + '0';
			arr[1] = i % 10 + '0';
			arr[2] = j / 10 + '0';
			arr[3] = j % 10 + '0';
			ft_write(arr);
			ft_space(i, j);
		}
	}
}
