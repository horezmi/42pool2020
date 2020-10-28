/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bscamand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 21:22:29 by bscamand          #+#    #+#             */
/*   Updated: 2020/07/22 21:02:05 by bscamand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int output;
	int i;

	if (nb == 0)
		output = 1;
	if (nb < 0)
		output = 0;
	else
	{
		output = 1;
		i = 1;
		while (i <= nb)
		{
			output = output * i;
			i++;
		}
	}
	return (output);
}
