/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 10:11:29 by jhuerta-          #+#    #+#             */
/*   Updated: 2023/11/21 23:34:18 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0')) //***
	{
		if (s1[i] != s2[i]) //se verefica si el caracter actual de s1 es diferente al caracter actual de s2
			return ((unsigned char)s1[i] - (unsigned char)s2[i]); //si son diferentes se devuelve la diferencia entre los dos caracteres
		i++; //si son iguales se incrementa i, para pasar al siguiente caracter
	}
	return (0); //si se recorren los n caracteres sin encontrar diferencias se devuelve 0
}
//***se inicia un bucle que se ejecuta mientras i sea menor que n y s1[i] y s2[i] sean diferentes de 0
/*compara los primero n caracteres de dos cadenas*/