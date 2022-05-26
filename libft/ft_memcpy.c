/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 14:59:15 by bschende          #+#    #+#             */
/*   Updated: 2021/08/23 18:25:56 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		i;
	char	*temp;
	char	*temp2;

	i = 0;
	if (!dest && !src)
		return (NULL);
	temp2 = (char *)dest;
	temp = (char *)src;
	while (i < (int)n)
	{
		*(temp2 + i) = *(temp + i);
		i++;
	}
	return (dest);
}
