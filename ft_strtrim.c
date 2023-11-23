/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:59:23 by jhuerta-          #+#    #+#             */
/*   Updated: 2023/11/22 00:11:26 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str; //puntero a char para almacenar la cadena
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	if (!s1 || !set) //se verifica que s1 y set no sean nulos
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i])) //se usa el bucle para avanzar en la cadena hasta que se encuentre un caracter que no este en set
		i++; //se incrementa hasta que se encuentre un caracter que no este en set
	j = ft_strlen(s1);
	if (i == j) //si i es igual a j, quiere decir que todos los caracteres de s1 estan en set
		return (ft_strdup(""));
	while (j > i && ft_strchr(set, s1[j])) //se retrocede desde el final hasta encontrar el ultimo caracter que no este presente en set
		j--; //se decrementa hasta que se encuentre un caracter que no este en set
	str = (char *)malloc(sizeof(char) * (j - i + 2)); //se reserva memoria para la cadena ***
	if (!str)
		return (NULL); //si no se puede reservar memoria, se retorna NULL
	while (i <= j) //se copia la subcadena en str
		str[k++] = s1[i++];
	str[k] = '\0'; //se agrega el caracter nulo al final de la cadena
	return (str); //devuelve la cadena
}
//*** la cantidad de memoria necesarias se calcula j - i, es la longitud de la subcadena
//sin los caracteres no deseados, se le suma 2 para tener en cuenta el caracter nulo
/*se utiliza para elimianr los carateres especificados en el conjunto set*/