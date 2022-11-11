/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_XX.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammustaf <ammustaf@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:07:28 by ammustaf          #+#    #+#             */
/*   Updated: 2022/11/11 16:07:28 by ammustaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

size_t	ft_hexa_XX(const unsigned int n)
{
	if (n / 16)
		return (ft_hexa_XX(n / 16) + ft_hexa_XX(n % 16));
	else if (!(n / 10))
		ft_char(n + '0');
	else
		ft_char((char) n - 10 + 'A');
	return (1);
}
