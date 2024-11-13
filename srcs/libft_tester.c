/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_tester.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbuchter <pbuchter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:06:49 by pbuchter          #+#    #+#             */
/*   Updated: 2024/11/13 17:56:56 by pbuchter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include "libft_tester.h"
#include <stdio.h>

int	main(void)
{
	if (is_alpha_tester())
		printf ("\033[0;32mft_isalpha OK\033[0m\n");
	else
		printf ("\033[0;31mft_isalpha KO\033[0m\n");

	if (is_digit_tester())
		printf ("\033[0;32mft_isdigit OK\033[0m\n");
	else
		printf ("\033[0;31mft_isdigit KO\033[0m\n");

	if (is_alnum_tester())
		printf ("\033[0;32mft_isalnum OK\033[0m\n");
	else
		printf ("\033[0;31mft_isalnum KO\033[0m\n");

	if (is_ascii_tester())
		printf ("\033[0;32mft_isascii OK\033[0m\n");
	else
		printf ("\033[0;31mft_isascii KO\033[0m\n");

	if (is_print_tester())
		printf ("\033[0;32mft_isprint OK\033[0m\n");
	else
		printf ("\033[0;31mft_isprint KO\033[0m\n");

	if (strlen_tester())
		printf ("\033[0;32mft_strlen OK\033[0m\n");
	else
		printf ("\033[0;31mft_strlen KO\033[0m\n");

	if (toupper_tester())
		printf ("\033[0;32mft_toupper OK\033[0m\n");
	else
		printf ("\033[0;31mft_toupper KO\033[0m\n");

	if (tolower_tester())
		printf ("\033[0;32mft_tolower OK\033[0m\n");
	else
		printf ("\033[0;31mft_tolower KO\033[0m\n");

	if (strchr_tester())
		printf ("\033[0;32mft_strchr OK\033[0m\n");
	else
		printf ("\033[0;31mft_strchr KO\033[0m\n");

	if (strrchr_tester())
		printf ("\033[0;32mft_strrchr OK\033[0m\n");
	else
		printf ("\033[0;31mft_strrchr KO\033[0m\n");

	if (strncmp_tester())
		printf ("\033[0;32mft_strncmp OK\033[0m\n");
	else
		printf ("\033[0;31mft_strncmp KO\033[0m\n");

	if (memset_tester())
		printf ("\033[0;32mft_memset OK\033[0m\n");
	else
		printf ("\033[0;31mft_memset KO\033[0m\n");

	if (memchr_tester())
		printf ("\033[0;32mft_memchr OK\033[0m\n");
	else
		printf ("\033[0;31mft_memchr KO\033[0m\n");

	if (bzero_tester())
		printf ("\033[0;32mft_bzero OK\033[0m\n");
	else
		printf ("\033[0;31mft_bzero KO\033[0m\n");

	if (memcpy_tester())
		printf ("\033[0;32mft_memcpy OK\033[0m\n");
	else
		printf ("\033[0;31mft_memcpy KO\033[0m\n");

	if (memmove_tester())
		printf ("\033[0;32mft_memmove OK\033[0m\n");
	else
		printf ("\033[0;31mft_memmove KO\033[0m\n");

	if (strlcpy_tester())
		printf ("\033[0;32mft_strlcpy OK\033[0m\n");
	else
		printf ("\033[0;31mft_strlcpy KO\033[0m\n");

	if (strnstr_tester())
		printf ("\033[0;32mft_strnstr OK\033[0m\n");
	else
		printf ("\033[0;31mft_strnstr KO\033[0m\n");

	if (strlcat_tester())
		printf ("\033[0;32mft_strlcat OK\033[0m\n");
	else
		printf ("\033[0;31mft_strlcat KO\033[0m\n");

	if (atoi_tester())
		printf ("\033[0;32mft_atoi OK\033[0m\n");
	else
		printf ("\033[0;31mft_atoi KO\033[0m\n");

	if (calloc_tester())
		printf ("\033[0;32mft_calloc OK\033[0m\n");
	else
		printf ("\033[0;31mft_calloc KO\033[0m\n");

	if (strdup_tester())
		printf ("\033[0;32mft_strdup OK\033[0m\n");
	else
		printf ("\033[0;31mft_strdup KO\033[0m\n");

	if (substr_tester())
		printf ("\033[0;32mft_substr OK\033[0m\n");
	else
		printf ("\033[0;31mft_substr KO\033[0m\n");

	if (strjoin_tester())
		printf ("\033[0;32mft_strjoin OK\033[0m\n");
	else
		printf ("\033[0;31mft_strjoin KO\033[0m\n");

	if (strtrim_tester())
		printf ("\033[0;32mft_strtrim OK\033[0m\n");
	else
		printf ("\033[0;31mft_strtrim KO\033[0m\n");

	if (split_tester())
		printf ("\033[0;32mft_split OK\033[0m\n");
	else
		printf ("\033[0;31mft_split KO\033[0m\n");

	if (itoa_tester())
		printf ("\033[0;32mft_itoa OK\033[0m\n");
	else
		printf ("\033[0;31mft_itoa KO\033[0m\n");

	if (strmapi_tester())
		printf ("\033[0;32mft_strmapi OK\033[0m\n");
	else
		printf ("\033[0;31mft_strmapi KO\033[0m\n");

	if (striteri_tester())
		printf ("\033[0;32mft_striteri OK\033[0m\n");
	else
		printf ("\033[0;31mft_striteri KO\033[0m\n");

#ifdef BONUS
	if (lstmap_tester())
		printf ("\033[0;32mft_lstmap/ft_lstnew/ft_lstaddback OK\033[0m\n");
	else
		printf ("\033[0;31mft_lstmap/ft_lstnew/ft_lstaddback KO\033[0m\n");
#endif
	return (0);
}
