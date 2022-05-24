/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetras- <emetras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:55:25 by emetras-          #+#    #+#             */
/*   Updated: 2022/05/23 19:00:55 by emetras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_params(int c, char **v)
{
	int	index;
	int	letter;

	index = 1;
	while (c > 0 && index < c)
	{
		letter = 0;
		while (v[index][letter])
		{
			ft_putchar(v[index][letter]);
			letter++;
		}
		ft_putchar('\n');
		index++;
	}	
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] && s2[i])
		++i;
	return (s1[i] - s2[i]);
}

void ft_sort_params(int c, char **v)
{
	
}

int	main(int argc, char **argv)
{
	
}