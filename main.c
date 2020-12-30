
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include <string.h>


int create_display(); // Prototypes of functions
void shutdown();
void create_paste();
void delete_paste();
void goodbye();


int main(int argc, char *argv[])
{

    int menu_option = create_display();

    switch(menu_option) {

        case 0:
            goodbye();
            break;

        case 1:
            shutdown();
            break;

        case 2:
            create_paste();
            break;

        case 3:
            delete_paste();
            break;

        default:
            create_display();
            break;

    }


    return 0;
} //END MAIN function


int create_display()
{
    int choice;

    system("cls");
    printf("\n######################==######################\n");
    printf("############WELCOME TO CPP MANAGER############\n");
    printf("######################==######################\n");

    printf("1) Shutdown PC \n");
    printf("2) CREATE PASTE \n");
    printf("3) DELETE PASTE \n");
    printf("0) EXIT \n");

    scanf("%d", &choice);
    getchar();

    if(choice < 0 || choice > 3) {

        create_display();
    }

    return choice;

}


void shutdown()
{
    system("shutdown -s -t 00");
}


void create_paste()
{
    system("mkdir novaPasta");
}


void delete_paste()
{
     system("rmdir novaPasta");
}


void goodbye()
{
    printf("Goodbye...");
}

