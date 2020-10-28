/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bscamand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 14:06:38 by bscamand          #+#    #+#             */
/*   Updated: 2020/07/22 21:03:35 by bscamand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive(int index)
{
	if (index == 0)
		return (0);
	if (index == 1)
	{
		return (1);
	}
	return (ft_recursive(index - 2) + ft_recursive(index - 1));
}

int		ft_fibonacci(int index)
{
	int output;

	output = 0;
	if (index == 0)
		return (0);
	if (index == 1)
	{
		return (1);
	}
	if (index < 0)
		output = -1;
	else
	{
		output = ft_recursive(index - 2) + ft_recursive(index - 1);
	}
	return (output);
}
