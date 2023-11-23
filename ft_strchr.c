/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 22:20:41 by jhuerta-          #+#    #+#             */
/*   Updated: 2023/11/21 17:21:26 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c) //s puntero a la cadena de caracteres, c caracter a buscar
{
	char	ac; //almacenar el caracter a buscar
	char	*as; //almacenar la cadena de caracteres
	int		i; //contador

	i = 0;
	as = (char *)s; //convertimos as a un puntero a s
	ac = c;
	while (as[i] != ac) //mientras as en la posicion i sea diferente a ac
	{
		if (as[i] == '\0') //si as en la posicion i es igual a \0
		{
			return (NULL); //devolvemos NULL
		}
		i++; //avanzamos
	}
	return ((char *)as + i);
}
//finalmente cuando se encuentra el caracter se dvuelve un puntero a esa posicion en la cadena as,
//se usa una conversion de tipo para asegurar quelo que se devuelva sea un puntero a char
/*busca la primera aparicion de un caracter especifico en una cadena de caracteres y devuelve un puntero*/