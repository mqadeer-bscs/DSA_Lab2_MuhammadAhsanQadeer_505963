#include <iostream>
#include <vector>
using namespace std;

vector<int> findIndices(int nums[], int key, int size){

    vector<int> index;

    for(int i = 0; i<size; i++)


        if(nums[i]==key)
            index.push_back(i);

    return index;
}

int main(){

    int arr1[] ={2,4,5,6,7,4,4};
    int arr2[] = {5,3,2,0,20,50};
    int arr3[5];

    vector<int> indices1 = findIndices(arr1, 4, 7);
    vector<int> indices2 = findIndices(arr2, 4, 6);
    vector<int> indices3 = findIndices(arr3, 4, 5);

    cout<<"Multiple occurences: ";
    for(int i : indices1){
        cout<<i<<" ";
    }

    cout<<endl <<"No key: ";
    for(int i : indices2){
        cout<<i<<" ";
    }

    cout<<endl <<"No occurences: ";
    for(int i : indices3){
        cout<<i<<" ";
    }

    return 0;
}