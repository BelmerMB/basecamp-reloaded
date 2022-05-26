/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetras- <emetras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:55:25 by emetras-          #+#    #+#             */
/*   Updated: 2022/05/24 17:54:09 by emetras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(char **a, char **b)
{
	char	*i;

	i = *a;
	*a = *b;
	*b = i;
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
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_sort_params(int c, char **v)
{
	int	index;

	index = 0;
	while (index < c - 1)
	{
		if (ft_strcmp(v[index], v[index +1]) > 0)
		{
			ft_swap(&v[index], &v[index +1]);
			index = 0;
		}
		index++;
	}
}

int	main(int argc, char **argv)
{
	ft_sort_params(argc, argv);
	ft_print_params(argc, argv);
}
