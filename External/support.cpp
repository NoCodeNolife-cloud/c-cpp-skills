#include <iostream>
extern double warming;//extern�ⲿ����
void update(double dt);
void local();
void update(double dt) {
	using namespace std;
	extern double warming;//��������ѡ,ָ���ú�������Ƴ�ʹ���ⲿ����
	warming += dt;//ʹ���ⲿ����
	cout << "Updating global warming to "
		<< warming//ȫ���ⲿ����
		<< " degrees."
		<< endl;
	return;
}
void local() {
	using namespace std;
	double warming = 0.8;
	cout << "Local warming = "
		<< warming
		<< " degrees."
		<< endl
		<< "But global warming = "
		<< ::warming//�����������"::",���ڱ�����ǰ��ʱ,���������ʾʹ�ñ�����ȫ�ְ汾
		<< " degrees."
		<< endl;
	return;
}