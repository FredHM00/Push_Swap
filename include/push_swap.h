/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartins <fmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:40:10 by fmartins          #+#    #+#             */
/*   Updated: 2026/06/10 19:45:53 by fmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <float.h>
# include "libft.h"
# include "ops.h"
# include "algo.h"
# include "bench.h"
# include "stack.h"

int		is_valid_number(int ac, char **av, t_config config);
int		*parse_args(int ac, char **av, t_config config);
int		check_str(const char *str);
int		error(void);


#endif
