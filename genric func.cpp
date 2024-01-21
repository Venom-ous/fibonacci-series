#include<iostream>
using namespace std;
template<class T>
int search(T A[], int n, T key){
	for(int i = 0; i<n; i++){
		if(A[i]==key){
			return i;
		}
	}
	return n;
}

int main(){
	int A[] = {1, 4, 12, 6, 76, 13, 56, 2};
	int n = (sizeof(A))/(sizeof(int));
	int key = 76; 
	cout<<search(A, n, key)<<endl;
	return 0;
}
