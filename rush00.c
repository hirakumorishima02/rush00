/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 09:13:51 by yimanish          #+#    #+#             */
/*   Updated: 2021/02/21 10:45:09 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_draw(int x, int i, char a, char b)
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
			ft_draw(x, i, 'o', '-');
		}
		else
		{
			ft_draw(x, i, '|', ' ');
		}
		i++;
		if ((i - 1) == x)
		{
			ft_putchar('\n');
			j++;
			i = 1;
		}
	}
	ft_putchar('o');
	ft_putchar('\n');
}
