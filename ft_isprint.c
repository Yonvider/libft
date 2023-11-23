/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:35:59 by jhuerta-          #+#    #+#             */
/*   Updated: 2023/11/20 22:06:47 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126) //si c es mayor a 32 y menor a 126
		return (1); //devolvemos 1 indicando que es imprimible
	return (0); //devolvemos 0 indicando que no es imprimible
}
/*comprobamos si el caracter es imprimible*/