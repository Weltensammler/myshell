/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 13:32:04 by bschende          #+#    #+#             */
/*   Updated: 2021/08/25 04:22:16 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	char	*new;

	new = ft_calloc(ft_strlen(string) + 1, sizeof (*string));
	if (!new)
		return (NULL);
	ft_memcpy(new, string, ft_strlen(string));
	return (new);
}
