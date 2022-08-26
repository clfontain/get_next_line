/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontain <cfontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:26:14 by cfontain          #+#    #+#             */
/*   Updated: 2022/06/02 12:51:50 by cfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif 

char	*get_next_line(int fd);
char	*ft_callocbzero(size_t nmemb, size_t size);
char	*ft_stock_line(char	*line, int *trigger);
char	*ft_read_line(int fd, char *temp, char *line, int i);
char	*ft_final_line(char	*line);
int		ft_end_line(char *line);
char	*ft_strdup(char *s);
size_t	ft_strlen(char *str);
char	*ft_strjoin(char *s1, char *s2);

#endif