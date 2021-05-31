#include<stdlib.h>
#include<stdio.h>
 
typedef struct {
    unsigned int first;
    unsigned int second;
} edge;
 
static unsigned int cyclic_recursive(const edge *edges, unsigned int n, unsigned int *visited,
        unsigned int order, unsigned int vertex, unsigned int predecessor)
{
    unsigned int i;
    unsigned int cycle_found = 0;
    visited[vertex] = 1;
    for (i = 0; i < n && !cycle_found; i++) {
        if (edges[i].first == vertex || edges[i].second == vertex) {
            /* Adjacent */
            const unsigned int neighbour = edges[i].first == vertex ?
                    edges[i].second : edges[i].first;
            if (visited[neighbour] == 0) {
                /* Not yet visited */
                cycle_found = cyclic_recursive(edges, n, visited, order, neighbour, vertex);
            }
            else if (neighbour != predecessor) {
                /* Found a cycle */
                cycle_found = 1;
            }
        }
    }
    return cycle_found;
}
 
unsigned int cyclic(const edge *edges, unsigned int n, unsigned int order)
{
    unsigned int *visited = calloc(order, sizeof(unsigned int));
    unsigned int cycle_found;
    if (visited == NULL) {
        return 0;
    }
    cycle_found  = cyclic_recursive(edges, n, visited, order, 0, 0);
    free(visited);
    return cycle_found;
}
int main(void)
{
int n,order,i,j,k;
printf("Enter no of vertices:");
scanf("%d",&order);
printf("\nEnter no of edges: ");
scanf("%d",&n);
edge *edges;
    unsigned int c;
    
    edges = malloc(n * sizeof(edge));
    if (edges == NULL) {
        return 1;
    }
    k=0;
    for(i=0;i<n;i++)
    {
    	for(j=0;j<2;j++)
    	{
    		if(k==j)
    		{
    			printf("Enter edges[%d].first=",i);
    			scanf("%d",&edges[i].first);
			}
			else
			{
				printf("Enter edges[%d].second=",i);
				scanf("%d",&edges[i].second);
			}
		}
	}
    /* const unsigned int order = 6; /* Vertices 
    
    const unsigned int n = 6; /* Edges 
    edge *edges;
    unsigned int c;
    
    edges = malloc(n * sizeof(edge));
    if (edges == NULL) {
        return 1;
    }
 
    edges[0].first = 0;
    edges[0].second = 1;
    edges[1].first = 1;
    edges[1].second = 2;
    edges[2].first = 2;
    edges[2].second = 3;
    edges[3].first = 3;
    edges[3].second = 0;
    edges[4].first = 3;
    edges[4].second = 4;
    edges[5].first = 3;
    edges[5].second = 5;
 */
    c = cyclic(edges, n, order);
    printf("Graph is %s.\n", c ? "cyclic" : "acyclic");
    free(edges);
 
    return 0;
}
