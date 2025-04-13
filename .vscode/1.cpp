#include<isostrem>

using namespace std;
public:

 int  larg(int array[], int n){
    int max=0;
    for(int i=0:i<n; i++){
        if(max<=array[i]) return max=array[i];
    }
    return max;
}

int main(){
    int ar[]={9,2,1,3,11,4};
    int n=ar.size();
    larg(ar);
    
}