#include "graph.h"
#include <stdlib.h>
#include <stdio.h>


typedef struct graph{
    int numOfNodes;
    bool** edges;
    bool** barcodes;
    bool** humps;
}graph;

graph* createGraph(int rows,int columns){
    graph* result = malloc(sizeof(graph));
    if(result != NULL){
        result->numOfNodes = rows*columns;
        //allocate mem for EdgesMatrix
        //Rows
        result->edges = calloc(sizeof(bool*),result->numOfNodes);
        if(result->edges == NULL){
            destroyGraph(result);
            printf("EdgesMatrix cannot be created(1)");
        }
        //columns
        for (int i = 0; i < result->numOfNodes; i++){
            result->edges[i] = calloc(sizeof(bool*),result->numOfNodes);
            if(result->edges[i] == NULL){
                destroyGraph(result);
                printf("EdgesMatrix cannot be created(2)");
            }
        }
        //allocate mem for BarcodeMatrix
        result->barcodes = calloc(sizeof(bool*),result->numOfNodes);
        if(result->barcodes == NULL){
            destroyGraph(result);
            printf("BarcodesMatrix cannot be created(1)");
        }
        for (int i = 0; i < result->numOfNodes; i++){
            result->barcodes[i] = calloc(sizeof(bool*),result->numOfNodes);
            if(result->barcodes[i] == NULL){
                destroyGraph(result);
                printf("BarcodesMatrix cannot be created(2)");
            }
        }
        //allocate mem for HumpsMatrix
        result->humps = calloc(sizeof(bool*),result->numOfNodes);
        if(result->humps == NULL){
            destroyGraph(result);
            printf("HumpsMatrix cannot be created(1)");
        }
        for (int i = 0; i < result->numOfNodes; i++){
            result->humps[i] = calloc(sizeof(bool*),result->numOfNodes);
            if(result->humps[i] == NULL){
                destroyGraph(result);
                printf("HumpsMatrix cannot be created(2)");
            }
        }
        //sometimes calloc will not initialized everything to zero, so we 
        //explicitly have to initliase it.
        for (int i = 0; i < result->numOfNodes; i++){
            for (int j = 0; j < result->numOfNodes; j++){
                result->edges[i][j] = false;
                result->barcodes[i][j] = false;
                result->humps[i][j] = false;
            }
        }
    }
    return result;
}

void destroyGraph(graph* graph){
    if(graph->edges == NULL){
        free(graph);
    }
    for(int i = 0; i < graph->numOfNodes; i++){
        free(graph->edges[i]);
    }
    free(graph->edges);
}

void printEdges(graph* graph){
    printf("Edges Matrix:\n");
    printf("   ");
    for(int i = 0; i<graph->numOfNodes; i++){
        if(i == graph->numOfNodes-1){
            printf("%02d\n", i);
        }
        else{
            printf("%02d ", i);
        }
    }
    for(int i = 0 ; i < graph->numOfNodes; i++){
        printf("%02d ", i);
        for(int j = 0; j < graph->numOfNodes; j++){
            if(j == graph->numOfNodes - 1){
                printf("%02d\n",graph->edges[i][j]);
            }
            else{
                printf("%02d ",graph->edges[i][j]);
            }
        }
    }
}
void printBarcodes(graph* graph){
    printf("Barcode Matrix:\n");
    printf("   ");
    for(int i = 0; i<graph->numOfNodes; i++){
        if(i == graph->numOfNodes-1){
            printf("%02d\n", i);
        }
        else{
            printf("%02d ", i);
        }
    }
    for(int i = 0 ; i < graph->numOfNodes; i++){
        printf("%02d ", i);
        for(int j = 0; j < graph->numOfNodes; j++){
            if(j == graph->numOfNodes - 1){
                printf("%02d\n",graph->barcodes[i][j]);
            }
            else{
                printf("%02d ",graph->barcodes[i][j]);
            }
        }
    }
}
void printHumps(graph* graph){
    printf("Humps Matrix:\n");
    printf("   ");
    for(int i = 0; i<graph->numOfNodes; i++){
        if(i == graph->numOfNodes-1){
            printf("%02d\n", i);
        }
        else{
            printf("%02d ", i);
        }
    }
    for(int i = 0 ; i < graph->numOfNodes; i++){
        printf("%02d ", i);
        for(int j = 0; j < graph->numOfNodes; j++){
            if(j == graph->numOfNodes - 1){
                printf("%02d\n",graph->humps[i][j]);
            }
            else{
                printf("%02d ",graph->humps[i][j]);
            }
        }
    }
}

