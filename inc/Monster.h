/* ********************************************************************************************************* */
/*                                                                                                           */
/*                                                              :::::::::: ::::::::   :::::::: :::::::::::   */
/*   Monster.h                                                 :+:       :+:    :+: :+:    :+:    :+:        */
/*                                                            +:+       +:+        +:+           +:+         */
/*   By: camillia <chammou1@myges.fr>                        +#++:++#  +#++:++#++ :#:           +#+          */
/*                                                          +#+              +#+ +#+   +#+#    +#+           */
/*   Created: 2023/09/30 15:16:35 by camillia              #+#       #+#    #+# #+#    #+#    #+#            */
/*   Updated: 2023/10/02 18:52:18 by camillia             ########## ########   ######## ###########         */
/*                                                                                                           */
/* ********************************************************************************************************* */

#ifndef Monster_H_
#define Monster_H_

#define ASCII_LINES_M 10

typedef struct {
    int health;
    int min_attack;
    int max_attack;
    int defense;
} Monster;

int my_random_monsters();
Monster my_generate_monsters();
void my_display_monsters(Monster *enemies, int count);

#endif