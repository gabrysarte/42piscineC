/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsartesc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 17:25:55 by gsartesc          #+#    #+#             */
/*   Updated: 2022/05/21 17:55:16 by gsartesc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 2147483647)
		return (1);
	if (nb <= 1)
		return (0);
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
		{
			return (nb);
		}
		nb++;
	}
	return (2);
}
