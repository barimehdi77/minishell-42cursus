/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjamali <zjamali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 11:41:25 by zjamali           #+#    #+#             */
/*   Updated: 2021/03/26 16:13:01 by zjamali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_h
# define MINISHELL_h

# include <stdio.h>
# include <string.h>
# include "../src/libft/libft.h"
# include "get_next_line.h"
# include "lexer.h"
# include "parser.h"
#include "expansion.h"

#define GREEN "\e[1;32m"
#define RESET "\e[0m"
#define RED "\e[1;91m"
#define CYAN "\e[1;36m"
#define YELLOW "\e[1;33m"
#define PURPLE "\e[1;35m"
#define BLUE "\e[1;34m"
#endif