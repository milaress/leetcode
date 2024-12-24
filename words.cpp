#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;
int main(){
vector<vector<int>>grid(5,vector<int>(2,10));
for(auto i:grid){
    for(auto j:i){
        cout<<setw(3)<<j;
    }
    cout<<endl;
}
cout<<"enter the new values of the grid: "<<endl;
for(int i=0;i<grid.size();i++){
    for(int j=0;j<grid[i].size();j++){
        cout<<"grid[i][j]=";
        cin>>grid[i][j];
    }
}
cout<<"the new list: "<<endl;
for(auto i:grid){
    for(auto j:i){
        cout<<setw(3)<<j;
    }
    cout<<endl;
}
cout<<"hello";
}