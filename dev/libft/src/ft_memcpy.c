/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndick <ndick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:55:16 by ndick             #+#    #+#             */
/*   Updated: 2022/10/31 16:36:34 by ndick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}

int	main(void)
{
	int array[5] = {1, 2, 3, 4, 5};
	int * copy = NULL;
	int len = sizeof(int) * 5;
	int	i;

	i = 0;
	copy = (int *)malloc(len);
	ft_memcpy(copy, array, len);
	while (i < 5)
	{
		printf("%d", copy[i]);
		i++;
	}
	return (0);
}