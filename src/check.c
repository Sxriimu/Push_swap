/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxriimu <sxriimu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 18:07:38 by sberete           #+#    #+#             */
/*   Updated: 2025/01/17 19:03:34 by sxriimu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	valid_number(char *str)
{
	long long	value;
	int			sign;
	int			i;

	i = 0;
	sign = 1;
	value = 0;
	if (str[0] == '-' || str[0] == '+')
	{
		if (str[0] == '-')
			sign *= -1;
		i++;
	}
	if (str[i] == '\0')
		return (true);
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (true);
		value = value * 10 + (str[i] - '0');
		if ((sign == 1 && value > INT_MAX) || (sign == -1
				&& (-value) < INT_MIN))
			return (true);
		i++;
	}
	return (false);
}

bool	check_doublon(t_node *ap)
{
	t_node	*current;
	t_node	*check;

	current = ap;
	while (current)
	{
		check = current->next;
		while (check)
		{
			if (current->value == check->value)
				return (true);
			check = check->next;
		}
		current = current->next;
	}
	return (false);
}
