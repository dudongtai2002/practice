#include<iostream>
using namespace std;
#include "Function.h"
#include<vector>

int main(){
         vector<double>array={31,41,59,26,41,58};
        //insert sort
         insert_sort(array);
         print(array);
         insert_sort_down(array);
         print(array);
       //merge sort
         merge_sort(array);
         print(array);
         cout<<"Wtf!"<<endl;
}