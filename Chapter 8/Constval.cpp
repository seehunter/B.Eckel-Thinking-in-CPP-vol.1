//: C08:Constval.cpp
// ����������� �������� �� ��������
// ����������� ��� ���������� �����

int f3() { return 1; }
const int f4() { return 1; }

int main() {
	const int j = f3();		// �������� ���������
	int k = f4();			// �� � ��� ���� ��������
} ///:~