/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angavrel <angavrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 15:11:26 by angavrel          #+#    #+#             */
/*   Updated: 2019/09/04 10:33:28 by cphillip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		while (*av[1])
		{
			if (*av[1] >= 'A' && *av[1] <= 'Z')
			{
				*av[1] += 32;
				write(1, av[1], 1);
			}
			else if (*av[1] >= 'a' && *av[1] <= 'z')
			{
				*av[1] -= 32;
				write(1, av[1], 1);
			}
			else
				write(1, av[1], 1);
			av[1]++;
		}
	}
	write(1, "\n", 1);
	return (1);
}
