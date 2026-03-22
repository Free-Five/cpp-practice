#include<iostream>
using namespace std;

int main(){
	int x,y;
	char fu;
	cout << "请输入算式（仅支持加减乘除）：";
	cin >> x >> fu >> y; 
	
	if(fu == '+'){
		cout << "结果：" << x+y << endl;
	}
	else if(fu == '-'){
		cout << "结果：" << x-y << endl;
	}
	else if(fu == '*'){
		cout << "结果：" << x*y << endl;
	}
	else if(fu == '/'){
		if(y == 0){
			cout << "计算错误！" << endl;
		}
		else{
			cout << "结果：" << x/y << endl;
		}
	}
	else{
		cout << "计算错误！" << endl;
	}
	
	system("pause");
	return 0;
}
