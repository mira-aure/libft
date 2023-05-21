/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mileca <mileca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:27:50 by mileca            #+#    #+#             */
/*   Updated: 2023/05/17 22:04:51 by mileca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	*ft_itoa_base_10(char *result, int nb, int len)
{
	int		i;
	long	nb_into_long;

	i = 0;
	while (i < len && result[i] != '\0')
		i++;
	nb_into_long = nb;
	if (nb_into_long < 0)
	{
		result[i++] = '-';
		nb_into_long = nb_into_long * -1;
	}
	if (i < len && nb_into_long < 10)
	{
		result[i++] = nb_into_long + '0';
		result[i] = '\0';
	}
	else
	{
		ft_itoa_base_10(result, nb_into_long / 10, len);
		ft_itoa_base_10(result, nb_into_long % 10, len);
	}
	return (result);
}

char	*ft_itoa(int n)
{
	int		size;
	long	n_into_long;
	char	*result;

	n_into_long = n;
	size = 0;
	if (n_into_long < 0)
	{
		n_into_long *= -1;
		size++;
	}
	if (n_into_long < 1)
		size++;
	while (n_into_long > 0)
	{
		n_into_long /= 10;
		size++;
	}
	result = (char *) malloc((size + 1) * sizeof(char));
	if (!result)
		return (NULL);
	ft_bzero(result, (size + 1) * sizeof(char));
	return (ft_itoa_base_10(result, n, size));
}
