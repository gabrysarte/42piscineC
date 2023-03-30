/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsartesc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 10:14:42 by gsartesc          #+#    #+#             */
/*   Updated: 2022/05/20 11:43:16 by gsartesc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	num;
	int	i;

	num = nb;
	i = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (++i <= power)
	{
		nb *= num;
	}
	return (nb);
}
