#include<iostream>
using namespace std;

int main(){
	int arr[5] = {300,350,200,400,250};
	for(int i = 0;i < 5;i ++){
		if(arr[i]>arr[i+1]){
			cout << "最终的小猪为：" << arr[i] << endl;
		}
	}
	system("pause");
	
	return 0;
} 
