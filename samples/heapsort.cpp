#include <queue.h>

void main ()
{
	setlocale(LC_CTYPE, "Russian");
	cout << "������������� ��������������" << endl;
	cout << "������� ������� ����" << endl;
	int a;
	cin >> a;
	DHeap<int> *heap = new DHeap <int> (a,0);
	cout << "������ ����������" << endl;
	int b;
	cin >> b;
	int c;
	for (int i=0;i<b;i++)
	{
		cout << "������� " << i << "-� ������� ����" << endl;
		cin >> c;
		heap->push(c);
	}
	system("cls");
	cout << "���� ���� ���������� ��� �����(�� ����� �������� �����, �� �������): " << endl;
	heap->vyvod();

	cout << "���������?? (1 - ��, 2 - ���, ������ ���� �������� ����������) " << endl;
	cin >> a;
	switch (a)
	{
	case 1:
		cout << "�������)) " << endl;
		break;
	case 2:
		cout << "�� ��� (" << endl;
		return;
	default:
		cout << "���� 1, ���� 2!" << endl;
	}

	cout << "����� ���������� ���� �������� ��� ���: " << endl;
	heap->okych();
	heap->vyvod();
	cout << "����� ���������� ��� ��� ���: " << endl;
	
	heap->Sort();
	heap->vyvod();

}
