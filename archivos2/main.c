#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int numero;
    char caracter;
}eDato;

int main()
{
    //function1();
    //function2();
    function3();


    return 0;
}

void function1()
{
    FILE* miArchivo;
    int numero = 64;

    /*miArchivo = fopen("prueba1.txt","w");

    fwrite(&numero,sizeof(int),1,miArchivo);

    fclose(miArchivo);*/

    miArchivo = fopen("prueba1.txt","r");

    fread(&numero,sizeof(int),1,miArchivo);

    fclose(miArchivo);

    printf("NUMERO: %d",numero);
}

void function2()
{
    FILE* miArchivo;
    int i;
    int numero;
    int lista[5];

    /*miArchivo = fopen("prueba.txt","w");

    for(i=0;i<5;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&lista[i]);

        fwrite(&lista[i],sizeof(int),1,miArchivo);
    }*/

    miArchivo = fopen("prueba.txt","r");

    i=0;
    while(!feof(miArchivo))
    {
        fread(&numero,sizeof(int),1,miArchivo);
        if(feof(miArchivo))
        {
            break;
        }

        printf("%d\n",numero);

        i++;
    }
}

void function3()
{
    FILE* miArchivo;
    eDato d = {1,'b'};

    /*miArchivo = fopen("miBinario.dat","wb");

    if(miArchivo!=NULL)
    {
        fwrite(&d,sizeof(eDato),1,miArchivo);
        fclose(miArchivo);
    }*/

    miArchivo = fopen("miBinario.dat","rb");

    if(miArchivo!=NULL)
    {
        fread(&d,sizeof(eDato),1,miArchivo);
        fclose(miArchivo);

        printf("%c %d",d.caracter,d.numero);
    }

}



