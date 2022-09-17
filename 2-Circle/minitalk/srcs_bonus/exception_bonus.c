/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exception_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bbu0704@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 20:06:53 by bahn              #+#    #+#             */
/*   Updated: 2021/08/01 23:17:13 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void	exception(char *exception)
{
	ft_putstr_fd("ERROR : ", 1);
	ft_putstr_fd(exception, 1);
	ft_putchar_fd('\n', 1);
	exit(1);
}
