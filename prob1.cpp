//문제 1 : 3n+1, 짝수면 2로 나누고 홀수면 3을 곱한 다음 1을 더함,1이 될 때 까지 반복
#include<iostream>
using namespace std;
int main()
{
	//ex) 22 11 34 17 52 ... 16 8 4 2 1
	int i = 0;//입력받을 두개의 변수
	int j = 0;
	int temp;//두 변수를 정렬하기 위한 임시 변수
	int length = 0;//반복할 때 각 수의 사이클 길이
	int maxlength = 0;//사이클 길이 중 최대 길이
	int Loopnum = 0;//내부에서 반복할 때의 수
	while (1)
	{
		cin >> i ;//두 수를 입력받기, -1 입력 시 종료
		if (i == -1){break;}
		cin >> j;
		if (j == -1){break;}
		if (i > j)//첫번쨰 수가 두번째 수보다 큰 경우
		{
			temp = i;//두 수를 서로 교환
			i = j;
			j = temp;
		}
		for (int a = i; a <= j; a++)//i부터 j까지 반복
		{
			Loopnum = a;//a를 직접 바꾸면 반복문을 정상 진행 할 수 없으므로 다른 공간 활용
			if (Loopnum == 1) { length++; }//시작 시 1 인 경우 길이 1 증가
			while (Loopnum != 1)//1이 아니면 반복
			{
				length++;//길이 증가
				if (Loopnum % 2 == 1) { Loopnum = (3 * Loopnum) + 1; }//짝수 일 때
				else if (Loopnum % 2 == 0) { Loopnum /= 2; }//홀수 일 때
				if (Loopnum == 1) { length++; }//1이 되면 길이 1 증가
			}
			if (length > maxlength) { maxlength = length; }//계산 후 길이가 저장된 최대 길이보다 큰 경우 그 값으로 최대 길이 저장
			length = 0;//가변 길이 0으로 초기화
		}
		cout << i << " " << j << " " << maxlength << endl;// i j 최대길이 로 출력
		
	}
	
}