/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:25:30 by jhuerta-          #+#    #+#             */
/*   Updated: 2023/11/20 22:06:35 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127) //si c es mayo a 0 y menor a 127
		return (1); //devllvemos 1 indicando que es ascii
	return (0); //devolvemos 0 indicando que no es ascii
}
/*comprobamos si el caracter es ascii*/