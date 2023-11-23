/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:09:54 by jhuerta-          #+#    #+#             */
/*   Updated: 2023/11/21 23:11:13 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i]) //mientras s en la posicion i sea diferente de 0
		i++; //en cada iteracion se incrementa i
	return (i); //despues de terminar el bucle se devuelve i, que es la longitud de la cadena
}
/*se usa para calcular la longitud de una cadena de carateres*/