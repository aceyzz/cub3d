/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keypress.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 10:31:01 by cedmulle          #+#    #+#             */
/*   Updated: 2024/01/21 18:58:02 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	debug_printer(t_game *game)
{
	printf("x: \033[1;31m%f\033[0m -- ", game->player->pos_x);
	printf("y: \033[1;34m%f\033[0m -- ", game->player->pos_y);
	printf("dir_x: \033[1;32m%f\033[0m -- ", game->player->dir_x);
	printf("dir_y: \033[1;33m%f\033[0m -- \n", game->player->dir_y);
}

int	keypress(int keycode, t_game *game)
{
	if (keycode == K_ESC)
		exit_game(game);
	if (keycode == K_W || keycode == K_A || keycode == K_S || keycode == K_D)
		move_player(keycode, game);
	if (keycode == K_LEFT || keycode == K_RIGHT)
		rotate_player(keycode, game);
	debug_printer(game);
	return (0);
}

int	close_window(t_game *game)
{
	exit_game(game);
	return (0);
}
