#ifndef GRAPH
#define GRAPH
#include <stdbool.h>

typedef struct graph graph;
graph* createGraph(int rows,int columns);
void destroyGraph(graph* graph);
void printEdges(graph* graph);
bool addEdge(graph* graph, int from_node, int to_node);
bool hasEdge(graph* graph, int from_node, int to_node);
bool addBarcode(graph* graph, int from_node, int to_node);
bool hasBarcode(graph* graph, int from_node, int to_node);
bool addHump(graph* graph, int from_node, int to_node);
bool hasHump(graph* graph, int from_node, int to_node);
bool addDirection(graph* graph, int from_node, int to_node , char direction, char oppDirection);
char hasDirection(graph* graph, int from_node, int to_node);
void printDirections(graph* graph);
void printBarcodes(graph* graph);
void printHumps(graph* graph);
void printGraph(graph* graph);
void printMap(graph* graph, int rows, int columns);



#endif // !GRAPH
