/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mileca <mileca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:30:40 by mileca            #+#    #+#             */
/*   Updated: 2023/05/11 19:28:12 by mileca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
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
        printf("%c", ft_toupper(chr)); 
        i++; 
    } 
}*/