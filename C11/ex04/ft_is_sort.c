/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohyunki <dohyunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:54:37 by dohyunki          #+#    #+#             */
/*   Updated: 2022/09/15 18:16:53 by dohyunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	cnt_sort;
	int	cnt_rev_sort;

	i = 0;
	cnt_sort = 0;
	cnt_rev_sort = 0;
	if (length <= 2)
		return (1);
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			cnt_sort++;
		if (f(tab[i], tab[i + 1]) >= 0)
			cnt_rev_sort++;
		i++;
	}
	if (cnt_sort == length - 1 || cnt_rev_sort == length - 1)
		return (1);
	return (0);
}
