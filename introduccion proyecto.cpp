#include <stdio.h>
#include <stdlib.h>

int main() {
  // Declaramos las variables que vamos a utilizar
  int escena=1;
  int opcion;
  int opcion1=0;
  int opcion2=0;
  int opcion3=0;

  // Bucle principal del juego
  while (escena <= 14) {
    // Imprimimos el texto de la escena actual
    switch (escena) {
      case 1:
        printf("Escena 1: El jugador despierta sentado en una mesa y se da cuenta que esta con 3 entes. Le mencionan que esta en un castillo atrapado. Uno es el rey, otro es el ogro y otro es el brujo y los 3 le extienden la mano. A quien se la da primero? \n");
        break;
      case 2:
        printf("Escena 2: Los 3 le ofrecen una llave. La de quien toma?\n");
        break;
      case 3:
        printf("Escena 3: Los 3 le ofrecen una bebida. La de quien toma?\n");
        break;
      case 4:
        printf("Escena 4: Los 3 le ofrecen alimento. Los de quien decide comer?\n");
        break;
      case 5:
        printf("Escena 5: Los 3 le dicen que se pare. Cada uno va a hacia una puerta. Le dicen que decida la de quien quiere abrir\n");
        break;
      case 6:
        printf("Escena 6: Todos entran a la habitacion que el jugador escogio. Hay 3 cofres y cada uno va hacia un cofre. Le dicen que decide cual cofre quiere abrir.\n");
        break;
      case 7:
        printf("Escena 7: Abren el cofre y se abre una \n");
        break;
      case 8:
        printf("Escena 8: El jugador abre el cofre y aparecen 3 palabras en la pared. rey, brujo, ogro. Le dicen que decida una\n");
        break;
      case 9:
        printf("Escena 9: LLevan al jugador a otra habitacion. Los 3 tienen una herramienta similar y le dicen que decida la de quien quiere\n");
        break;
      case 10:
        printf("Escena 10: El jugador abre un tesoro con la herramienta. Dentro del tesoro hay 3 joyas con las palabras rey, brujo, ogro. Le dicen que tome una\n");
        break;
      case 11:
        printf("Escena 11: El jugador es llevado a otra habitacion. Los 3 personajes toman cada uno a una persona como rehen. Le dicen al jugador que decida a quien de las tres personas va a dejar salir del castillo.\n");
        break;
      case 12:
        printf("Escena 12: El jugador es llevado a otra habitacion con tres camas. Los 3 estan cada uno a un lado de una cama. Le dicen que decida en cual quiere dormir\n");
        break;
      case 13:
        printf("Escena 13: Cada uno toma unas sabanas. Le dicen que escoja las sabanas de quien quiere usar para dormir\n");
        break;
      case 14:
        printf("Escena 14: Cada uno de los 3 le ofrece una bebida antes de dormir. La de quien va a escoger?\n");
        break;
    }

    // Imprimimos las opciones de interacción
    printf("Opciones:\n");
    printf("1. Decidir al rey\n");
    printf("2. Decidir al brujo\n");
    printf("3. Decidir al ogro\n");

    // Leemos la opción del jugador
    scanf("%d", &opcion);

    // Actualizamos la escena según la opción del jugador
    switch (opcion) {
      case 1:
            opcion1++;
        break;
      case 2:
            opcion2++;
        break;
      case 3:
            opcion3++;
        break;
    }
    escena++;
  }

  // Imprimimos el final del juego
  if (opcion1>opcion2 && opcion1>opcion3) {
    printf("Escena 15 FINAL: El jugador se ha quedado atrapado como trabajor en el castillo por decision del rey\n");
  }
  else if (opcion2>opcion1 && opcion2>opcion3) {
    printf("Escena 15 FINAL: El jugador ha sido llevado por el brujo a su pueblo\n");
  }
  else if (opcion3>opcion1 && opcion3>opcion2) {
    printf("Escena 15 FINAL: El jugador ha escapado del castillo hacia el bosque con ayuda del ogro\n");
  }
  else if (opcion1==opcion2 || opcion1==opcion3 || opcion2==opcion3) {
    printf("Escena 15 FINAL: El jugador ha despertado de un sueno en su cama\n");
  }

  // Fin del juego
  return 0;
}