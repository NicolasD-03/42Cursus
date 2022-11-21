/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndick <ndick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 23:59:14 by ndick             #+#    #+#             */
/*   Updated: 2022/11/21 23:02:21 by ndick            ###   ########.fr       */
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

	str = NULL;
	if (n == -2147483648)
	{
		str = "-2147483648";
	}
	if (n == 2147483647)
	{
		str = "2147483647";
	}
	else if (n == 0)
	{
		str = "0";
	}
	return (str);
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
	if (ft_check_minmax(n))
		return (ft_strdup(ft_check_minmax(n)));
	str = malloc(sizeof(char) * (len + 1));
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
