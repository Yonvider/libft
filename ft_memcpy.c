/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:31:44 by jhuerta-          #+#    #+#             */
/*   Updated: 2023/11/20 22:30:01 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d; //punteros de caracter sin signo
	unsigned char	*s;

	d = (unsigned char *)dest; //asignamos a d y s la direccion de memoria de dest y src
	s = (unsigned char *)src;
	if (!dest && !src) //vereficamos si dest y src son nulos
	{
		return (NULL); //si son nulos devuelve NULL (error)
	}
	while (n--) //este bucle se ejecuta n veces
	{
		*d++ = *s++; //en cada iteracion, copia el valor de s en d y luego incrementa los punteros
	}
	return (dest); //devuelve la direccion de memoria de dest donde se copiara la cadena nueva
}
/*se utiliza para copiar un bloque de memoria de origen a destino*/