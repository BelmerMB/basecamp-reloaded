/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetras- <emetras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 17:43:01 by emetras-          #+#    #+#             */
/*   Updated: 2022/05/29 03:19:45 by emetras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*p;
	int		i;

	i = 0;
	p = malloc(ft_strlen(src));
	if (!p)
		return (NULL);
	while (src[i])
	{
		p[i] = src[i];
		i++;
	}
	printf("%d", i);
	p[i] = '\0';
	return (p);
}
