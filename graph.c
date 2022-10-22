#include "graph.h"
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

struct graph{
    int numOfNodes;
    bool** edgesMatrix;
    bool** humpsMatrix;
    bool** barcodeMatrix;
};

graph* createGraph(int rows, int columns){
    graph* graph = malloc(sizeof(graph));
    if(graph != NULL){
        graph->numOfNodes = rows*columns;
        //edgesMatrix = 13*16 X 13*16 = 208 X 208
        //allocate memory for edgesMatrix rows
        graph->edgesMatrix = calloc(sizeof(bool*), graph->numOfNodes);
        if(graph->edgesMatrix == NULL){
            destroyGraph(graph);
            printf("EdgesMatrix not created");
        }
        //allocate memory for edgesMatrix columns
        for(int i=0; i< graph->numOfNodes; i++){
            graph->edgesMatrix[i] = calloc(sizeof(bool*), graph->numOfNodes);
            if(graph->edgesMatrix[i] == NULL){
                destroyGraph(graph);
                printf("EdgesMatrix not created");
            }
        }

        graph->humpsMatrix = calloc(sizeof(bool*), graph->numOfNodes);
        if(graph->humpsMatrix == NULL){
            destroyGraph(graph);
            printf("HumpsMatrix not created");
        }
        for(int i=0; i< graph->numOfNodes; i++){
            graph->humpsMatrix[i] = calloc(sizeof(bool*), graph->numOfNodes);
            if(graph->humpsMatrix[i] == NULL){
                destroyGraph(graph);
                printf("HumpsMatrix not created");
            }
        }

        graph->barcodeMatrix = calloc(sizeof(bool*), graph->numOfNodes);
        if(graph->barcodeMatrix == NULL){
            destroyGraph(graph);
            printf("BarCodeMatrix not created");
        }
        for(int i=0; i< graph->numOfNodes; i++){
            graph->barcodeMatrix[i] = calloc(sizeof(bool*), graph->numOfNodes);
            if(graph->barcodeMatrix[i] == NULL){
                destroyGraph(graph);
                printf("BarCodeMatrix not created");
            }
        }
    }
    else{
        printf("Graph not created!");
    }
    return graph;
}

void destroyGraph(graph* graph){
    if(graph->edgesMatrix == NULL){
        free(graph);
        return;
    }
    for (int i = 0 ; i < graph->numOfNodes; i++){
        //only free memory that has been allocated
        if(graph->edgesMatrix[i] != NULL){
            free(graph->edgesMatrix[i]);
        }
    }
    free(graph->edgesMatrix);
}

void printGraph(graph* graph){
    printf("graph {\n");
    for (int from = 0; from < graph->numOfNodes; from++){
        for (int to = 0; to < graph->numOfNodes; to++){
            if(graph->edgesMatrix[from][to]){
                printf("%d -- %d", from, to);
                if(graph->humpsMatrix[from][to]){
                    printf("[label=\"h\"]");
                }
                if(graph->barcodeMatrix[from][to]){
                    printf("[label=\"b\"]");
                }
                printf(";\n");
            }
        }
    }
    printf("}\n");
}
bool addEdge(graph* graph, int from_node, int to_node){
    if(hasEdge(graph, from_node, to_node)){
        return false;
    }
    graph->edgesMatrix[from_node][to_node] = true;
    graph->edgesMatrix[to_node][from_node] = true;
    return true;
}
bool hasEdge(graph* graph, int from_node, int to_node){
    return graph->edgesMatrix[from_node][to_node];
}

bool addHump(graph* graph, int from_node, int to_node){
    if(hasHump(graph, from_node, to_node)){
        return false;
    }
    graph->humpsMatrix[from_node][to_node] = true;
    graph->humpsMatrix[to_node][from_node] = true;
    return true;
}
bool hasHump(graph* graph, int from_node, int to_node){
    return graph->humpsMatrix[from_node][to_node];
}

bool addBarcode(graph* graph, int from_node, int to_node){
    if(hasBarcode(graph, from_node, to_node)){
        return false;
    }
    graph->barcodeMatrix[from_node][to_node] = true;
    graph->barcodeMatrix[to_node][from_node] = true;
    return true;
}
bool hasBarcode(graph* graph, int from_node, int to_node){
    return graph->barcodeMatrix[from_node][to_node];
}

void printEdgeMatrix(graph* graph){
    printf("    ");
    for(int i = 0; i < graph->numOfNodes; i++){
        if (i == graph->numOfNodes-1){
            printf("%03d\n",i);
        }
        else{
            printf("%03d ",i);
        }
    }
    for (int i = 0; i<graph->numOfNodes; i++){
        printf("%03d ",i);
        for (int j = 0; j< graph->numOfNodes; j++){
            if(j == graph->numOfNodes-1){
                printf("%03d\n",graph->edgesMatrix[i][j]);
            }
            else{
                printf("%03d ",graph->edgesMatrix[i][j]);
            }
        }
    }
}

void printHumpsMatrix(graph* graph){
    printf("    ");
    for(int i = 0; i < graph->numOfNodes; i++){
        if (i == graph->numOfNodes-1){
            printf("%03d\n",i);
        }
        else{
            printf("%03d ",i);
        }
    }
    for (int i = 0; i<graph->numOfNodes; i++){
        printf("%03d ",i);
        for (int j = 0; j< graph->numOfNodes; j++){
            if(j == graph->numOfNodes-1){
                printf("%03d\n",graph->humpsMatrix[i][j]);
            }
            else{
                printf("%03d ",graph->humpsMatrix[i][j]);
            }
        }
    }
}

void printBarCodeMatrix(graph* graph){
    printf("    ");
    for(int i = 0; i < graph->numOfNodes; i++){
        if (i == graph->numOfNodes-1){
            printf("%03d\n",i);
        }
        else{
            printf("%03d ",i);
        }
    }
    for (int i = 0; i<graph->numOfNodes; i++){
        printf("%03d ",i);
        for (int j = 0; j< graph->numOfNodes; j++){
            if(j == graph->numOfNodes-1){
                printf("%03d\n",graph->barcodeMatrix[i][j]);
            }
            else{
                printf("%03d ",graph->barcodeMatrix[i][j]);
            }
        }
    }
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
                        printf("|\t\t");
                    }
                    else{
                        if(i != rows-1){
                            printf("|X|\t\t");
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
