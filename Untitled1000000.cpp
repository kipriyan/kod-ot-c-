#include <iostream>
using namespace std;
int main (){
long long chislaOtKoitoDaSeTursi,brNarastvashti=10,turseno;
long long vuvedeno[1000];
long long ind=0;
long long min1=0;
long long max1=1000000;
for(ind=0;ind<brNarastvashti;++ind){
    cin>>vuvedeno[ind];
}
cin>>turseno;
for(ind=1;ind<brNarastvashti;++ind){
if(vuvedeno[ind]<turseno){
    min1=vuvedeno[ind];
    cout<<" nadolo we ";
}
if(vuvedeno[ind]>turseno){
    max1=vuvedeno[ind];
    cout<<" nagore we ";
}
}
for(ind=1;ind<brNarastvashti;++ind){
    if(vuvedeno[ind]==turseno){
        cout<<"namerih go na index "<<ind+1;
    }
}
       return 0;
}
