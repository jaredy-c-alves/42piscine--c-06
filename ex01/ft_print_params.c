/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapistr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:38:40 by jcapistr          #+#    #+#             */
/*   Updated: 2022/09/01 14:38:48 by jcapistr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	argv++;
	while (argc - 1)
	{
		while (**argv)
		{
			write(1, &(**argv), 1);
			(*argv)++;
		}
		write(1, "\n", 1);
		argv++;
		argc--;
	}
	return (0);
}
