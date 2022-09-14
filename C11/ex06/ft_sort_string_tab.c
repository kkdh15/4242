/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohyunki <dohyunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:58:37 by dohyunki          #+#    #+#             */
/*   Updated: 2022/09/13 17:53:53 by dohyunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_arrlen(char **tab)
{
	int	len;

	len = 0;
	while (tab[len])
		len++;
	return (len);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (1)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] == '\0' & s2[i] == '\0')
			break ;
		i++;
	}
	return (0);
}

void	ft_swap(char **tab)
{
	int		i;
	int		j;
	char	*tmp;
	int		len;

	len = ft_arrlen(tab);
	i = 0;
	while (i < length - 1)
	{
		j = i + 1;
		while (j < length)
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	ft_sort_string_tab(char **tab)
{
	ft_swap(tab);
}
