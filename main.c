#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include "graph.h"
#define ROWS 4
#define COLUMNS 4

int main() {
    graph* map = createGraph(ROWS,COLUMNS);
    //from robotcar pdf
    //step 3
    addEdge(map,10,6);
    //step 4
    addEdge(map, 6, 7);
    addHump(map, 6,7);
    //step 6
    addEdge(map, 6,5);
    //step 7
    addEdge(map, 5, 4);
    //step 8
    addEdge(map, 4, 0);
    //step 9
    addEdge(map, 0, 1);
    addBarcode(map, 0, 1);
    //step 10
    addEdge(map, 1, 2);
    //step 11
    addEdge(map, 2, 3);
    //step 16
    addEdge(map, 4, 8);
    //step 17
    addEdge(map, 8, 12);
    addHump(map, 8,12);
    //step 18
    addEdge(map, 12, 13);
    //step 19
    addEdge(map, 13, 14);
    //step 20
    addEdge(map, 14,10);
    //step 21
    addEdge(map, 10, 11);
    //step 22
    addEdge(map,11,15);
    //step 25
    addEdge(map, 10, 9);
    //step 26
    addEdge(map, 9, 5);


    printGraph(map);
    //printEdgeMatrix(map);
    printMap(map,ROWS,COLUMNS);
    destroyGraph(map);
}
