//This library uses ANSI escape codes to create a terminal menu system.
//// It provides functions to create menus, handle user input, and display options.

#include <stdio.h>
#include <string.h>
#include "lib_termenu.h"

Menu *create_menu(char *title, char **options, int count) {
    Menu *menu = malloc(sizeof(Menu));
    if (!menu) {
        fprintf(stderr, "Memory allocation failed\n");
        return NULL;
    }
    menu->title = strdup(title);
    menu->options = malloc(count * sizeof(char *));
    for (int i = 0; i < count; i++) {
        menu->options[i] = strdup(options[i]);
    }
    menu->count = count;
    menu->selected = 0;
    return menu;
}
