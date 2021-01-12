#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
	
	system("title 选号器 快速的飓风 (C) 2020");
	system("color F0");
	
	int randnum = -1;
	srand((unsigned)time(NULL));
	
	long int X, Y;
	
	cout << "输入需要随机号段的上下界（包含上界和下界）" << endl;
	
	cout << "下界：";
	cin >> X;
	cout << "上界：";
	cin >> Y;
	
	while(true){
		cout << endl;
		getchar();
		randnum = rand()%(Y-X+1)+X;
		cout << randnum << endl;
	}
	
	return 0;
	
}