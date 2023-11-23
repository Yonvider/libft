/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:45:50 by jhuerta-          #+#    #+#             */
/*   Updated: 2023/11/20 23:17:07 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nb; //declaramos un long int para manejar grandes numeros y evitar desbordamientos

	nb = n; 
	if (nb < 0) //se verifica si nb es negativo
	{
		ft_putchar_fd('-', fd); //si es asi se imprime el signo menos
		nb = -nb; //y se actualiza nb a su valor absoluto
	}
	if (nb >= 10) //si nb es mayor o igual a 10
	{
		ft_putnbr_fd(nb / 10, fd); //si es asi significa que tiene mas de un digito, lo dividimos para tener los digitos individuales 
		ft_putnbr_fd(nb % 10, fd); //luego con el resto de la division obtenemos el ultimo digito
	}
	else //si es menor a 10
		ft_putchar_fd(nb + '0', fd); //significa que solo es un digito y se imprime
}
//sumamos '0' a nb para convertirlo en un caracter y poder imprimirlo
//long se usa para manejar grandes numeros y evitar desbordamientos
/*imprime el numero en el descriptor de archivos especifico*/