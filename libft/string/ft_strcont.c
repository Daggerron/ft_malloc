/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcont.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <cmalfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 18:20:20 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/01/24 00:14:54 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

char	ft_strcont(char *s1, char *s2)
{
	int		i;

	while (*s1 && *s2)
	{
		if (*s1 == *s2)
		{
			i = -1;
			while (s2[++i] && *s1 && (*s1 == s2[i]))
				++s1;
			if (!s2[i])
				return (1);
		}
		else
			++s1;
	}
	return (0);
}
