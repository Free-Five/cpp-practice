#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>  //这个为使用字符串所需要的头文件 
using namespace std;

int main(){
	//设立一个随机种子，第2，3行均为随机种子所需的头文件 
	srand(time(NULL));
	string ch = "yes";
	
	//大循环，整体框架，可以反复游玩 
	while(ch == "yes"){
		int t = rand() % 100 + 1;  
	    int count = 0 , s;
	    cout << "我们来猜一个1~100之间的数字吧" << endl;
	    
	    //嵌套循环，进行猜测与判断 
	    //用while循环会直接被跳过，需要注意 
	    do{
	    	cout << "你猜的数字是：" ; 
	    	cin >> s;
	    	count++;
	    	
	    	if(s > t){
	    		cout << "你猜的大了。" << endl;
			}
			else if(s < t){
	    		cout << "你猜的小了。" << endl;
			}
			else{
				cout << "猜对了！" << endl; 
				cout << "你一共猜了" << count << "次！" << endl;
			} 
		}while(s != t);
		
		//询问，同意即重开游戏 
		cout << "你还想在玩吗？（请输入yes或no）" << endl;
		cin >> ch;
		if(ch == "yes"){
			cout << "好哦，那我们再来一局吧" << endl;
		}
        
	}
        //退出 
	cout << "好吧，那我们下次再见~" << endl;
	
	system("pause");
	return 0;
	
} 
