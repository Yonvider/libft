/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:50:16 by jhuerta-          #+#    #+#             */
/*   Updated: 2023/11/21 18:07:33 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const*s1, char const *s2)
{
	char	*ptr; //almacena la nueva cadena de caracteres
	size_t	len_s1; //almacena la longitud de la cadena s1
	size_t	len_s2; //almacena la longitud de la cadena s2

	if (!s1 || !s2) //se verifica si alguna de las cadenas es nula
		return (NULL);
	len_s1 = ft_strlen(s1); //calculamos la longutudes de las cadenas y las almacenamos en las variables len_s1 y len_s2
	len_s2 = ft_strlen(s2);
	ptr = malloc(len_s1 + len_s2 + 1); //asignamos memoria para la nueva cadena de caracteres, la longitud es la suma de len_s1 y len_s2 + 1 para el caracter nulo
	if (!ptr)
		return (NULL); //si falla la asignacion de memoria devolvemos NULL
	ft_memcpy(ptr, s1, len_s1); //se usa la funcion memcpy para copiar los caracteres de s1 y s2 en ptr
	ft_memcpy(ptr + len_s1, s2, len_s2); //se usa la funcion memcpy para copiar los caracteres de s1 antes que s2 en ptr
	ptr[len_s1 + len_s2] = '\0'; //agregamos caracter nulo al final de la nueva cadena 
	return (ptr); //finalmente devolvemos la nueva cadena de caracteres
}
//toma dos cadenas de caracteres y las concatena en una nueva cadena de caracteres