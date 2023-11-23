/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:38:11 by jhuerta-          #+#    #+#             */
/*   Updated: 2023/11/21 17:47:12 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *)) 
{
	size_t	i;

	if (!s || !f) //verificamos que los argumentos no sean nulos
		return ; //si es asi devolvemos nada
	i = 0;
	while (s[i]) //se ejecuta el bucle mientras s no sea nulo
	{
		while (s[i]) //mientras no sea nulo
		{
			(*f)(i, &s[i]); //llamamos a la funcion f con los argumentos i y &s[i]
			i++; //despues de eso pasamos al siguiente caracter de la cadena
		}
	}
}
//tomamos dos argumentos a una cadena de caracteres (char *s) 
//y un puntero a una funcion (void (*f)(unsigned int, char *))
//esta funcion se utiliza para duplicar una operacion en cada caracter de la cadena