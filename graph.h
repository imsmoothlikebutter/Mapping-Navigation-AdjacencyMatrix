#ifndef GRAPHTEST_GRAPH_H
#define GRAPHTEST_GRAPH_H

#include <stdbool.h>

typedef struct graph graph;
graph* createGraph(int rows, int columns);
void destroyGraph(graph* graph);
void printGraph(graph* graph);
bool addEdge(graph* graph, int from_node, int to_node);
bool hasEdge(graph* graph, int from_node, int to_node);
bool addHump(graph* graph, int from_node, int to_node);
bool hasHump(graph* graph, int from_node, int to_node);
bool addBarcode(graph* graph, int from_node, int to_node);
bool hasBarcode(graph* graph, int from_node, int to_node);
void printEdgeMatrix(graph* graph);
void printHumpsMatrix(graph* graph);
void printBarCodeMatrix(graph* graph);
void printMap(graph* graph, int rows, int columns);

#endif //GRAPHTEST_GRAPH_H
