#include "head.h"

/**
 * @brief ʹ�������������Ա����
*/
void ioTest() {
	char x;/*�����������ַ��ı���*/
	while (cin.get(x)) {/*ѭ������������ַ�*/
		if (x == 'q') {/*����������q�ַ������˳�����*/
			return;
		}
		if ((x > 'A') and (x < 'Z')) {/*���������Ǵ�д��ĸ��������Ļ����������ַ�*/
			cout.put(x);
		}
	}
	return;
}