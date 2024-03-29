#ifndef ___Segment___
#define ___Segment___

/********* DEFINES **********/
#define MAX_NEIGHBORS 8
#define FILE_OPEN_FAILED -1 
#define NOT_P2_PGM -1 
#define COLS_ROWS_WRONG_INFO -1
#define MAX_COLOR_INCORRECT -1

/********* TYPEDEF **********/
typedef unsigned short imgPos[2];

typedef struct _treeNode {                /*a tree is used to store all positions of pixel, and their negihbors
											within single segments */
	imgPos position;                      /*position of a single pixel within the segment*/
	struct _treeNode** similar_neighbors; /*Array of children / neighbors*/
}treeNode;

typedef struct _Segment {
	treeNode* root;   /*the kernel of the segment*/
	unsigned int size;/*the total number of tree nodes*/
}Segment;


/***** FUNCTION PROTOTYPES *****/
treeNode* createTreeNode(imgPos positionToAdd); /*Create a tree node with provided position and an
												array of 8 treenode pointers*/
void freeSegment(Segment* seg);

#endif