#include <stdio.h>
#include <conio.h>

int main ()
{
    struct produto{
        char nomeprod [100];
        int codigo;
        float valor;
    };
    
    struct departamento{
        char nomedepart [50];
        int codigo;
        struct produto prod[3];
    };
    
    struct loja{
        char nome [50];
        char endereco [50];
        int telefone;
        struct departamento depart[3];
    };
        struct loja store[2];
    
    for(int y=0; y<2; y++){
        printf("Digite o nome da %d loja\n", y+1);
            gets(store[y].nome);
        printf("Digite o endereco da %d loja\n", y+1);
            gets(store[y].endereco);
        printf("Digite o telefone da %d loja\n", y+1);
            scanf("%d", &store[y].telefone);
                
        for(int x=0; x<3; x++){
            printf("Digite o nome do %d departamento\n", x+1);
                gets(store[y].depart[x].nomedepart);
            printf("Digite o codigo do %d departamento\n", x+1);
                scanf("%d", &store[y].depart[x].codigo); 
            
            for(int i=0; i<3; i++){
                printf("Digite o nome do %d produto\n", i+1);
                    gets(store[y].depart[x].prod[i].nomeprod);
                printf("Digite o codigo do %d produto\n", i+1);
                    scanf("%d", &store[y].depart[x].prod[i].codigo);
                printf("Digite o valor do %d produto\n", i+1);
                    scanf("%f", &store[y].depart[x].prod[i].valor);
            }
        }
    }
    for(int y=0; y<2; y++){
        printf("nome da %d loja:%s\n", y+1, store[y].nome);
        printf("endereco da %d loja:%s\n", y+1, store[y].endereco);
        printf("telefone da %d loja:%d\n", y+1, store[y].telefone);
            
            for(int x=0;x<3;x++){
            printf("nome do %d departamento:%s\n", x+1, store[y].depart[x].nomedepart);
            printf("codigo do %d departamento:%d\n", x+1, store[y].depart[x].codigo);
                
                for(int i=0;i<3;i++){
                printf("nome do %d produto:%s\n", i+1, store[y].depart[x].prod[i].nomeprod);
                printf("codigo do %d produto:%d\n", i+1, store[y].depart[x].prod[i].codigo);
                printf("valor do %d produto:%f\n", i+1, store[y].depart[x].prod[i].valor);
            }
        }
    }
return 0;
    
}


