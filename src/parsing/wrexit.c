/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrexit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoukri <echoukri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:18:54 by echoukri          #+#    #+#             */
/*   Updated: 2023/05/07 16:19:48 by echoukri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	wrexit(char *str, int code)
{
	write(2, str, ft_strlen(str));
	exit(code);
}