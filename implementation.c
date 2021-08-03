#include "stack.h"

void procedure();

int main(int argc, char **argv) {
    procedure();
    return 0;
}

void procedure() {
    char ans = 'n';
    int opt = 0;
    int value = 0;
    Stack *myStack = createStack();
    printf("Bienvenido...");
    while(ans == 'n' || ans == 'N') {
        printf("\nSelecciona alguna de estas opciones: ");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Top");
        printf("\n4. Vaciar");
        printf("\n%cCu%cl opci%cn quieres? ", 168, 134, 149);
        scanf("%d", &opt);
        fflush(stdout);
        switch (opt)
        {
        case 1:
            printf("\nIngresa un valor: ");
            scanf("%d", &value);
            push(myStack, value);
            break;
        case 2:
            printf("\nEl valor eliminado es: %d", pop(myStack));
            break;
        case 3:
            printf("\nEl %cltimo valor ingresado es: %d", 163, myStack->list->value);
            break;
        case 4:
            free(myStack);
            myStack = createStack();
            break;
        default:
            printf("\nSeleccionaste una opci%cn incorrecta...");
            break;
        }
        printf("\n%cDeseas salir? [S/N]: ", 168);
        fflush(stdin);
        scanf("%c", &ans);
    }
}