#include <stdio.h>
#include <stdlib.h>
#define N 6
int gameboard[N][N];

int main(int argc, char *argv[]) 
{

	���� ����;
	init_othello(); // ���� �ʱ�ȭ
	
	while (isGame End()==0) // game ���� ���� Ȯ�� 
	{printf_othello(); //��ġ ���� ��� ��
	if (��ġ�� ������ ĭ�� �ִ��� Ȯ��) 
	    continue; //�� ������ ��� ��ġ�� �Ұ����ϸ� �ݺ��� �׸�
	
	��ġ�� ��ǥ �Է� �ޱ�;
	if(�Է� ��ǥ�� �������� üũ)
	    if(������ �õ�) {
		� ���������� ���;
		�� �ٲ�; }
		
	else 
	    �������� �Է��� ���; 
		 } 
		 check_result(); //�� �� 
		 
}
