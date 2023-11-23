/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 13:43:58 by jhuerta-          #+#    #+#             */
/*   Updated: 2023/11/21 23:42:39 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0') //si little es una cadena vacia se devuelve big
		return ((char *)big);
	while (big[i] && i < n) //mientras big[i] no sea el caracter nulo y i sea menor que n
	{ //esto asegura que no se exceda el limite de n
		j = 0;
		while (little[j] && big[i + j]
			&& little[j] == big[i + j] && i + j < n) //***
			j++;
		if (little[j] == '\0') //si little[j] es el caracter nulo se devuelve big + i
			return ((char *)big + i);
		i++; // si no se encuentra una coincidencia se incrementa i
	}
	return (NULL); //si no se encuentra una coincidencia se devuelve NULL
}
//***mientras little[j] no sea el caracter nulo y big[i + j] no sea el caracter nulo,
//y little[j] sea igual a big[i + j] y i + j sea menor que n, si son los caracteres iguales se incrementa j
/*busca la primera aparicion de una subcadena (little) dentro de una cadena mas grande (big),
se limita a n caracteres*/