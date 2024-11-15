/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc_tester.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbuchter <pbuchter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:17:44 by pbuchter          #+#    #+#             */
/*   Updated: 2024/11/13 15:23:40 by pbuchter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	calloc_tester(void)
{
	char	*ptr;
	int		err_flag;

	err_flag = 0;
	ptr = ft_calloc(0, 1);
	if (!ptr)
		err_flag = 1;
	free (ptr);
	ptr = ft_calloc(1024, 1024);
	if (!ptr)
		err_flag = 1;
	free (ptr);
	if (err_flag)
		return (0);
	return (1);
}
