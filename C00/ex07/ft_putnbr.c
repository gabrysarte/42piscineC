/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsartesc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:34:09 by gsartesc          #+#    #+#             */
/*   Updated: 2022/05/10 16:19:52 by gsartesc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_amp(char *c, int i)
{
	if (i == 0)
	{
		write(1, "0", 1);
	}
	while (i != 0)
	{
		i--;
		write(1, &c[i], 1);
	}
}

void	ft_putnbr(int nb)
{
	int		i;
	char	c[12];
	int		mod;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	i = 0;
	if (nb < 0)
	{	
		nb = nb * (-1);
	}
	while (nb != 0)
	{
		mod = nb % 10;
		c[i] = mod + 48;
		nb = nb / 10;
		i++;
	}
	ft_amp(c, i);
}
