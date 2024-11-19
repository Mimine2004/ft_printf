/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <hhecquet@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 08:09:09 by hhecquet          #+#    #+#             */
/*   Updated: 2024/11/19 08:10:15 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_null_str(t_flags flags, int *count)
{
	(void)count;
	if (flags.point)
	{
		if (flags.sizep >= 6)
			return (6);
		return (0);
	}
	return (6);
}

int	ft_putstring(char *str, t_flags flags)
{
	int		len;
	int		count;

	count = 0;
	if (!str)
	{
		len = handle_null_str(flags, &count);
		if (!flags.minus && flags.format > len)
			count += putformat(flags.format - len, flags);
		if (len)
			write(1, "(null)", len);
		if (flags.minus && flags.format > len)
			count += putformat(flags.format - len, flags);
		return (count + len);
	}
	len = ft_strlen(str);
	if (flags.point && flags.sizep < len)
		len = flags.sizep;
	if (!flags.minus && flags.format > len)
		count += putformat(flags.format - len, flags);
	write(1, str, len);
	if (flags.minus && flags.format > len)
		count += putformat(flags.format - len, flags);
	return (count + len);
}