#include<iostream>
using namespace std;
int main() {
int x,y;
cin>>x>>y;
if((x==0) and (y==0)){
    cout<<"O";
}
else if((x==0) and (y!=0)){
    cout<<"y";
}
else if((y==0) and (x!=0)){
    cout<<"x";
}
else if((x>0) and (y>0)){
    cout<<"1";
}
else if((x<0) and (y>0)){
    cout<<"2";
}
else if((x<0) and (y<0)){
    cout<<"3";
}
else {
    cout<<"4";
}
return 0;
}