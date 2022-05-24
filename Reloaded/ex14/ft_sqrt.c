/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetras- <emetras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 19:00:21 by emetras-          #+#    #+#             */
/*   Updated: 2022/05/20 18:50:11 by emetras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int				i;
	unsigned int	res;
	unsigned int	number;

	number = nb;
	res = 0;
	i = 1;
	while (res < number)
	{
		res = i * i;
		i++;
	}
	if (res == number)
		return (i - 1);
	else
		return (0);
}
