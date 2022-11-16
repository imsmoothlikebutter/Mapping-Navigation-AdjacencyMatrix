#include <stdio.h>
#include <stdlib.h>
#include "graph.h"
#define ROWS 3
#define COLUMNS 3

int main(){
    char forward = 'F';
    char left = 'L';
    char right = 'R';
    char reverse = 'B';
    char orientation ='N'; //relative compass
    //whenever car turns left, orientation becomes East
    //whenever car turns right, orientation becomes West
    //char* orientationptr = &orientation;
    graph* map = createGraph(ROWS,COLUMNS);
    //example on a 3x3 map. Start at grid 4
    //node 4 to 5. right side clear

    addEdge(map, 4,5);
    addDirection(map, 4,5,right,orientation);
    orientation = 'E';
    addEdge(map,5,8);
    addDirection(map, 5,8, right, orientation);
    orientation = 'S';
    addEdge(map, 8,7);
    addDirection(map,8,7,right,orientation);
    orientation = 'W';
    addEdge(map, 7,6);
    addDirection(map, 7,6,forward,orientation);
    addEdge(map, 6,3);
    addDirection(map, 6,3,right,orientation);
    orientation = 'N';
    addEdge(map, 3,0);
    addDirection(map, 3,0,forward,orientation);
    addEdge(map,0,1);
    addDirection(map, 0,1,right,orientation);
    orientation = 'E';
    addEdge(map,1,2);
    addDirection(map,1,2,forward,orientation);

    //printing all different matrices
    printEdges(map);
    //printing the graph in dot format
    printGraph(map);

    //printing the graph in a grid map format
    //printMap(map, ROWS, COLUMNS);
    printf("Current car orientation: %c\n",orientation);

    whatDirectionDoITake(map, 0,1);

    printf("BFS Algo: \n");
    BFS(map, 3, 8);

    printf("DFS Algo: \n");
    DFS(map, 0,3);

    printf("Djisktra Algo: \n");
    dijkstraTraversal(map,0, 2, ROWS, COLUMNS);

    checkAllNodesHasAtLeast1Edge(map);

    //freeing mem
    destroyGraph(map);
    return 0;
}
