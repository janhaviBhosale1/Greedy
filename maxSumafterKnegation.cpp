//MAXIMUM ARRAY SUM AFTER K NEGATIONS 
#include<bits/stdc++.h> 
using namespace std;

int maxSum(int arr[], int n, int k){
    for(int i=0;i<n;i++){
        int min=INT_MAX;
        int index=-1;
        for(int j=0;j<n;j++)
        {
            if(arr[j]< min){
                min=arr[j];
                index=j;
            }
        }
        if(min==0)  //in case f 0it is useless to replace 0 with (-0)
        break;
        
        arr[index]=-arr[index];
    }
    //calculate sum
    int sum=0;
    for(int i=0; i<n; i++)
    sum+=arr[i];
    return sum;
}
