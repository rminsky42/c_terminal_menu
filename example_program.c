#include "lib_termenu.h"

int main()
{
    char *options[] = {"Option 1", "Option 2", "Option 3"};
    Menu *menu = create_menu("Sample Menu", options, 3);

    if(!menu)
    {
        return 1; // Exit if menu creation failed
    }

    printf("Menu Title: %s\n", menu->title);
    printf("Options:\n");
    for (int i = 0; i < menu->count; i++) {
        printf("  %d: %s\n", i + 1, menu->options[i]);
    }

    return 0; // Exit successfully
}