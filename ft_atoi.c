/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:39:47 by jhuerta-          #+#    #+#             */
/*   Updated: 2023/11/20 22:05:53 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (nptr[i] == ' ' || nptr[i] == '\t'
		|| nptr[i] == '\n' || nptr[i] == '\v'
		|| nptr[i] == '\f' || nptr[i] == '\r') //mientras haya espacios, saltos de linea etc seguimos avanzando
		i++;
	if (nptr[i] == '-' || nptr[i] == '+') //si nptr es - o + avanzamos y si es - cambiamos el signo
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9') //mientras nptr sea mayor a 0 y menor a 9
	{
		res = res * 10 + (nptr[i] - '0'); //multiplicamos res por 10 y le sumamos el valor de nptr en la posicion i menos el valor de 0
		i++;
	}
	return (res * sign); //lo que de res lo multiplicamos por el signo
}
/*convierte una cadena de caracteres en un entero*/