/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:48:20 by jhuerta-          #+#    #+#             */
/*   Updated: 2023/11/20 22:25:52 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1; //utilizamos los punteros p1 y p2 para recorrer las cadenas de memoria
	unsigned char	*p2;

	p1 = (unsigned char *)s1; //asignamos s1 y s2 a los punteros
	p2 = (unsigned char *)s2;
	while (n > 0) //mientras n sea mayor que 0, esto hace que el bucle recorra las cadenas byte a byte
	{
		if (*p1 != *p2) //si el valor de p1 es distinto al valor de p2
		{
			return (*p1 - *p2); //devuelve la diferencia entre los dos valores
		}
		p1++; //si son iguales, incrementamos los punteros para que apunten a la siguiente posicion de memoria
		p2++;
		n--; //decrementa en uno para avanzar al siguiente byte
	}
	return (0);  //si el bucle termina y no se ha encontrado ninguna diferencia, devuelve 0
}
/*compara los primero n bytes de dos cadenas de caracteres si y s2*/