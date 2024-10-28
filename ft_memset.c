/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musyilma <musyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:06:09 by musyilma          #+#    #+#             */
/*   Updated: 2024/10/28 14:10:37 by musyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;
	size_t			i;

	s = b;
	i = 0;
	while (i < len)
	{
		*(s + i) = c;
		i++;
	}
	return (b);
}

int main()
{
	int a[]={1,2,3};
	ft_memset(a,255,4);
	ft_memset(a,-8,2);
	ft_memset(a,-232,1);
	printf("%d",a[0]);
}