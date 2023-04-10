#include <stdlib.h>

#include <libdstruct.h>

SNode *
snode_new(int32_t value)
{
	SNode *const new_snode = malloc(sizeof(SNode));
	if (new_snode != NULL) {
		new_snode->value     = value;
		new_snode->next     = NULL;
	}

	return new_snode;
}

void
snode_delete(SNode *const self)
{
	free(self);
}

SNode *
snode_get_next(SNode *const self)
{
	return self->next;
}

void 
snode_append(SNode *const self, SNode *const adjacent_snode)
{
	self->next = adjacent_snode;
}

/*
 * Descripción de la función.
 * Esta función sirve para llegar al final de una serie de nodos enlazados.
 * Es útil cuando quieres insertar nodos al final por ejemplo.
 */
SNode
*snode_jump_to_last(SNode *const self)
{
    /* El bucle for más ilegible que verás en tu vida XD */
    SNode *current_node;
    for (current_node = self; 
         current_node->next != NULL;
         current_node = current_node->next);

    return current_node;
}

SNode
*snode_jump_to_n(SNode *const self, const uint32_t n)
{
    if (self == NULL) {
        return NULL;
    }

    SNode *node = self;
    uint32_t i;
    for (i = 0; i < n; i++) {
        if (node->next == NULL) { return NULL; }
        node = node->next;
    }

    return node;     
}