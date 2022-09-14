/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohyunki <dohyunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:54:37 by dohyunki          #+#    #+#             */
/*   Updated: 2022/09/13 16:55:00 by dohyunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	cnt_sort;
	int	cnt_rev_sort;
	int	cnt_equiv;

	i = 0;
	cnt_sort = 0;
	cnt_rev_sort = 0;
	cnt_equiv = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			cnt_sort++;
		if (f(tab[i], tab[i + 1]) > 0)
			cnt_rev_sort++;
		if (f(tab[i], tab[i + 1]) == 0)
			cnt_equiv++;
		i++;
	}
	if (cnt_sort == length - 1 || cnt_rev_sort == length - 1
		|| cnt_equiv == length - 1)
		return (1);
	return (0);
}
