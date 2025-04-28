#include <stdio.h>
// tipo de dados

// booleanos(Verdadeiro/falso) (True/False)

/*
Na linguagem C, não existe um tipo de dado boolean 

mas...

A linguagem C , reconhece o valor 0 como Falso (false) 
e Qualquer valor diferente de 0 como verdadeiro (true)
*/

int main(){
    int booleano = 0;

    if(booleano){
        printf("verdadeiro");
    } else{
        printf("falso");
    }
    return 0;
}