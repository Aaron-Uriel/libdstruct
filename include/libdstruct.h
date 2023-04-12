#ifndef LIBDSTRUCT
#define LIBDSTRUCT

#include <stdbool.h>

#if defined _WIN32 || defined __CYGWIN__
  #ifdef BUILDING_LIBDSTRUCT
    #define LIBDSTRUCT_PUBLIC __declspec(dllexport)
  #else
    #define LIBDSTRUCT_PUBLIC __declspec(dllimport)
  #endif
#else
  #ifdef BUILDING_LIBDSTRUCT
      #define PUBLIC __attribute__((visibility ("default")))
  #else
      #define PUBLIC
  #endif
#endif

#include <stdint.h>



/* Nodos. */

typedef struct SNode SNode;
struct SNode {
	int32_t  value;
	SNode    *next;
};

PUBLIC SNode   *snode_new(int32_t value);
PUBLIC void    snode_delete(SNode **self);
PUBLIC SNode   *snode_get_next(SNode *const self);
PUBLIC void    snode_append(SNode *const self, SNode *const adjacent_node);
PUBLIC SNode   *snode_jump_to_last(SNode *const self);
PUBLIC SNode   *snode_jump_to_n(SNode *const self, const uint32_t n);
PUBLIC void    snode_print_all_linked_nodes(const SNode *const self);
PUBLIC void    snode_print_debug(const SNode *const self);

typedef struct Node Node;
struct Node {
    int32_t value;
    Node    *previous;
    Node    *next;
};

PUBLIC Node *node_new(int32_t value);
PUBLIC void node_delete(Node **const self);
PUBLIC Node *node_get_next(Node *const self);
PUBLIC Node *node_get_previous(Node *const self);
PUBLIC void node_append(Node *const self, Node *const adjacent_node);
PUBLIC void node_prepend(Node *const self, Node *const adjacent_node);
PUBLIC Node *node_jump_to_last(Node *const self);
PUBLIC Node *node_jump_to_first(Node *const self);
PUBLIC Node *node_jump_to_n(Node *const self, const uint32_t n);
PUBLIC void node_print_all_linked_nodes(const Node *const self);
PUBLIC void node_print_debug(const Node *const self);

/* Fin de nodos. */

/* Listas. */

PUBLIC void    slist_insert_node(SNode **const slist, SNode *const node, const uint32_t index);
PUBLIC SNode   *slist_extract_node(SNode **const slist, const uint32_t index);
void    slist_print(SNode **slist);

typedef struct HList HList;

PUBLIC void slist_push_back(SNode **slist, SNode *snode);

/* Fin de listas. */

/* Colas. */

typedef struct HQueue HQueue;

/* Fin de colas. */

/* Pilas. */

PUBLIC void add_node (SNode *pila, SNode node);

/* Fin de pilas. */

#endif
