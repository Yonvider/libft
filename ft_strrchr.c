/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 22:51:02 by jhuerta-          #+#    #+#             */
/*   Updated: 2023/11/21 23:55:43 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s); //se da el valor de la longitud de la cadena
	while (i >= 0) //mientras i sea mayor o igual a 0
	{
		if (s[i] == (char)c) //se verifica si el caracter en la posicion i es igual a c
			return ((char *)s + i); //si es asi se devuelve un puntero a la posicion 
		i--; //si no se encuentra el caracter se decrementa i
	}
	return (NULL); //si no se encuentra el caracter se devuelve NULL 
}
//se hace char* para asegurar que el tipo de dato sea compatible con la funcion
/*busca la ultima aparicion de un caracter especifico en una cadena*/