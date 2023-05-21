/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mileca <mileca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:51:55 by mileca            #+#    #+#             */
/*   Updated: 2023/05/18 21:09:00 by mileca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_size;
	size_t	dst_initial_size;

	i = 0;
	if (!dst && size == 0)
		return (ft_strlen(src));
	dst_size = ft_strlen(dst);
	dst_initial_size = ft_strlen(dst);
	if (dst_size >= size)
		return (size + ft_strlen(src));
	while (src[i] != '\0' && i < (size - dst_initial_size - 1))
	{
		dst[dst_size] = src[i];
		dst_size += 1;
		i += 1;
	}
	dst[dst_size] = '\0';
	return (dst_initial_size + ft_strlen(src));
}
