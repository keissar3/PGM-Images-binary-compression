#pragma once
#include "segment.h"
typedef struct _imgPosCell { /*linked list to store all pixel's locations in a single segment*/
	imgPos position;
	struct _imgPosCell* next;
	struct _imgPosCell* prev;
}imgPosCell;

typedef struct _imgPosCellList { /**/
	struct _imgPosCell* head;
	int size;
}imgPosCellList;