#include<iostream>
using namespace std;

int  main(){
	int arr[10] = {10,16,7,3,2,8,9,18,15,5};
	int max = arr[0] , min = arr[0] , sum = 0;
	double ave = 0;
	
	cout << "该数组为：" ;
	
	for(int i = 0 ; i < 10 ; i++){
		cout << arr[i] << " " ;
	}
	cout << endl;
	
	//用for循环语句得出max值
	for(int i = 0 ; i < 9 ; i++){
		if(max < arr[i+1]){
			max = arr[i+1];
		}
	}
	
	//用for循环语句得出min值
	for(int i = 0 ; i < 9 ; i++){
		if(min > arr[i+1]){
			min = arr[i+1];
		}
	}
	
	//用for循环语句得出平均值
	for(int i = 0 ; i < 10 ; i++){
		sum+=arr[i];
		//强制把sum改成double类型，不然求出来得值是int类型 
		ave = (double)sum/10.0;
	}
	
	cout << "该数组的最大值为；" << max << endl;
	cout << "该数组的最小值为；" << min << endl;
	cout << "该数组的平均值为；" << ave << endl;
	
	system("pause");
	return 0;
} 

