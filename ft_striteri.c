/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musyilma <musyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:19:26 by musyilma          #+#    #+#             */
/*   Updated: 2024/10/29 12:50:12 by musyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

void b(unsigned int a,char *b)
{
	int i;
	i=0;
	if(a%2==1 && b[i]>='a' && b[i]<='z')
	{
		b[i]-=32;	
	}
}


int main()
{
	char a[]="mustafa";
	ft_striteri(a,b);
	printf("%s",a);
}