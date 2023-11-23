/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:26:32 by jhuerta-          #+#    #+#             */
/*   Updated: 2023/11/22 00:26:16 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	if (!s) //si el puntero a la cadena es nulo, se retorna NULL
		return (NULL);
	if (start > ft_strlen(s)) //si star es mayor que la longitud de la cadena, se retorna una cadena vacia
		return (ft_strdup(""));
	if (len > ft_strlen(s + start)) //si len es mayor que la longitud de la cadena desde start
		len = ft_strlen(s + start); //se asigna a len la longitud de la cadena desde start
	ptr = (char *)malloc(sizeof(char) *(len + 1)); //se asigna memoria para la cadena, len + 1,tamaño de subcadena mas null
	if (!ptr) //si no se puede asignar memoria, se retorna NULL
		return (NULL);
	i = 0; //se hace un seguimiento de la posicion en la cadena
	while (i < len && s[start + i]) //se inicia un bucle para copiar la subcadena, desde start en la cadena s,
	{ //hasta que se llegue a len o al caracter nulo
		ptr[i] = s[start + i]; //cada caracter se copia en la posicion correspondiente de ptr
		i++;
	}
	ptr[i] = '\0'; //despues de copiar todos los caracteres se agrega el caracter nulo
	return (ptr);
}
/*se usa para extraer una subcadena de una cadena*/