/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:27:18 by jhuerta-          #+#    #+#             */
/*   Updated: 2023/11/23 19:14:31 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *s, char c) //static significa que solo se puede usar en este archivo
{
	int	i; //se usa como indice
	int	word; //se usa para el numero de palabras encontradas

	i = 0;
	word = 0;
	while (s && s[i]) //recorre la cadena de caracteres s hasta que llegue al final
	{
		if (s[i] != c) //si el caracter en la posicion i es diferente de c
		{
			word++; //si es asi se incrementa el contador de palabras
			while (s[i] != c && s[i]) //se recorre la cadena hasta que se encuentre un caracter igual a c o hasta que se llegue al final de la cadena
				i++; //y se incrementa el indice
		}
		else //si el caracter es igual a c se avanza en la cadena sin incrementar  el contador
			i++;
	}
	return (word); //despues de terminar se devuelve el valor del contador de palabras
}

static int	ft_size_word(char const *s, char c, int i)
{
	int	size; //iniciamos una variable para contar el tamaño de las palabras

	size = 0;
	while (s[i] != c && s[i]) //mientras el caracter en la posicion i sea diferente de c y no sea el final de la cadena
	{ //esto significa que el bucle se ejecutara hasta que se encuentre un caracter igual a c o hasta que se llegue al final de la cadena
		size++; //se incrementa el contador de tamaño
		i++; //se incrementa el indice para avanzar en la cadena
	}
	return (size); //se devuelve el tamaño de la palabra
}

static void	ft_free(char **strs, int j)
{
	while (j--) //se recorre la cadena hasta que j sea igual a 0
		free(strs[j]); //se libera la memoria asignada a cada palabra
	free(strs); //se libera la memoria asignada a la cadena
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**strs;
	int		size;
	int		j;

	i = 0;
	j = -1;
	strs = (char **)malloc(sizeof(char *) * (ft_count_word(s, c) + 1)); //se asigna memoria segun el numero de palabras que tenga la cadena + 1 el null
	if (!strs) //si no se asigno memoria se devuelve null
		return (NULL);
	while (++j < ft_count_word(s, c)) //se recorre la cadena hasta que j sea igual al numero de palabras mientras se sigue avanzando
	{
		while (s[i] == c) //mientras el caracter en la posicion i sea igual a c
			i++; //avanaza en la cadena
		size = ft_size_word(s, c, i); //determinamos el tamaño de la palabra
		strs[j] = ft_substr(s, i, size); //extraemos la palabra de la cadena y la guardamos en strs
		if (!(strs[j])) //si falla se libera memoria y se devuelve null
		{
			ft_free(strs, j);
			return (NULL);
		}
		i += size; //se actualiza el indice para avanzar en la cadena
	}
	strs[j] = 0; //se agrega el null al final de la cadena
	return (strs); //por ultimo se devuelve la cadena con las palabras separadas
}
/*toma una cadeba de caracteres y las divide en palabras separadas*/
/*ft_count_word cuenta el numero de palabras de una cadena*/
/*ft_size_word calcula el tamaño de una palabra de una cadena*/
/*ft_free se encarga en liberar la memoria asignada a la cadena*/