/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetras- <emetras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:28:32 by emetras-          #+#    #+#             */
/*   Updated: 2022/05/25 16:33:42 by emetras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	index;

	index = 0;
	if (min >= max)
	{
		return (NULL);
	}
	ptr = (int *) malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		ptr[index] = min;
		index++;
		min++;
	}
	return (ptr);
}
