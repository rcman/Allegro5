#include <allegro5/allegro.h> //Main Allegro header
#include <allegro5/allegro_image.h> //Header for dialogue boxes
int main()
{
 //This is the display on which you draw everyting
 ALLEGRO_DISPLAY *display;
 //If Allegro fails to initialize show a message box
 if(!al_init())
// al_show_native_message_box(NULL, NULL, NULL, "Could not initialize Allegro 5", NULL, NULL);
 //Define the display
 display = al_create_display(800, 600);
 //If Allegro fails to create a display show a message box
 if(!display)
// al_show_native_message_box(NULL, NULL, NULL, "Could not create Allegro 5 display", NULL, NULL);
 //Show the application window for 5 seconds
 //(if you don't, the application will shut down immediately after you launch it)
 al_rest(5.0f);
 //Deallocate the memory used for the display creation
 al_destroy_display(display);
 return 0;
}

