#include <iostream>
using namespace std;
int main (){
long long chislaOtKoitoDaSeTursi,brNarastvashti=10,turseno;
long long vuvedeno[1000];
long long ind=0;
long long min1=0;
long long max1=1000000;
bool namerihLiGo=false;
for(ind=0;ind<brNarastvashti;++ind){
    cin>>vuvedeno[ind];
}
cin>>turseno;

for(ind=1;ind<brNarastvashti&&(!namerihLiGo);++ind){
    if(vuvedeno[ind]==turseno){
            namerihLiGo=true;
        cout<<"namerih go na index "<<ind+1;
    }
}

       return 0;
}
