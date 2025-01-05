/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxriimu <sxriimu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 22:39:35 by sxriimu           #+#    #+#             */
/*   Updated: 2024/11/09 22:41:46 by sxriimu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*retval;

	i = 0;
	j = 0;
	if (ft_strlen((char *)little) == 0)
		return ((char *)big);
	while (big[i] && i < len)
	{
		if (big[i] == little[j])
		{
			while ((big[i + j] == little[j] && big[i + j] != '\0')
				&& (little[j] != '\0' && i + j < len))
			{
				if (j + 1 == ft_strlen((char *)little))
					return (retval = (char *)&big[i], retval);
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char str[] = "je suis celui la";
	char st[] = "celui";
	char *x = ft_strnstr(str, st, 25);
	printf("La chaine trouvé est : %s", x);
}
*/