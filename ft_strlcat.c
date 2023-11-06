/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhuerta- <jhuerta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:06:34 by jhuerta-          #+#    #+#             */
/*   Updated: 2023/10/15 18:07:43 by jhuerta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (NULL == dst && 0 == dstsize)
	{
		return (src_len);
	}
	dest_len = ft_strlen(dst);
	if (dest_len >= dstsize)
	{
		return (src_len + dstsize);
	}
	else
	{
		dstsize -= dest_len;
	}
	ft_strlcpy(dst + dest_len, src, dstsize);
	return (dest_len + src_len);
}
