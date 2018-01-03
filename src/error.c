/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourmea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 20:13:57 by pbourmea          #+#    #+#             */
/*   Updated: 2017/12/30 20:22:26 by pbourmea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cookielem_in.h"
#include <stdio.h>

void		ft_error(unsigned long motif)
{
	if (motif == 1)
		ft_putendl(ERR_ALLOC);
	else if (motif == 2)
		ft_putendl("ERROR\n");
	else if (motif == 3)
		ft_putendl("error format input\n");
	exit(-1);
}
