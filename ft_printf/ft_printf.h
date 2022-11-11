/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammustaf <ammustaf@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:29:16 by ammustaf          #+#    #+#             */
/*   Updated: 2022/11/09 19:29:16 by ammustaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);

size_t	ft_ptr(void *add);
size_t	ft_char(const char c);
size_t	ft_hexa_x(const unsigned int n);
size_t	ft_hexa_XX(const unsigned int n);
size_t	ft_nbr(const int n);
size_t	ft_str(const char *str);
size_t	ft_unsign(const unsigned int n);


#endif
