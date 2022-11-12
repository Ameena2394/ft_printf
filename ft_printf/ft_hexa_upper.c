/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_upper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammustaf <ammustaf@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:43:17 by ammustaf          #+#    #+#             */
/*   Updated: 2022/11/12 10:43:17 by ammustaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

size_t	ft_hexa_xx(const unsigned int n)
{
	if (n / 16)
		return (ft_hexa_xx(n / 16) + ft_hexa_xx(n % 16));
	else if (!(n / 10))
		ft_char(n + '0');
	else
		ft_char((char) n - 10 + 'A');
	return (1);
}
