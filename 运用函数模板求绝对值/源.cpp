#include<iostream>
using namespace std;
template<class A>
A fab(A x) {
	return x >= 0 ? x : -x;
}


int main() {
	cout << "������Ҫ�����ֵ����" << endl;
	double x;
	cin >> x;
	cout << "����ֵΪ��" << fab(x);
	return 0;



}