#include <stdio.h>
#include <stdlib.h>
#include "graph.h"
#define ROWS 4
#define COLUMNS 4

int main(){
    graph* map = createGraph(ROWS,COLUMNS);
    addEdge(map, 15,11);
    addEdge(map, 10,11);
    addBarcode(map, 15,11);
    addHump(map, 10,11);
    //printEdges(map);
    //printBarcodes(map);
    //printHumps(map);
    printGraph(map);
    printMap(map, ROWS, COLUMNS);
    destroyGraph(map);
    return 0;
}