/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhuerta- <jhuerta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:50:16 by jhuerta-          #+#    #+#             */
/*   Updated: 2023/10/15 18:16:07 by jhuerta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const*s1, char const *s2)
{
	char	*ptr;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	ptr = malloc(len_s1 + len_s2 + 1);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s1, len_s1);
	ft_memcpy(ptr + len_s1, s2, len_s2);
	ptr[len_s1 + len_s2] = '\0';
	return (ptr);
}
