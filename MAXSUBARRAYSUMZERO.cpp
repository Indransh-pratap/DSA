#include <iostream>
#include <unordered_map>  
using namespace std;

int maxLen(int arr[], int n) {
    unordered_map<int,int> mpp; 
    int maxi = 0, sum =0;
    for(int i=0; i<n; i++){
        sum +=arr[i];
        if(sum==0){
            maxi = i+1;
        }
        else{
            if(mpp.find(sum)!=mpp.end()){
                maxi = max(maxi,i-mpp[sum]);
            }
            else{
                mpp[sum]=i;
            }
        }
    }
    return maxi;
}

int main() {
    int arr[] = {1, 2, 3,6,7,-1,2,0};
    cout << maxLen(arr, 8);
}
