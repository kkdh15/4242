/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohyunki <dohyunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:10:28 by dohyunki          #+#    #+#             */
/*   Updated: 2022/09/15 16:21:20 by dohyunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int		sum;
	char	*addr;
	int		sign;

	addr = str;
	sum = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		sum = sum * 10 + *str - '0';
		str++;
	}
	return (sum * sign);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
		ft_putnbr(nb);
	}
	else if (nb < 10)
	{
		ft_putchar(nb + '0');
		return ;
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
}

int	operator(int first_num, char op, int second_num)
{
	if (op == '+')
		return (first_num + second_num);
	if (op == '-')
		return (first_num - second_num);
	if (op == '/')
		return (first_num / second_num);
	if (op == '%')
		return (first_num % second_num);
	return (0);
}

int	main(int argc, char **argv)
{
	int		first_num;
	int		second_num;
	int		result;

	if (argc == 4)
	{
		first_num = ft_atoi(argv[1]);
		second_num = ft_atoi(argv[3]);
		if (*argv[2] == '/' && second_num == 0)
		{
			write(1, "Stop : division by zero\n", 24);
			return (0);
		}
		else if (*argv[2] == '%' && second_num == 0)
		{
			write(1, "Stop : modulo by zero\n", 22);
			return (0);
		}
		result = operator(first_num, *argv[2], second_num);
		ft_putnbr(result);
		write(1, "\n", 1);
	}
	else
		return (0);
}
