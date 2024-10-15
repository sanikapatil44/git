#include<iostream>
#include<vector>
using namespace std;

int main(){

//creation
   vector<int> marks;
   //vector<int> miles(10);
//vector<int> distance(15,0);
marks.push_back(10);
marks.push_back(22);
cout<<"Size:"<<marks.size()<<endl;
marks.pop_back();
cout<<"Size:"<<marks.size()<<endl;




return 0;

}