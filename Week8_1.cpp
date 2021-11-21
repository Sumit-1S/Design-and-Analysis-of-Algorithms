#include <bits/stdc++.h>
using namespace std;

#define V 7

int minKey(int key[], int mstSet[])
{
	int min = INT_MAX, min_index;
	for (int v = 0; v < V; v++)
		if (mstSet[v] == 0 && key[v] < min)
			min = key[v], min_index = v;
	return min_index;
}

int miniVertex(int key[], int visited[V])
{
  int min=0;
  for(int i=0;i<V;i++)
    if(!visited[i] and key[i]<key[min])
      min = i;
  return min;
}

int primsMST(int graph[V][V])
{
  int parent[V],key[V],visited[V];
  for(int i=0;i<V;i++)
    key[i] = INT_MAX,visited[i]=0;
  key[0]=0;
  parent[0]=-1;
  for(int count=0;count<V-1;count++)
  {
    int u = minKey(key,visited);
    visited[u]=1;
    for(int v=0; v<V; v++)
      if(graph[u][v] and visited[v]==0 and graph[u][v]<key[v])
        key[v] = graph[u][v],parent[v]=u;
  }
  int cost=0;
  for(int i=0;i<V;i++)
    cost+=key[i];
  return cost;
}

int main()
{
  int graph[V][V] = {{0,0,7,5,0,0,0},
                    {0,0,8,5,0,0,0},
                    {7,8,0,9,7,0,0},
                    {5,0,9,0,15,6,0},
                    {0,5,7,15,0,8,9},
                    {0,0,0,6,8,0,11},
                    {0,0,0,0,9,11,0}};
	cout<<"Minimum spanning Weight : "<<primsMST(graph)<<endl;
	return 0;
}