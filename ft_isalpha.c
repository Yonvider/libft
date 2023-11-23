/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:53:25 by jhuerta-          #+#    #+#             */
/*   Updated: 2023/11/20 22:06:24 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) //si c es mayor de A o menor de Z o mayor de a o menor de z
		return (1); //devolvemos 1 indicando que es alfabetico
	return (0); //devolvemos 0 indicando que no es alfabetico
}
/*comprobamos si el caracter es alfabetico*/