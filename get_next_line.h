/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouro-c <tlouro-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:29:30 by tlouro-c          #+#    #+#             */
/*   Updated: 2023/10/19 13:49:09 by tlouro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

char	*get_next_line(int fd);

/* UTILS */

int		line_updater(char **line, char buffer[]);
int		ft_strlenm(char const *s1);
char	*ft_strjoinm(char const *s1, char const *s2);
void	buffer_clear(char *buffer);
char	*buffer_total_clear(int fd, char **buffer, char *line);

/* END OF UTILS */

#endif /* GET_NEXT_LINE_H */
