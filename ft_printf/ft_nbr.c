/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammustaf <ammustaf@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:29:08 by ammustaf          #+#    #+#             */
/*   Updated: 2022/11/09 19:29:08 by ammustaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <stdio.h>

static size_t	nb_nb(long nb)
{
	if (nb / 10)
		return (nb_nb(nb / 10) + nb_nb(nb % 10));
	else
		return (ft_char(nb + '0'));
}

size_t	ft_nbr(const int n)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		nb = -nb;
		return (ft_char('-') + nb_nb(nb));
	}
	else
		return (nb_nb(nb));
}
