#include<iostream>
#include<map>
using namespace std;
int main(){
map<int ,int> mpp;// mapping id like dict ot map an unique with its value....
mpp[0]=0;
mpp[1]=2;//insertion can be doen manier wyas like here mentioned theree type
mpp.insert({3,4});
mpp.insert({9,6});//inset does at lastb like once u executed then agian excuting so it doesnt fit it in midel rather it goes at the end.....
mpp.emplace(5,6);//IMP..EMPLACE DONT USE {} as entry of data rather take s insert as ({3,4}).........
for(auto it: mpp){
    cout<< "{"<< it.first << ","<< it.second << "}" "," << endl;
}
cout<< mpp[0];

 return 0;
}

