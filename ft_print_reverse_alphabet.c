/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bscamand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 11:36:11 by bscamand          #+#    #+#             */
/*   Updated: 2020/07/16 11:51:01 by bscamand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char ralphabet;

	ralphabet = 'z';
	while (ralphabet != 'a' - 1)
	{
		write(1, &ralphabet, 1);
		ralphabet--;
	}
}
