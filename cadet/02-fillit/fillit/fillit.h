/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 14:30:02 by nmolina           #+#    #+#             */
/*   Updated: 2018/01/04 16:28:03 by ndoorn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include <sys/types.h>
# include <unistd.h>
# include <stdlib.h>

# define OK 1
# define MAX 26
# define BUF_SIZE 21

# define DOT_HASH_ENDL(X) ((X) == '.' || (X) == '#' || (X) == '\n')

typedef struct	s_io
{
	int		fd;
	int		ret;
	int		last_ret;
	char	buf[BUF_SIZE + 1];
}				t_io;

typedef struct	s_ch
{
	int		x;
	int		y;
	int		hash_len;
	char	*buf;
}				t_ch;

typedef struct	s_ok
{
	int		i;
	int		k;
	int		dk;
}				t_ok;

typedef struct	s_tet
{
	int		hashes[4];
	int		deltas[4];
	char	c;
}				t_tet;

typedef struct	s_map
{
	int		count;
	int		size;
	char	z[MAX * MAX];
	t_tet	tets[MAX];
}				t_map;

void			ft_puterror(char *msg);

int				scan_file(char *file, t_map *map);
int				scan_chunk(t_ch *ch, t_tet *tet);
void			diff_chunk(t_tet *tet);
int				verify_tetrimino(t_tet *tet);
int				check_edge(int *hs);

int				is_square(int *hs);
int				is_line(int *hs);
int				is_t(int *hs, int *ds);
int				is_z(int *hs, int *ds);
int				is_l(int *hs, int *ds);

int				fillit_try(t_map *map);
int				fillit_go(t_map *map, int i);
int				fillit_look(t_map *map, t_tet *tet, int j);
int				fillit_delta_k(t_tet *tet, int i, int map_size);
void			fillit_tet(t_map *map, t_tet *tet, int j, int ok);
int				fillit_out(t_map *map);

#endif
