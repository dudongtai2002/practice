#include<iostream>
using namespace std;
#include"Function.h"
#include"float.h"

void print(vector<double>a){
    cout<<"{";
    for(int i=0;i<a.size();i++){
		cout << a[i] << ",";
	}
	cout << "}" << endl;

}

void insert_sort(vector<double>& input){

    double key;
    int i,j=0;
    i++;
    for(i=1;i<input.size();i++){
        key=input[i];
        j=i-1;
        while (j>=0&&input[j]>key) {
            input[j+1]=input[j];
            j--;
        }
        input[j+1]=key;
       
    }
	
}

void insert_sort_down(vector<double>& input){
    double key;
    int i,j=0;
    i=1;
    for(i=1;i<input.size();i++){
        key=input[i];
        j=i-1;
        while (j>=0&&input[j]<key) {
            input[j+1]=input[j];
            j--;
        }
        input[j+1]=key;
    }
}
void merge(vector<double>&input,int a,int b,int c){
    vector<double>left;
    vector<double>right;
    for(int i=a;i<=c;i++){
        left.push_back(input[i]);
    }
    for (int i=c+1; i<=b; i++) {
        right.push_back(input[i]);
    }
    left.push_back(DBL_MAX);
    right.push_back(DBL_MAX);
    int j=0,k=0;
    for (int i=a; i<=b; i++) {
        
        if (left[j]<=right[k]) {
            input[i]=left[j];
            j++;
        }else{
            input[i]=right[k];
            k++;
        }
        
    }
    
    
}
void mergesort(vector<double>&input,int a,int b){
    if(a!=b){
    int c=(a+b)/2;
    mergesort(input, a, c);
    mergesort(input, c+1, b);
    merge(input, a, b,c);
    }
}


void merge_sort(vector<double>& input){
    int size=(int)input.size()-1;
    mergesort(input, 0, size);
    
}