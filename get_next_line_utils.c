/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: symatevo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 16:09:15 by symatevo          #+#    #+#             */
/*   Updated: 2021/02/08 18:27:57 by symatevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char *memory, char *buffer)
{
	char	*join;
	int		i;
	int		j;

	if (!(join = malloc(sizeof(char) *
					(ft_strlen(memory) + ft_strlen(buffer) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	if (memory)
		while (memory[i] != '\0')
			join[j++] = memory[i++];
	i = 0;
	if (buffer)
		while (buffer[i] != '\0')
			join[j++] = buffer[i++];
	join[j] = '\0';
	free(memory);
	return (join);
}

int		ft_strendl(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*ft_getline(char *memory)
{
	char	*temp;
	int		i;

	i = 0;
	while (memory && memory[i] != '\0' && memory[i] != '\n')
		i++;
	if (!(temp = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (memory && memory[i] != '\0' && memory[i] != '\n')
	{
		temp[i] = memory[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

char	*ft_clearmemory(char *memory)
{
	char	*temp;
	int		length;
	int		i;
	int		j;

	i = 0;
	if (!memory)
		return (NULL);
	while (memory[i] != '\0' && memory[i] != '\n')
		i++;
	if (memory[i] == '\0')
	{
		free(memory);
		return (NULL);
	}
	length = ft_strlen(memory) - i;
	if (!(temp = malloc(sizeof(char) * (length + 1))))
		return (NULL);
	i++;
	j = 0;
	while (memory[i] != '\0')
		temp[j++] = memory[i++];
	temp[j] = '\0';
	free(memory);
	return (temp);
}
