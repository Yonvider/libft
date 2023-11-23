/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 22:34:14 by jhuerta-          #+#    #+#             */
/*   Updated: 2023/11/21 17:37:36 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr; //puntero a la cadena de caracteres
	int		i; //para iterar en la cadena de caracteres

	i = 0;
	ptr = malloc(ft_strlen(s) + 1); //asignamos memoria, igual a la longitud de la cadena + 1 (incluir caracter nulo)
	if (!ptr) //verificamos si se asigno bien la memoria si no es asi devolvemos NULL
	{
		return (NULL);
	}
	while (s[i]) //usamos un bucle para copiar cada caracter de la cadena original (s) en la nueva cadena (ptr)
	{
		ptr[i] = s[i]; //se copia hasta el numero null
		i++;
	}
	ptr[i] = '\0'; //despues de copiar todos los caracteres se agrega el caracter nulo
	return (ptr); //fianlmente devolvemos el puntero a la nueva cadena
}
/*se utiliza para duplicar una cadena de caracteres en memoria*/