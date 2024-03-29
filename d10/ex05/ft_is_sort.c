/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 18:05:16 by mchan             #+#    #+#             */
/*   Updated: 2019/04/09 20:21:23 by mchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		index;

	index = 0;
	while (index + 1 < length)
	{
		if ((*f)(tab[index], tab[index + 1]) > 0)
			return (0);
		index++;
	}
	return (1);
}
