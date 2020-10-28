/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bscamand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 21:06:25 by bscamand          #+#    #+#             */
/*   Updated: 2020/07/22 21:14:13 by bscamand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive(int nb)
{
	if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive(nb - 1));
}

int		ft_recursive_factorial(int nb)
{
	int output;

	output = 0;
	if (nb < 0)
		output = 0;
	else
	{
		output = ft_recursive(nb);
	}
	return (output);
}
