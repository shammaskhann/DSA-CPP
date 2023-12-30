#include <iostream>
using namespace std;
struct Driver{
    string cnic;
    bool isCertificated;
    string name;
};
struct Edge{
    int src, dest;
};
//adjanecy list
struct AdjListNode{
    int dest;
    struct AdjListNode* next;
};
struct AdjList{
    struct AdjListNode *head;
};
struct Graph{
    int V;
    struct AdjList* array;
};
void initializeGraph(){
    int V = 5;
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->V = V;
    graph->array = (struct AdjList*)malloc(V*sizeof(struct AdjList));
    for(int i=0;i<V;i++){
        graph->array[i].head = NULL;
    }
}
void main(){
    struct Driver driver;
    driver.cnic = "123456789";
    driver.isCertificated = true;
    driver.name = "Ali";
    cout<<driver.cnic<<endl;
    cout<<driver.isCertificated<<endl;
    cout<<driver.name<<endl;
    struct Edge edge;
    edge.src = 0;
    edge.dest = 1;
    cout<<edge.src<<endl;
    cout<<edge.dest<<endl;
    struct AdjListNode* adjListNode = (struct AdjListNode*)malloc(sizeof(struct AdjListNode));
    adjListNode->dest = 0;
    adjListNode->next = NULL;
    cout<<adjListNode->dest<<endl;
    cout<<adjListNode->next<<endl;
    struct AdjList* adjList = (struct AdjList*)malloc(sizeof(struct AdjList));
    adjList->head = NULL;
    cout<<adjList->head<<endl;
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->V = 5;
    graph->array = (struct AdjList*)malloc(graph->V*sizeof(struct AdjList));
    for(int i=0;i<graph->V;i++){
        graph->array[i].head = NULL;
    }
    cout<<graph->V<<endl;
    cout<<graph->array<<endl;
    cout<<graph->array[0].head<<endl;
    cout<<graph->array[1].head<<endl;
    cout<<graph->array[2].head<<endl;
    cout<<graph->array[3].head<<endl;
    cout<<graph->array[4].head<<endl;
    cout<<graph->array[5].head<<endl;
    cout<<graph->array[6].head<<endl;
    cout<<graph->array[7].head<<endl;
    cout<<graph->array[8].head<<endl;
    cout<<graph->array[9].head<<endl;
    cout<<graph->array[10].head<<endl;
    cout<<graph->array[11].head<<endl;
    cout<<graph->array[12].head<<endl;
    cout<<graph->array[13].head<<endl;
    cout<<graph->array[14].head<<endl;
    cout<<graph->array[15].head<<endl;
    cout<<graph->array[16].head<<endl;
    cout<<graph->array[17].head<<endl;
}
