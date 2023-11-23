/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:41:31 by jhuerta-          #+#    #+#             */
/*   Updated: 2023/11/20 22:52:36 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1); //escribe el caracter c en el archivo especificado
}
//file descriptor (descriptor de archivo) es un numero entero que identifica un archivo abierto en un proceso
/*se encarga de escribir el caracter en el archivo especificado*/