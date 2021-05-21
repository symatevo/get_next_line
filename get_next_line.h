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

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <limits.h>

int			get_next_line(int fd, char **line);
int			ft_strlen(char *str);
char		*ft_clearmemory(char *str);
char		*ft_getline(char *str);
char		*ft_strjoin(char *s1, char *s2);
int			ft_strendl(char *str);

#endif
