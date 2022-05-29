/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetras- <emetras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:16:40 by emetras-          #+#    #+#             */
/*   Updated: 2022/05/29 03:34:42 by emetras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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

int	main(int argc, char **argv)
{
	ft_print_params(argc, argv);
}
