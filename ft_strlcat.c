/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:06:34 by jhuerta-          #+#    #+#             */
/*   Updated: 2023/11/21 18:39:11 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_len; //declaramos las variables para almacenar la longitud de la cadena de caracteres dst y src
	size_t	src_len;

	src_len = ft_strlen(src); //calculamos la longitud de la cadena de origen
	if (NULL == dst && 0 == dstsize) //verificamos si la cadena de destino es nula y el tamaño de la cadena de destino es 0
	{
		return (src_len); //si es asi devolvemos la longitud de la cadena de origen
	}
	dest_len = ft_strlen(dst); //si no se cumple la condicion anterior calculamos la longitud de la cadena de destino
	if (dest_len >= dstsize) //comparamos si la longitud de la cadena de destino es mayor o igual al tamaño de la cadena de destino
	{
		return (src_len + dstsize); //si es asi es que no hay espacio suficiente entonces devolvemos la suma de la cadena mas el tamaño de la cadena de destino
	}
	else
	{
		dstsize -= dest_len; //restamps el tamaño de la cadena de destino menos la longitud de la cadena de destino,
	} //para saber el espacio disponible en la cadena de destino
	ft_strlcpy(dst + dest_len, src, dstsize); 
	return (dest_len + src_len);
}
//finalmente utilizamos ft_strlcpy para copiar la cadena de origen en la cadena de destino
//utilizando el tamaño disponible en dstsize
//por utlimos sumamos las longitudes de las cadenas de destino y origen y devolvemos el resultado
/*se utiliza para concatenar cadenasd de manera segura*/