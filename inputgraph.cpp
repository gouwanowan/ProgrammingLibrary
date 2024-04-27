#include <iostream>
#include <vector>

using namespace std ;

//Nodes:頂点の数
//Edges:辺の数
//Undirected:無向グラフならTrue
//OneIndexed:頂点番号が1-indexedならTrue
vector<vector<int64_t>> graphInput(int Nodes, int Edges, bool Undirected, bool OneIndexed){
    vector<vector<int64_t>> list(Nodes, vector<int64_t>(0)) ;
    int StartIndex = 0 ;
    if (OneIndexed)
    {
        StartIndex = 1 ;
    }
    for (int i = 0; i < Edges; i++)
    {
        int64_t a,b ;
        cin >> a >> b ;
        list.at(a-StartIndex).push_back(b-StartIndex) ;
        if (Undirected)
        {
            list.at(b-StartIndex).push_back(a-StartIndex) ;
        }
    }
    return list ;
}

int main(){
    int n,m;
    cin >> n >> m ;
    vector<vector<int64_t>> list = graphInput(n,m,true,true) ;
}