/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:32:38 by jhuerta-          #+#    #+#             */
/*   Updated: 2023/11/20 22:07:11 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_array(char *x, unsigned int number, long int len) //entra en parametro x, el numero, y la longitud
{
	while (number > 0) //iteramos mientras el numero sea mayor a 0
	{
		x[len--] = 48 + (number % 10); //se coje el numero y se le suma 48 para que sea el numero en ascii
		number = number / 10; //despues se divide el numero entre 10
	}
	return (x); //y finalmente devolvemos la cadena de caracteres
}

static long int	ft_len(int n)
{
	int					len;

	len = 0;
	if (n <= 0) //si n es menor o igual a 0, se incrementa uno para tener encuenta el signo negativo
		len = 1;
	while (n != 0) //despues se usa el bucle para incrementar len en uno por cada digido del numero
	{
		len++;
		n = n / 10; //dividimos el numero entre 10, en cada iteracion
	}
	return (len); //por ultimo devolvemos la longitud
}

char	*ft_itoa(int n)
{
	char				*x;
	long int			len;
	unsigned int		number;

	len = ft_len(n); //primero se llama a la funcion ft_len para obtener la longitud de la cadena
	x = (char *)malloc(sizeof(char) * (len + 1)); //reservamos memoria para la cadena
	if (!(x)) //si no se puede reservar memoria, devolvemos NULL
		return (NULL);
	x[len--] = '\0'; //se le asigna el caracter nulo a la ultima posicion de la cadena
	if (n == 0) //si n es igual a 0, se le asigna el caracter 0 a la primera posicion de la cadena
		x[0] = '0';
	if (n < 0) //si n es menor a 0, se le asigna el caracter - a la primera posicion de la cadena
	{
		number = n * -1;
		x[0] = '-';
	}
	else
		number = n; //si n es mayor a 0, se le asigna el valor de n a number
	x = ft_array(x, number, len); //finalmente se llama a la funcion ft_array para obtener la cadena de caracteres
	return (x); //y se retorna el puntero x que contiene la cadena de caracteres
}
//se usa la funcion ft_len para calcular la cantidad de digitos en un numero entero.
//no usamos ft_strlen porque esta funcion solo funciona con cadenas de caracteres.
//Usamos la funcion ft_len para saber cuanto espacio reservar en memoria para la cadena de caracteres.
/*convierte un numero entero a una cadena de caracteres*/