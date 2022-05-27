/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetras- <emetras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:45:15 by emetras-          #+#    #+#             */
/*   Updated: 2022/05/26 18:37:21 by emetras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	index;
	int	count;

	count = 0;
	index = 0;
	while (tab[index] != 0)
	{
		if (f(tab[index]) == 1)
			count++;
		index++;
	}
	return (count);
}
