/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinchar.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <cmalfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 07:14:01 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/02/01 07:22:40 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

char	*ft_strjoinchar(char *s1, char s2)
{
	char	*str;
	int		i;

	i = -1;
	if (!(str = (char*)malloc(sizeof(char) * (ft_strlen((char*)s1) + 2))))
		return (NULL);
	while (*s1)
	{
		str[++i] = *s1;
		s1++;
	}
	str[++i] = s2;
	str[++i] = '\0';
	return (str);
}
