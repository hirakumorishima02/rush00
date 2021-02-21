/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 17:07:38 by hmorishi          #+#    #+#             */
/*   Updated: 2021/02/21 10:59:24 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_draw_horizonal(int x, int i, int j)
{
	if (i == 1)
	{
		if (j == 1)
		{
			ft_putchar('/');
		}
		else
		{
			ft_putchar('\\');
		}
	}
	else if (i == x)
	{
		if (j == 1)
		{
			ft_putchar('\\');
		}
	}
	else
	{
		ft_putchar('*');
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

void	ft_draw_last(int i, int j)
{
	if (i == 1 && j == 1)
	{
		ft_putchar('/');
	}
	else if (i == 1 || j == 1)
	{
		ft_putchar('\\');
	}
	else
	{
		ft_putchar('/');
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
			ft_draw_horizonal(x, i, j);
		}
		else
		{
			ft_draw_vertical(x, i, '*', ' ');
		}
		i++;
		if ((i - 1) == x)
		{
			ft_putchar('\n');
			j++;
			i = 1;
		}
	}
	ft_draw_last(i, j);
	ft_putchar('\n');
}
