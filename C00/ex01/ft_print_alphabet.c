/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsartesc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:14:38 by gsartesc          #+#    #+#             */
/*   Updated: 2022/05/05 15:18:51 by gsartesc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(char a)
{
	a = 'a';
	while (a <= 'z')
	{
		write (1, &a, 1);
		a++;
	}
}
