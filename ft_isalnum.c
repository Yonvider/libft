/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:54:28 by jhuerta-          #+#    #+#             */
/*   Updated: 2023/11/20 22:06:17 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9')) //si c es mayor de a/A o menor de z/Z o mayor de 0 o menor de 9
		return (1); //si es asi devolvemos 1 indicando que es alfanumerico
	return (0); //si no es asi devolvemos 0 indicando que no es alfanumerico
}
/*comprobamos si el caracter es alfanumerico*/