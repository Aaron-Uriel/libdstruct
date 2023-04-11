#include <stdio.h>
#include <stdlib.h>
#include <libdstruct.h>
#include <snode.c>

 void add_node (SNode *pila, SNode node)
 {  
    int id;
    system("clear");
    printf("\t_______________________________\n");
     printf("\t Ingrese el ID del nodo: ");
    scanf("%d", &id);

    node = snode_new(id);
    if (nodo != NULL)
    {
        snode_append(*pila, node);
    }
    
 }


SNode *slist_extract_node(SNode **pila, SNode node)
{
    SNode *endSPila = snode_jump_to_last(*pila);
    if (endSPila == NULL)
    {
        printf("Está vacia.");
    } else
    {
        printf("\t Se elimino %d de la pila.\n", endSPila->value);
        snode_delete(node);
    }
    
    
}

 void spila_print(struct nodo *pila)
{

    struct nodo *actual;
    actual = pila;

    while (actual != NULL)
    {
        printf("%d -> ", actual->id);
        actual = actual->sig;
    }

    printf("NULL\n");
    
}
