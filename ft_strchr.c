/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhuerta- <jhuerta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 22:20:41 by jhuerta-          #+#    #+#             */
/*   Updated: 2023/10/15 18:01:41 by jhuerta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ac;
	char	*as;
	int		i;

	i = 0;
	as = (char *)s;
	ac = c;
	while (as[i] != ac)
	{
		if (as[i] == '\0')
		{
			return (NULL);
		}
		i++;
	}
	return ((char *)as + i);
}