bool addEdge(graph* graph, int from_node, int to_node){
    if(hasEdge(graph, from_node, to_node)){
        return false;
    }
    else{
        graph->edges[from_node][to_node] = true;
        graph->edges[to_node][from_node] = true;
        printf("Edge Added!\n");
        return true;
    }
}
bool hasEdge(graph* graph, int from_node, int to_node){
    return graph->edges[from_node][to_node];
}

bool addBarcode(graph* graph, int from_node, int to_node){
    if(hasBarcode(graph, from_node, to_node)){
        return false;
    }
    else{
        graph->barcodes[from_node][to_node] = true;
        graph->barcodes[to_node][from_node] = true;
        printf("Barcode Added!\n");
        return true;
    }
}
bool hasBarcode(graph* graph, int from_node, int to_node){
    return graph->barcodes[from_node][to_node];
}

bool addHump(graph* graph, int from_node, int to_node){
    if(hasHump(graph, from_node, to_node)){
        return false;
    }
    else{
        graph->humps[from_node][to_node] = true;
        graph->humps[to_node][from_node] = true;
        printf("Hump Added!\n");
        return true;
    }
}
bool hasHump(graph* graph, int from_node, int to_node){
    return graph->humps[from_node][to_node];
}

void printGraph(graph* graph){
    printf("graph {\n");
    for (int from = 0; from < graph->numOfNodes; from++){
        for (int to = 0; to < graph->numOfNodes; to++){
            if(graph->edges[from][to]){
                printf("%d -- %d", from, to);
                if(graph->humps[from][to]){
                    printf("[label=\"h\"]");
                }
                if(graph->barcodes[from][to]){
                    printf("[label=\"b\"]");
                }
                printf(";\n");
            }
        }
    }
    printf("}\n");
}

void printMap(graph* graph, int rows, int columns){
    int map[rows][columns];
    int counter = 0;
    for(int i=0; i<rows;i++){
        for(int j = 0; j<columns; j++){
            map[i][j] = counter++;
        }
    }
    printf("\n");
    for (int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            if(j == columns-1){
                printf("(%03d)", map[i][j]);
                if(hasEdge(graph,map[i][j],map[i][j+1])){
                    printf("-");
                    if(hasBarcode(graph,map[i][j],map[i][j+1])){
                        printf("b");
                    }
                    else if(hasHump(graph,map[i][j],map[i][j+1])){
                        printf("h");
                    }
                    else{
                        printf("-");
                    }
                    printf("-");
                }
                printf("\n");
                for(int k = 0; k < columns; k++){
                    if(hasEdge(graph, map[i][k],map[i+1][k])){
                        printf("|");
                        if(hasHump(graph, map[i][k],map[i+1][k])){
                            printf("h");
                        }
                        else if(hasBarcode(graph, map[i][k],map[i+1][k])){
                            printf("b");
                        }
                        else{
                            printf("|");
                        }
                        printf("|\t");
                    }
                    else{
                        if(i != rows-1){
                            printf("|X|\t");
                        }
                    }
                }
                printf("\n");
            }
            else{
                printf("(%03d)", map[i][j]);
                if(hasEdge(graph,map[i][j],map[i][j+1])){
                    printf("-");
                    if(hasBarcode(graph,map[i][j],map[i][j+1])){
                        printf("b");
                    }
                    else if(hasHump(graph,map[i][j],map[i][j+1])){
                        printf("h");
                    }
                    else{
                        printf("-");
                    }
                    printf("-");
                }
                else{
                    printf("-X-");
                }
            }
        }
    }
}