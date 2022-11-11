/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammustaf <ammustaf@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:29:20 by ammustaf          #+#    #+#             */
/*   Updated: 2022/11/09 19:29:20 by ammustaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static size_t	ft_address(const unsigned long n)
{
	if (n / 16)
		return (ft_address(n / 16) + ft_address(n % 16));
	else if (!(n / 10))
		ft_char(n + '0');
	else
		ft_char((char) n - 10 + 'a');
	return (1);
}

size_t	ft_ptr(void *add)
{
	if (add == 0)
		return (ft_str("0x0"));
	ft_str("0x");
	return (2 + ft_address((unsigned long) add));
}