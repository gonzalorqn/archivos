#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* archivo;

    archivo = fopen("mostrar.html","w");

    if(archivo!=NULL)
    {
        fprintf(archivo,"<html><head> Hola </head></html>");

        fclose(archivo);
    }

    return 0;
}
