#include<iostream>
using namespace std;
template<class A>
A fab(A x) {
	return x >= 0 ? x : -x;
}


int main() {
	cout << "输入你要求绝对值的数" << endl;
	double x;
	cin >> x;
	cout << "绝对值为：" << fab(x);
	return 0;



}