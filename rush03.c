/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 09:12:36 by yimanish          #+#    #+#             */
/*   Updated: 2021/02/21 11:01:21 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_draw_horizonal(int x, int i)
{
	if (i == 1)
	{
		ft_putchar('A');
	}
	else if (i == x)
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar('B');
	}
}

void	ft_draw_vertical(int x, int i, char a, char b)
{
	if (i == 1 || i == x)
	{
		ft_putchar(a);
	}
	else
	{
		ft_putchar(b);
	}
}

void	ft_draw_last(int i, int j, int y)
{
	if ((i == 1 && j == 1) || (i == 1 && j == y))
	{
		ft_putchar('A');
	}
	else
	{
		ft_putchar('C');
	}
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while ((i * j) != (x * y))
	{
		if (j == 1 || j == y)
		{
			ft_draw_horizonal(x, i);
		}
		else
		{
			ft_draw_vertical(x, i, 'B', ' ');
		}
		i++;
		if ((i - 1) == x)
		{
			ft_putchar('\n');
			j++;
			i = 1;
		}
	}
	ft_draw_last(i, j, y);
	ft_putchar('\n');
}
