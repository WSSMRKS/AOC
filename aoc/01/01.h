/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wssmrks <wssmrks@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 00:17:26 by wssmrks           #+#    #+#             */
/*   Updated: 2024/12/06 00:35:08 by wssmrks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "42_libft/libft.h"
#include <fcntl.h>

typedef struct s_nb_list
{
	char		**content;
	int			result;
	t_nb_list	*next;
}				t_nb_list;