#include <stdio.h>
#include <math.h>
#include <locale.h>
#define N 100

double* full_elements(double* ptr_array, int n);
int put_elements(double* ptr_array, int n);
double* calc_elements(double* ptr_array, int n);

int main()
{
	setlocale(LC_ALL, "RUS");
	double array[N]; //���������� ������������ ������� ������� �����������
	// ���� ����� ���������
	int size;
	
	printf("������� ������ �������: "); 
	scanf("%d", &size);  

	full_elements(array, size);
	put_elements(array, size);

	//��������� ��������� ������� � ������
	calc_elements(array, size);

	// ������ ������� ����� ���������
	put_elements(array, size);

	return 0;

}

double* full_elements(double* ptr_array, int n)
{
	printf("������� �������� �������:\n");
	for (int i = 0; i < n; i++) {
		printf("������� %d: ", i + 1);
		scanf("%lf", &ptr_array[i]);
	}
	return ptr_array;
  
}

int put_elements(double* ptr_array, int n) {
	printf("�������� �������:\n");
	for (int i = 0; i < n; i++) {
		printf("%.2lf ", ptr_array[i]);
	}
	printf("\n");
	return 0;
}

double* calc_elements(double* ptr_array, int n) {
	for (int i = 0; i < n; i++) {
		ptr_array[i] /= 10.0;
	}
	return ptr_array;
}