/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 09:30:29 by hmorishi          #+#    #+#             */
/*   Updated: 2021/02/21 10:52:38 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_draw_first_line(int x, int i)
{
	while (i <= x)
	{
		if (i == 1 || i == x)
		{
			ft_putchar('A');
			i++;
		}
		else
		{
			ft_putchar('B');
			i++;
		}
	}
}

void	ft_draw_last_line(int x, int i)
{
	while (i <= x)
	{
		if (i == 1 || i == x)
		{
			ft_putchar('C');
			i++;
		}
		else
		{
			ft_putchar('B');
			i++;
		}
	}
}

void	ft_draw_other_line(int x, int i)
{
	while (i <= x)
	{
		if (i == 1 || i == x)
		{
			ft_putchar('B');
			i++;
		}
		else
		{
			ft_putchar(' ');
			i++;
		}
	}
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (j <= y)
	{
		if (j == 1)
		{
			ft_draw_first_line(x, i);
		}
		else if (j == y)
		{
			ft_draw_last_line(x, i);
		}
		else
		{
			ft_draw_other_line(x, i);
		}
		i = 1;
		j++;
		ft_putchar('\n');
	}
}
