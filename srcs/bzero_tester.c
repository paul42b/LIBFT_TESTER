/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero_tester.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbuchter <pbuchter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:50:34 by pbuchter          #+#    #+#             */
/*   Updated: 2024/11/13 13:54:25 by pbuchter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <stdio.h>

int	bzero_tester(void)
{
	char str[4] = {'A','B','C','D'} ;

	ft_bzero(str, 3);
	if (str[0] == 0 && str[2] == 0 && str[3] != 0)
		return (1);
	else
		return (0);
}
