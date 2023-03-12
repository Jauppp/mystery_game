#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int nombre_mystere = 0, nombre_entre = 0, count = 0; // declaration des variables utilisée
    const int MAX = 100, MIN = 1;                        // on determine le nombre généré maximum (100) et minimum (1)

    /* On crée le générateur aléatoire*/

    srand(time(NULL)); // initialise le générateur à l'heure à laquelle le programme est lancé ; on s'assure ainsi de généré un nombre différent à chaque itération du programme

    nombre_mystere = (rand() % (MAX - MIN + 1)) + MIN;

    /* On a rédigé nos fonctions ; il faut maintenant créer la boucle du programme pour qu'il se répète tant que l'utilisateur n'a pas trouvé le nombre mystère.*/

    printf("Welcome to the Mystery Number game ! The rules are simple : you have to find the Mystery Number in as few rounds as you can. \n\n");

    do
    {
        // On demande à l'utilisateur de rentrer une valeur
        printf("Take a guess ! \n\n");
        scanf("%d", &nombre_entre);
        count++;

        if (nombre_mystere > nombre_entre)
            printf("Try higher ! \n\n");
        else if (nombre_mystere < nombre_entre)
            printf("Try lower ! \n\n");
        else
            printf("Congrats ! You found the mystery number in %d rounds!\n", count);

    } while (nombre_entre != nombre_mystere);
}
