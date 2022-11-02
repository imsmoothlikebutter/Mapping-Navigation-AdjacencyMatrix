#include <stdio.h>
#include <stdlib.h>
#include "graph.h"
#define ROWS 4
#define COLUMNS 4

int main(){
    char up = 'U';
    char left = 'L';
    char right = 'R';
    char down = 'D';
    graph* map = createGraph(ROWS,COLUMNS);
    addEdge(map, 15,11);
    addDirection(map,15,11,up,down);
    addEdge(map, 10,11);
    addDirection(map,10,11,right,left);
    addBarcode(map, 15,11);
    addHump(map, 10,11);

    //printing the 4 different matrices
    printEdges(map);
    printDirections(map);
    printBarcodes(map);
    printHumps(map);

    //printing the graph in dot format
    printGraph(map);

    //printing the graph in a grid map format
    printMap(map, ROWS, COLUMNS);

    BFS(map, 10);

    //freeing mem
    destroyGraph(map);
    return 0;
}
