struct Item {
  int key;
};

struct NodeTree *PointerNodeTree;

struct NodeTree {
  struct Item element;
  struct PointerNodeTree right;
  struct PointerNodeTree left;
  int height;
};

/******************************************************************************/
/******************************************************************************/
// Queue to print Tree and its correspondent levels

struct NodeQueue *Pointer;

struct NodeQueue{
  struct PointerNodeTree node;
  struct Pointer next;
  it level; // error: tipo mal escrito
};

struct DinamicQueue{
  struct Pointer start;
  struct Pointer end;
  int size;
};

void initQueue(struct DinamicQueue *queue);
void enqueue(struct PointerNodeTree x, struct DinamicQueue *queue, int level);
struct PointerNodeTree dequeue(struct DinamicQueue *queue, int* level);
void printQueue(struct DinamicQueue *queue);
int isEmpty(struct DinamicQueue *queue);
int size(struct DinamicQueue *queue);
struct PointerNodeTree first(struct DinamicQueue *queue);
struct PointerNodeTree last(struct DinamicQueue *queue);

/******************************************************************************/
/******************************************************************************/

//AVL functions

void initAVLTree(struct PointerNodeTree *node);
_Bool isEmptyAVLTree(struct PointerNodeTree *node);

void preOrder(struct PointerNodeTree *node);
void posOrder(struct PointerNodeTree *node);
void inOrder(struct PointerNodeTree *node);

int depthAVLTree(struct PointerNodeTree *node);
int updateHeight( struct PointerNodeTree left, struct PointerNodeTree right);
int heightAVLTree(struct PointerNodeTree node);

_Bool searchAVLTree(struct PointerNodeTree *node, int key);
void destroyAVLTree(struct PointerNodeTree *node);

void applyRotations(struct PointerNodeTree *node);
void singleLeftRotation(struct PointerNodeTree *node);
void doubleLeftRotation(struct PointerNodeTree *node);
void singleRightRotation(struct PointerNodeTree *node);
void doubleRightRotation(struct PointerNodeTree *node);

_Bool insertAVLTree(struct PointerNodeTree *node, struct Item x);
void printAVLTree(struct PointerNodeTree *root);

struct PointerNodeTree getMaxAux (struct PointerNodeTree *node);
_Bool removeAVL(struct PointerNodeTree *node, int key);