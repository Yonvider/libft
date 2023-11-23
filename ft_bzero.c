/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:18:58 by jhuerta-          #+#    #+#             */
/*   Updated: 2023/11/20 22:06:01 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n) //s apunta al inicio del bloque de memoria, y n que indica el numero de bytes a borrar
{
	ft_memset(s, 0, n);  //llamamos a la funcion memset para establecer todos los bytes de memoria a 0
}

/*asigna el valor 0 a los primeros n bytes del bloque de memoria apuntado por s*/