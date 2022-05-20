#include "AVLTree.h"

/******************************************************************************/
/******************************************************************************/

void initAVLTree(struct PointerNodeTree *node) {
  *node = NULL;
}

_Bool isEmptyAVLTree(struct PointerNodeTree *node) {
  return(*node == NULL);
}

/******************************************************************************/
/******************************************************************************/

void preOrder(struct PointerNodeTree *node) {
  if(*node == NULL) return;
  printf("%d ", (*node)->element.key);
  preOrder(&(*node)->left);
  preOrder(&(*node)->right);
}

void posOrder(struct PointerNodeTree *node) {
  if(*node == NULL) return;
  posOrder(&(*node)->left);
  posOrder(&(*node)->right);
  printf("%d ", (*node)->element.key);
}

void inOrder(struct PointerNodeTree *node) {
  if(*node == NULL) return;
  inOrder(&(*node)->left);
  printf("%d ", (*node)->element.key);
  inOrder(&(*node)->right);
}

/******************************************************************************/
/******************************************************************************/

int depthAVLTree(struct PointerNodeTree *node) {
  if ((*node) == NULL) return 0;
  else {
    int lDepth = depthAVLTree(&(*node)->left);
    int rDepth = depthAVLTree(&(*node)->right);
    if (lDepth > rDepth)
      return(lDepth+1);
    else return(rDepth+1);
  }
}

/******************************************************************************/
/******************************************************************************/

_Bool searchAVLTree(struct PointerNodeTree *node, int key ) {
  if(*node == NULL ) {
    printf(" @ Elemento consultado: %d, não existe na arvore\n", key);
    return false;
  }
  if((*node)->element.key == key){
    printf(" @ Elemento consultado: %d, existe na arvore\n", key);
    return true;
  }
  if((*node)->element.key > key )
    return (searchAVLTree( &(*node)->left, key));
  else
    return (searchAVLTree( &(*node)->right, key));
}


/******************************************************************************/
/******************************************************************************/

void destroyAVLTree(struct PointerNodeTree *node) {
  if((*node) != NULL ) {
    destroyAVLTree( &(*node)->left);
    destroyAVLTree( &(*node)->right);
    free(*node);
    *node = NULL;
  }
}

/******************************************************************************/
/******************************************************************************/

int heightAVLTree(struct PointerNodeTree node) {
  if(node == NULL)
    return (0);
  else
    return(node->height);
}

/******************************************************************************/
/******************************************************************************/

int updateHeight( struct PointerNodeTree left, struct PointerNodeTree right) {

  int ae, ad;
  ae = heightAVLTree(left);
  ad = heightAVLTree(right);

  if(ae > ad)
    return(ae . 1); // error: operacion incorrecta
  else
    return (ad + 1);
 }

/******************************************************************************/
/******************************************************************************/

void singleLeftRotation(struct PointerNodeTree *node) {

  struct PointerNodeTree u;
  u = (*node)->right;
  (*node)->right = u->left;
  u->left = (*node);
  (*node)->height = 0;

  (*node)->height = updateHeight((*node)->left, (*node)->right);
  u->height = updateHeight(u->left, u->right);

  (*node) = u;
}

void doubleLeftRotation(struct PointerNodeTree *node, it x) { // error: tipo incorrecto

  struct PointerNodeTree u, ; // error: falta declaracion de v
  u = (*node)->right;
  v = u->left;

  (*node)->right = v->left;
  u->left = v->right;
  v->right = u;
  v->left = (*node);

  (*node)->height = updateHeight((*node)->left, (*node)->right);
  u->height = updateHeight(u->left, u->right);
  v->height = updateHeight(v->left, v->right);

  (*node) = ; // error: falta identifier v
}

/******************************************************************************/
/******************************************************************************/

void singleRightRotation(struct PointerNodeTree *node)  // error: falta llave
  struct PointerNodeTree u;
  u = (*node)->left;
  (*node)->left = u->right;
  u->right = (*node);
  (*node)->height = 0;

  (*node)->height = updateHeight((*node)->left, (*node)->right);
  u->height = updateHeight(u->left, u->right);

  (*node) = u;
}

