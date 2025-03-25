/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 13:25:07 by akumari           #+#    #+#             */
/*   Updated: 2025/03/25 13:24:24 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

int		ft_env(t_mini *mini)
{
	while (mini->env && mini->env->next != NULL)
	{
		ft_putstr_fd(mini->env->key, 1);
		ft_putstr_fd("=", 1);
		ft_putstr_fd(mini->env->value, 1);
		ft_putstr_fd("\n", 1);
		mini->env = mini->env->next;
	}
	if (mini->env)
	{
		ft_putstr_fd(mini->env->key, 1);
		ft_putstr_fd("=", 1);
		ft_putstr_fd(mini->env->value, 1);
	}
	return (SUCCESS);
}
