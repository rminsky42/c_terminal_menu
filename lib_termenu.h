#ifndef LIB_TERMENU_H
#define LIB_TERMENU_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char **options;      // Array of menu options
    int count;          // Number of options
    int selected;       // Index of the currently selected option
    char *title;         // Title of the menu
} Menu;

Menu *create_menu(char *title, char **options, int count);
void display_menu(Menu *menu);
void handle_input(Menu *menu, char input);
void free_menu(Menu *menu);

#endif // LIB_TERMENU_H