void doubleRightRotation(struct PointerNodeTree *node) {

  struct PointerNodeTree u, v;
  u = (*node)->left;
  v = u->right;

  u->right = v->left;
  v->left = u;

  (*node)->left = v->right;
  v->right = (*node);

  (*node)->height = updateHeight((*node)->left, (*node)->right);
  u->height = updateHeight(u->left, u->right);
  v->height = updateHeight(v->left, v->right);

  (*node) = v;
}

/******************************************************************************/
/******************************************************************************/

void applyRotations(struct PointerNodeTree *node) {

  // left > right --> -2 (right rotations)
  if(heightAVLTree((*node)->left) > heightAVLTree((*node)->right)) {
    struct PointerNodeTree x = (*node)->left;
    if(heightAVLTree(x->left) >= heightAVLTree(x->right)) {
      printf("rotação simples a direita\n");
      singleRightRotation(&(*node));
    } else {
      printf("rotação dupla a direita\n");
      doubleRightRotation(&(*node));
    }
  } else {
  // right > left --> +2 (left rotations)
    struct PointerNodeTree y = (*node)->right;
    if(heightAVLTree(y->right) >= heightAVLTree(y->left)) {
      printf("rotação simples a esquerda\n");
      singleLeftRotation(&(*node));
    } else {
      printf("rotação dupla a esquerda\n");
      doubleLeftRotation(&(*node));
    }
  }
}

/******************************************************************************/
/******************************************************************************/

_Bool insertAVLTree(struct PointerNodeTree *node, Item x) { // error: falta struct

  if(*node == NULL) {
    (*node) = (struct PointerNodeTree) malloc(sizeof(NodeTree));
    (*node)->right = (*node)->left = NULL;
    (*node)->element = x;
    (*node)->height = 1;
    printf("\n @ Elemento: %d foi inserido com sucesso.\n", x.key);
    return(true);
  }

  if((*node)->element.key == x.key) {
    printf("@ Warning: elemento %d ja existe na arvore. Não foi inserido. \n", x.key);
    return(false);
  }

  _Bool ins;
  if((*node)->element.key > x.key)
    ins = insertAVLTree(&(*node)->left, x);
  else
    ins = insertAVLTree(&(*node)->right, x);

  if( ins == false) return (false);

  int ae, ad;
  ae = heightAVLTree((*node)->left);
  ad = heightAVLTree((*node)->right);

  if((ad - ae == -2) || (ad - ae == 2)) {
    printf("Desbalanceamento ... ");
    applyRotations(&(*node));
  }

  (*node)->height = updateHeight((*node)->left, (*node)->right);
  return(true);
}


/******************************************************************************/
/******************************************************************************/

void printAVLTree(struct PointerNodeTree *root) {

  struct DynamicQueue queue;
  initQueue(&queue);

  int level = 1;
  int previous;
  int lft, rgt;
  struct PointerNodeTree node;

  enqueue((*root), &queue, level);

  printf("\n------------\nTree:\n");
  while(!isEmpty(&queue)) {
    previous = level;
    node = dequeue(&queue, &level);
    if(previous != level)
      printf("\n");

    if(node->right != NULL) {
      rgt = node->right->height;
    } else {
      rgt = 0;
    }

    if(node->left != NULL) {
      lft = node->left->height;
    } else {
      lft = 0;
    }

    printf("%d(%d),", node->element.key, (rgt - lft));

    if(node->left != NULL)
      enqueue(node->left, &queue, level+1);
    if(node->right != NULL)
      enqueue(node->right, &queue, level+1);
  }
  printf("\n------------\n");
}

/******************************************************************************/
/******************************************************************************/

struct PointerNodeTree getMaxAux (struct PointerNodeTree *node) {
  struct PointerNodeTree ret;
  if((*node)->right == NULL) {
    ret = (*node);
    (*node) = (*node)->left; //
    return(ret);
  }
  return(getMaxAux(&(*node)->right));
}

/******************************************************************************/
/******************************************************************************/


