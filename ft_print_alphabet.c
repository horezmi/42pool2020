/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bscamand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 21:42:12 by bscamand          #+#    #+#             */
/*   Updated: 2020/07/16 11:35:07 by bscamand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet != 'z' + 1)
	{
		write(1, &alphabet, 1);
		alphabet++;
	}
}
