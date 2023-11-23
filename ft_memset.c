/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:49:03 by jhuerta-          #+#    #+#             */
/*   Updated: 2023/11/20 22:49:05 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n) //s puntero al bloque de memoria a llenar, c valor a llenar, n numero de bytes a llenar
{
	unsigned char	*p; //declaramos un puntero de tipo unsigned char para recorrer el bloque de memoria

	p = s; //asignamos a p la direccion de memoria de s para asegurar que el puntero p apunte al inicio del bloque de memoria
	while (n--) //usamos el bucle que se ejecuta n veces y decrementa n en cada iteracion
	{
		*p++ = (unsigned char)c; //asignamos a la direccion de memoria de p el valor de c y luego incrementamos el puntero p
	}
	return (s); //devuelve el puntero s que apunta al bloque de memoria lleno.
}
/*se utiliza para llenar un bloque de memoria con un valor especifico*/