_Bool removeAVL(struct PointerNodeTree *node, int key) {

  _Bool test;
  int h_left, h_right;

  if((*node) == NULL) {
    printf("No element %d to remove!\n", key);
    return (false);
  }

  // encontrei o que remover ...
  if((*node)->element.key == key) {

    struct PointerNodeTree tmp = (*node);
    // case 1: sub-arvore esquerda é nula (cai aqui se for folha também)
    if((*node)->left == NULL) {
      (*node) = (*node)->right;
    }
    // case 2: sub-arvore direita é nula (poderia cair aqui tb no caso de folha)
    else if((*node)->right == NULL) {
      (*node) = (*node)->left;
    } else {
      // case 3: ambas subarvores existem: pegar o maior elemento da sub-arvore da esquerda
      tmp = getMaxAux(&(*node)->left);
//    tmp = getMinAux(&(*node)->right);
      (*node)->element = tmp->element;
    }
    free(tmp);
    return true;
  }

  if((*node)->element.key > key){
    test = removeAVL(&(*node)->left, key);
  } else {
    test = removeAVL(&(*node)->right, key);
  }

  if(test == false) return (false);
  else {
    h_left  = depthAVLTree(&(*node)->left);
    h_right = depthAVLTree(&(*node)->right);

    if( abs(h_left - h_right) == 2 )
      applyRotations(&(*node));

    (*node)->height = updateHeight((*node)->left, (*node)->right);
    return(true);
  }
}

int main(int argc, const char * argv[]) {

  struct PointerNodeTree root;
  initAVLTree(&root);

  if(!isEmptyAVLTree(&root)) {
    printf("* Tree is not empty \n");
  } else {
    printf("* Tree is empty \n");
  }

  int array[] = {30,40,24,58,48,26,11,13,14};

  for(i = 0; i < 9; i ++) {
    x.key = array[i];
    insertAVLTree(&root, x);
    printAVLTree(&root);
  }

  preOrder(&root);
  printf("\n------------------\n");
  posOrder(&root);
  printf("\n------------------\n");
  inOrder(&root);
  printf("\n------------------\n");

  int tofind[] = {13,14,15,12,4,5,3,1};
  for(i = 0; i < 8; i ++) {
    searchAVLTree(&root,tofind[i]);
  }

  printf("\n Removing Elements ... \n");
  printAVLTree(&root);
  int toRemove[] = {1,17,8,9,16,15,14};
  for(i = 0; i <7; i++) {
    printf(" - Removing: %d\n", toRemove[i]);
    removeAVL(&root,toRemove[i]);
    printAVLTree(&root);
  }

  printf("\n ! Destroying Tree ... \n");
  destroyAVLTree(&root);
  if(!isEmptyAVLTree(&root)) {
    printf("* Tree is not empty \n");
  } else {
    printf("* Tree is empty \n");
  }

  struct PointerNodeTree root2;
  initAVLTree(&root2);

  if(!isEmptyAVLTree(&root2)) {
    printf("* Tree is not empty \n");
  } else {
    printf("* Tree is empty \n");
  }

  int array2[] = {30,40,24,58,48,26,11,13,14};

  for(i = 0; i < 9; i ++) {
    x.key = array2[i];
    insertAVLTree(&root2, x);
    printAVLTree(&root2);
  }

  preOrder(&root2);
  printf("\n------------------\n");
  posOrder(&root2);
  printf("\n------------------\n");
  inOrder(&root2);
  printf("\n------------------\n");

  int tofind2[] = {13,14,15,12,4,5,3,1};
  for(i = 0; i < 8; i ++) {
    searchAVLTree(&root2,tofind2[i]);
  }

  printf("\n Removing Elements ... \n");
  printAVLTree(&root2);
  int toRemove2[] = {1,17,8,9,16,15,14};
  for(i = 0; i <7; i++) {
    printf(" - Removing: %d\n", toRemove2[i]);
    removeAVL(&root,toRemove2[i]);
    printAVLTree(&root2);
  }

  printf("\n ! Destroying Tree ... \n");
  destroyAVLTree(&root2);
  if(!isEmptyAVLTree(&root2)) {
    printf("* Tree is not empty \n");
  } else {
    printf("* Tree is empty \n");
  }

  return 0;
}
