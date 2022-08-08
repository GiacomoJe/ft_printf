/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgiacomo <jefersongiacomo@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 05:09:50 by jgiacomo          #+#    #+#             */
/*   Updated: 2022/08/08 05:10:04 by jgiacomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_int(int x)
{
	int		size;
	char	*str;

	size = 0;
	str = ft_itoa(x);
	size = print_str(str);
	free(str);
	return (size);
}

int	print_unsignint(unsigned int x)
{
	int		size;
	char	*str;

	size = 0;
	str = ft_n_pos(x);
	size = print_str(str);
	free(str);
	return (size);
}
