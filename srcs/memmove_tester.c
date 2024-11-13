/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove_tester.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbuchter <pbuchter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:21:11 by pbuchter          #+#    #+#             */
/*   Updated: 2024/11/13 14:30:53 by pbuchter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <stdio.h>
#include <string.h>

int	memmove_tester(void)
{
	char str[] = "Hello, World!";

	ft_memmove(str, str + 7, 5); 		//moving "World" to the start of the string
	if (str[0] == 'W' && str[7] == 'W')
		return (1);
	return (0);
}
