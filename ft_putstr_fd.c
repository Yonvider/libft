/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:42:09 by jhuerta-          #+#    #+#             */
/*   Updated: 2023/11/20 23:24:14 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s) //verificamos que s no sea nulo	
	{
		while (*s) //mientras s no sea nulo
			write(fd, s++, 1); //escribimos en el descriptor de archivos especifico, y aumentamos el puntero para recorrer la cadena
	}
}
/*se usa para escribir una cadena de caracteres en un descriptor de archivos*/