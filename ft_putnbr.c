/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bscamand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 12:24:05 by bscamand          #+#    #+#             */
/*   Updated: 2020/07/21 19:56:23 by bscamand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_outnbr(int nb)
{
	char sym;

	if (nb > 9)
	{
		ft_outnbr(nb / 10);
		ft_outnbr(nb % 10);
	}
	else
	{
		sym = nb + '0';
		write(1, &sym, 1);
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
		}
		else
		{
			write(1, "-", 1);
			ft_outnbr(-nb);
		}
	}
	else
		ft_outnbr(nb);
}
