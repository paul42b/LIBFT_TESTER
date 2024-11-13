/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi_tester.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbuchter <pbuchter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:55:49 by pbuchter          #+#    #+#             */
/*   Updated: 2024/11/13 17:01:42 by pbuchter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../../libft.h"

char ft_toupper1(unsigned int index, char c)
{
    (void)index;
    if (c >= 'a' && c <= 'z')
        return (c - 'a' + 'A');
    return (c);
}

int strmapi_tester(void)
{
	int		err_flag = 1;
	char	*result = ft_strmapi("hello worLD", ft_toupper1);


	if (strcmp(result, "HELLO WORLD") != 0)
		err_flag = 0;
	free(result);
    return (err_flag);
}
