#include <stdio.h>

int main()
{

    int vetor[5] = {1, 2, 3, 4, 5};
   
   for (int i = 0; i < 5; i++)
   {
        printf("O valor %d tem %ld bytes\n", vetor[i], sizeof(vetor[i]));
   }
    printf("O array valores tem %ld bytes\n", sizeof(vetor));
    
    printf("valores[0] vale %d e enderenco de memoria %p\n", vetor[0], vetor[0]);

    printf("*(vetor) vale %d e endereco de memoria e %p\n", *(vetor), *(vetor));

    printf("*(vetor+1) vale %d e endereco de memoria e %p\n", *(vetor+1), *(vetor));
    
    printf("*(vetor+1) vale %d e endereco de memoria e %p\n", *(vetor+2), *(vetor));
    
    printf("*(vetor+1) vale %d e endereco de memoria e %p\n", *(vetor+3), *(vetor));

    printf("*(vetor+1) vale %d e endereco de memoria e %p\n", *(vetor+4), *(vetor));

    return 0;
}
