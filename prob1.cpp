//���� 1 : 3n+1, ¦���� 2�� ������ Ȧ���� 3�� ���� ���� 1�� ����,1�� �� �� ���� �ݺ�
#include<iostream>
using namespace std;
int main()
{
	//ex) 22 11 34 17 52 ... 16 8 4 2 1
	int i = 0;//�Է¹��� �ΰ��� ����
	int j = 0;
	int temp;//�� ������ �����ϱ� ���� �ӽ� ����
	int length = 0;//�ݺ��� �� �� ���� ����Ŭ ����
	int maxlength = 0;//����Ŭ ���� �� �ִ� ����
	int Loopnum = 0;//���ο��� �ݺ��� ���� ��
	while (1)
	{
		cin >> i ;//�� ���� �Է¹ޱ�, -1 �Է� �� ����
		if (i == -1){break;}
		cin >> j;
		if (j == -1){break;}
		if (i > j)//ù���� ���� �ι�° ������ ū ���
		{
			temp = i;//�� ���� ���� ��ȯ
			i = j;
			j = temp;
		}
		for (int a = i; a <= j; a++)//i���� j���� �ݺ�
		{
			Loopnum = a;//a�� ���� �ٲٸ� �ݺ����� ���� ���� �� �� �����Ƿ� �ٸ� ���� Ȱ��
			if (Loopnum == 1) { length++; }//���� �� 1 �� ��� ���� 1 ����
			while (Loopnum != 1)//1�� �ƴϸ� �ݺ�
			{
				length++;//���� ����
				if (Loopnum % 2 == 1) { Loopnum = (3 * Loopnum) + 1; }//¦�� �� ��
				else if (Loopnum % 2 == 0) { Loopnum /= 2; }//Ȧ�� �� ��
				if (Loopnum == 1) { length++; }//1�� �Ǹ� ���� 1 ����
			}
			if (length > maxlength) { maxlength = length; }//��� �� ���̰� ����� �ִ� ���̺��� ū ��� �� ������ �ִ� ���� ����
			length = 0;//���� ���� 0���� �ʱ�ȭ
		}
		cout << i << " " << j << " " << maxlength << endl;// i j �ִ���� �� ���
		
	}
	
}