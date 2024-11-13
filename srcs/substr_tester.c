/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr_tester.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbuchter <pbuchter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:46:46 by pbuchter          #+#    #+#             */
/*   Updated: 2024/11/13 16:01:11 by pbuchter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	substr_tester(void)
{
	char	*str0;
	char	*str1;
	char	*str2;
	int		err_flag;

	err_flag = 0;
	str0 = ft_substr("ABCD", 1, 3);
	str1 = ft_substr("ABCD", 1, 7);
	str2 = ft_substr("ABCD", 7, 2);
	if (strcmp(str0, "BCD") != 0)
		err_flag = 1;
	if (strcmp(str1, "BCD") != 0)
		err_flag = 1;
	if (strcmp(str2, "") != 0)
		err_flag = 1;
	free (str0);
	free (str1);
	free (str2);
	if (err_flag)
		return (0);
	return (1);
}
