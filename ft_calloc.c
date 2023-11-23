/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:26:15 by jhuerta-          #+#    #+#             */
/*   Updated: 2023/11/20 22:06:09 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size) //toma dos argumentos nmemb para tamaño de elementos y size para tamaño de cada elemento
{
	void	*ptr; //declaramos un puntero de tipo void para almacenar la direccion de memoria asignada

	if (nmemb == SIZE_MAX || size == SIZE_MAX) //con esto verificamos que no se haya alcanzado el tamaño maximo de memoria, si es asi retornamos NULL
		return (NULL);
	ptr = malloc(nmemb * size); //reservamos memoria para el puntero ptr, multiplicando nmemb por size para obtener el tamaño total de memoria a reservar en ptr
	if (!ptr)
		return (NULL); //si la asignacion de memoria a fallado retornamos NULL
	ft_bzero(ptr, nmemb * size); //llamamos a la funcion bzero para establecer todos los bytes de memoria a 0
	return (ptr); //finalmente devolvemos ptr que apunta a la memoria asignada inicializada en 0
}
/*asignamos memoria y despues la llenamos de 0*/