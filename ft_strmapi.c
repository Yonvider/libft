/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:36:04 by jhuerta-          #+#    #+#             */
/*   Updated: 2023/11/21 23:26:13 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	size_t	index;

	if (!s || !f) //verificamos si s o f son nulos
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1)); //se reserva memoria para ptr, la cantidad de memoria reservada es igual al tamaño de la cadena s + 1
	if (!ptr) //si la asignacion de memoria falla, se devuelve NULL
		return (NULL);
	index = 0;
	while (s[index]) //mientras el caracter de la posicion index de la cadena s no sea nulo
	{
		ptr[index] = f(index, s[index]); //asignamos a ptr el resultado de llamar a la funcion con los argumentos index y s[index](***)
		index++; //despues de cada iteracion se incrementa 1
	}
	ptr[index] = '\0'; //despues de recorrer toda la cadena se asigna el caracter nulo
	return (ptr); //por ultimo devuelvemos el puntero ptr que contiene la cadena despues de aplicar la funcion f a cada caracter de la cadena
}
//f es un puntero a una funcion que toma un entero sin signo y un caracter como argumento y devuelve un caracter
//se usa para aplicar una funcion a cada caracter de una cadena
//*** esto permiete aplicar la funcion f a cada caracter de la cadena s y almacenarlo en ptr
/**/