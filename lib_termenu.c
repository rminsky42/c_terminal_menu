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

void display_menu(Menu *menu) {
    printf("\033[H\033[J"); // Clear the screen
    printf("\033[1;34m%s\033[0m\n", menu->title); // Print title in blue
    for (int i = 0; i < menu->count; i++) {
        if (i == menu->selected) {
            printf("\033[1;32m> \033[0m%s\n", menu->options[i]); // Highlight selected option
        } else {
            printf("  %s\n", menu->options[i]);
        }
    }
}
