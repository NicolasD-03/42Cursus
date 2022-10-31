/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndick <ndick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:19:44 by ndick             #+#    #+#             */
/*   Updated: 2022/10/31 16:36:24 by ndick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t 	i;
	char	*str;

	i = 0;
	str = b;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (b);
}

int	main(void)
{
	char	array[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
	size_t	size = sizeof(char) * 10;
	int	i = 0;

	while (i < 10)
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");
	ft_memset(array, 0, size);
	i = 0;
	while (i < 10)
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");
	return (0);
}