#include<bits/stdc++.h>
using namespace std;
#define V 6
struct trio
{
  int weight;
  int value;
  float ratio;
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
  cout<<"Enter value and weight :"<<endl;
  for(int i=0;i<V;i++){
    cin>>value>>weight;
    graph[i].weight = weight;
    graph[i].value = value;
    graph[i].ratio = (float)value/weight;
  }
  int size;
  float profit=0;
  cout<<"Enter size of Maximum weight: ";
  cin>>size;
  sort(graph,graph+V,myComp());
  vector<pair<float,int> > v;
  for(int i=0;i<V;i++)
  {
    if(size>0 and graph[i].weight<=size)
    {
      profit+=graph[i].value;
      size-=graph[i].weight;
      v.push_back(make_pair(graph[i].value,graph[i].weight));
    }
    else{
      profit+=graph[i].ratio*size;
      v.push_back(make_pair(graph[i].ratio*size,graph[i].weight));
      size=0;
    }
  }

  cout<<"Maximum value"<<profit<<endl;
  cout<<"Item - Weight:"<<endl;
  for(int i=0;i<v.size();i++)
    if(v[i].first)
      cout<<v[i].second<<"-"<<v[i].first<<endl;
  return 0;
}