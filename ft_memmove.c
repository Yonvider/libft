/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:50:22 by jhuerta-          #+#    #+#             */
/*   Updated: 2023/11/20 22:37:51 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d; //usmos los punteros para acceder a la ubicacion de memoria de dest y src
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src) //comprobamos si dest y src son nulos
	{
		return (NULL);
	}
	if (s < d) //verificamos si src esta antes de dest, si es asi significa que se solapan
	{
		while (n--) //en ese caso se realiza una copia inversa de n bytes
		{
			d[n] = s[n];
		}
	}
	else //si no se solapan, se realiza una copia normal
		ft_memcpy(d, s, n);
	return (dest); //finalmente devuelve el puntero dest donde se copiara la cadena
}
/*se utiliza para copiar una cadena de un sitio a otro*/
