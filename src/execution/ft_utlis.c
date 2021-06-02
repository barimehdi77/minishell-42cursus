/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utlis.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 20:00:11 by mbari             #+#    #+#             */
/*   Updated: 2021/06/02 20:00:59 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/execution.h"

int	ft_count_args(t_args **args)
{
	int		i;
	t_args	*temp;

	i = 0;
	temp = *args;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}

void	ft_do_backups(int flag)
{
	static int	stdin;
	static int	stdou;
	static int	stderr;

	if (flag)
	{
		stdin = dup(STDIN_FILENO);
		stdou = dup(STDOUT_FILENO);
		stderr = dup(STDERR_FILENO);
	}
	else if (!flag)
	{
		dup2(stdin, 0);
		dup2(stdou, 1);
		dup2(stderr, 2);
	}
}

int	ft_put_err(char *input, char *message, int ret)
{
	ft_putstr_fd("minishell: ", 2);
	if (input != NULL)
		ft_putstr_fd(input, 2);
	ft_putendl_fd(message, 2);
	return (ret);
}

void	ft_signal_handler(int sig)
{
	if (sig == SIGINT)
		write(STDOUT_FILENO, "\n", 1);
}