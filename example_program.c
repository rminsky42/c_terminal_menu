#include "lib_termenu.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *options[] = {"Option 1", "Option 2", "Option 3"};
    Menu *menu = create_menu("Sample Menu", options, 3);

    if(!menu)
    {
        return 1; // Exit if menu creation failed
    }

    printf("Menu Title: %s\n", menu->title);
    display_menu(menu);

    return 0; // Exit successfully
}