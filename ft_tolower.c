/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mileca <mileca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:50:52 by mileca            #+#    #+#             */
/*   Updated: 2023/05/11 19:28:02 by mileca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/*#include <stdio.h>
int main(void)
{
    int i = 0;
    char word[] = "edUcaTivE\n"; 
    char chr;
    while (word[i]) { 
        chr = word[i]; 
        printf("%c", ft_tolower(chr)); 
        i++; 
    } 
}*/