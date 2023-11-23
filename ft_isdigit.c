/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 23:29:27 by jhuerta-          #+#    #+#             */
/*   Updated: 2023/11/20 22:06:41 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9') //si c es mayo a 0 y menor a 9
		return (1); //devolvemos 1 indicando que es digito
	return (0); //devolvemos 0 indicando que no es digito
}
/*comprobamos si el caracter es digito*/