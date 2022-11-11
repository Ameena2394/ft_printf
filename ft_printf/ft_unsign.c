/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsign.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammustaf <ammustaf@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:29:25 by ammustaf          #+#    #+#             */
/*   Updated: 2022/11/09 19:29:25 by ammustaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

size_t	ft_unsign(const unsigned int n)
{
	char	s;
	int		c;

	c = 0;
	if (n == 0)
		return (write(1, "0", 1));
	else if (n > 9)
	{
		c += ft_unsign(n / 10);
		c += ft_unsign(n % 10);
	}
	else
	{
		s = (n + '0');
		c += write(1, &s, 1);
	}
	return (c);
}
