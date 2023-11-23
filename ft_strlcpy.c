/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:37:34 by jhuerta-          #+#    #+#             */
/*   Updated: 2023/11/21 22:55:24 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0; //se usa para recorrer la cadena de origen
	if (size > 0) //se verifica si el tamaño es mayor a 0
	{
		while (src[i] != '\0' && i < size - 1) //se ejecuta mientras el caracter actual de la cadena de origen no sea el caracter nulo
		{ //y mientras i sea menor al tamaño menos 1
			dest[i] = src[i]; //se copia el caracter actual de la cadena de origen en la cadena de destino
			i++; //se incrementa i para pasar al siguiente caracter
		}
		dest[i] = '\0'; //despues del bucle se agrega el caracter nulo al final de la cadena de destino
	}
	return (ft_strlen(src)); //por ultimo devolvemos la longitud de la cadena de origen
}
/*se usa para copiar una cadena de caracteres desde una cadena de origen a una cadena de destino
con limite de tamaño*/