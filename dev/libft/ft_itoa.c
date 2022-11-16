/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndick <ndick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 23:59:14 by ndick             #+#    #+#             */
/*   Updated: 2022/11/16 04:22:18 by ndick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len++;
		n = -n;
	}	
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static	char	*ft_check_minmax(int n)
{
	char	*str;

	if (n == -2147483648)
	{
		str = ft_strdup("-2147483648");
		return (str);
	}
	if (n == 2147483647)
	{
		str = ft_strdup("2147483647");
		return (str);
	}
	else if (n == 0)
	{
		str = ft_strdup("0");
		return (str);
	}
	return (NULL);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		sign;
	int		len;

	sign = 1;
	len = ft_intlen(n);
	if (n < 0)
		sign = -1;
	str = ft_check_minmax(n);
	if (str)
		return (str);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (sign == -1)
		str[0] = '-';
	str[len] = '\0';
	while (n)
	{
		str[--len] = (n * sign) % 10 + '0';
		n /= 10;
	}
	return (str);
}
