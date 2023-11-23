/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:43:05 by jhuerta-          #+#    #+#             */
/*   Updated: 2023/11/20 23:07:57 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s) //si s no es nulo (evita errores si pasa un puntero nulo a la funcion)
	{
		while (*s) //mientras s no sea nulo
			write(fd, s++, 1); //escribe el caracter apuntado por s en fd y luego incrementa s
		write(fd, "\n", 1);
	}
}
/*se usa para escribir una cadena de caracteres seguida de un salto de line en un descriptor de archivo especifico*/