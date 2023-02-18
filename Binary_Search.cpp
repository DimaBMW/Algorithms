//binary search

//library connection
#include<iostream>
#include<vector>
#include<algorithm>
//namespace declaration
using namespace std;
//function binary search
int binary_search(vector<int> &bin_vector, int item){
    int low=0;                              //the variables low and high store the                                      boundaries of the part in which the                                         search is performed
    unsigned long hight=bin_vector.size();
    while (low<=hight) {//until this part is reduced to one element
        unsigned long mid=(low+hight)/2;//find the midbrain index element
        int number=bin_vector[mid];//store number in this index
    
        if(number==item){return mid+1;}//value found
        if(number>item){hight=mid;}//many
        else if(number<item){low=mid;}//few
    }
    return 0;//value does not exist
}

int main(void){
    setlocale(LC_ALL, "rus");
    vector<int> MyVector={1,2,44,55,67,63,4,6,8,89,100,27};//vector initialization
    sort(MyVector.begin(),MyVector.end());//vector sorting
    cout<<binary_search(MyVector,67)<<endl;
    cout<<binary_search(MyVector,63)<<endl;
    return 0;
}
