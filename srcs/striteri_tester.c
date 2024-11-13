/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   striteri_tester.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbuchter <pbuchter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:15:11 by pbuchter          #+#    #+#             */
/*   Updated: 2024/11/13 17:19:48 by pbuchter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../../libft.h"

void to_uppercase(unsigned int index, char *c)
{
    (void)index;
	if (*c >= 'a' && *c <= 'z')
        *c = *c - 32;
}

int striteri_tester(void)
{
	char str[] = "hello world";

	ft_striteri(str, to_uppercase);
	if (strcmp(str, "HELLO WORLD") == 0)
		return 1;
	return (0);
}
