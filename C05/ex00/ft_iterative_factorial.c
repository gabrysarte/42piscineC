/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsartesc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:34:32 by gsartesc          #+#    #+#             */
/*   Updated: 2022/05/19 14:57:37 by gsartesc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	x;
	int	fact;

	x = 1;
	fact = 1;
	if (nb < 0)
		return (0);
	while (x <= nb)
	{
		fact = fact * x;
		x++;
	}
	return (fact);
}
