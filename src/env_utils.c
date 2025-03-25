/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:25:57 by akumari           #+#    #+#             */
/*   Updated: 2025/03/25 13:26:50 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

void split_env(char *env_arr, char **key, char  **value)
{
	char *find_equal = ft_strchr(env_arr, '=');
	if(find_equal)
	{
		*key = ft_strndup(env_arr, find_equal - env_arr);
		*value = ft_strdup(find_equal + 1);
	}
	else
	{
		*key = ft_strdup(env_arr);
		*value = NULL;
	}
}

int init_env(t_mini *mini, char **env_arr)
{
	t_env *env;
	t_env *new_env;
	if (!env_arr || !env_arr[0])
        return (1);
	env = malloc(sizeof(t_env));
	if(!env)
		return (FAILURE);
	split_env(env_arr[0], &env->key, &env->value);
	env->next = NULL;
	mini->env = env;

	int i = 1;
	while(env_arr[i] != NULL)
	{
		new_env = malloc(sizeof(t_env));
		if(!new_env)
			return (FAILURE);
		split_env(env_arr[i], &new_env->key, &new_env->value);
		new_env->next = NULL;
		env->next = new_env;
		env = new_env;
		i++;
	}
	return (0);
}
