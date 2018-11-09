/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <cmalfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 09:52:30 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/12/06 12:00:10 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MALLOC_H
# define MALLOC_H

# include <libft.h>
# include <pthread.h>
# include <unistd.h>
# include <sys/mman.h>
# include <fcntl.h>

#define PAGE_SIZE getpagesize()

void 		*malloc(size_t size);
void 		*realloc(void *ptr, size_t size);
void 		free(void *ptr);
void		show_alloc_mem();

#endif
