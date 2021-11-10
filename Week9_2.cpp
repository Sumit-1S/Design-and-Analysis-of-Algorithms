#include<bits/stdc++.h>
using namespace std;
#define V 4
struct trio
{
  int weight;
  int value;
  double ratio;
};
struct myComp
{
  bool operator()(trio a,trio b)
  {
    return a.ratio>b.ratio;
  }
};
int main()
{
  trio graph[V];
  int weight,value;
  for(int i=0;i<V;i++){
    cin>>value>>weight;
    graph[i].weight = weight;
    graph[i].value = value;
    graph[i].ratio = value/weight;
  }
  int size,profit=0;
  cin>>size;
  sort(graph,graph+V,myComp());
  for(int i=0;i<V;i++)
  {
    if(size>0 and graph[i].weight<=size)
    {
      profit+=graph[i].value;
      size-=graph[i].weight;
    }
    else{
      cout<<graph[i].ratio<<endl;
      profit+=graph[i].ratio*size;
      size=0;
    }
  }

  cout<<profit;

  return 0;
}