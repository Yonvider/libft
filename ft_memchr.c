/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 11:39:08 by jhuerta-          #+#    #+#             */
/*   Updated: 2023/11/20 22:15:17 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p; //utilizamos este puntero para recorrer la cadena de memoria

	p = (unsigned char *)s; //asignamos a p la direccion de memoria de s (usamos una conversion para que que el puntero sea de unsigned char)
	while (n--) //mientras n sea distinto de 0, n-- es para decrementar el valor en cada iteracion
	{
		if (*p == (unsigned char)c) //si el valor de p es igual al caracter que buscamos
			return (p); //devuelve el puntero p
		p++; //incrementamos el puntero para que apunte a la siguiente posicion de memoria
	}
	return (NULL); //si el bucle termina y no se ha encontrado el caracter, devuelve NULL
}

//s es un puntero a la region de memoria en la que se realiza la busqueda
//c es el caracter que se busca
//n es el numero de bytes que se van a buscar
/*se utiliza para buscar un caracter especifico en una cadena, devuelve un puntero al caracter encontrado
usamos unsigned char porque estamos trabajamos con bytes individuales.
o NULL si el caracter no se encuentra*/