#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
	
	system("title ѡ���� ���ٵ�쫷� (C) 2020");
	system("color F0");
	
	int randnum = -1;
	srand((unsigned)time(NULL));
	
	long int X, Y;
	
	cout << "������Ҫ����Ŷε����½磨�����Ͻ���½磩" << endl;
	
	cout << "�½磺";
	cin >> X;
	cout << "�Ͻ磺";
	cin >> Y;
	
	while(true){
		cout << endl;
		getchar();
		randnum = rand()%(Y-X+1)+X;
		cout << randnum << endl;
	}
	
	return 0;
	
}