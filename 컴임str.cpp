#include<stdio.h>

int mystrlen(char*);
int mystrcmp(char*, char*);
char* mystrcat(char*, char*);
char* mystrcpy(char*, char*);

int main() {
	//���α׷��� ���� �⺻ string������(�ϳ��� �迭, �ϳ��� char*)
	char dest[50] = "Inha";
	char* source = "University";
	int result;

	//mystrcmp ����

	result = mystrcmp(dest, source);   //strcmp�� ���� ����� ������ ��Ÿ���ϴ�.
									   // 0: ����, ���: dest�� ŭ, ����: source�� ŭ. ���� ���ĺ����� ��

	printf("result�� ���� %d\n", result);
	if (result == 0) {
		printf("�� ���ڿ��� �����ϴ�.\n");

	}
	else if (result < 0) {
		printf("%s�� %s���� Ů�ϴ�.\n", source, dest);

	}
	else {
		printf("%s�� %s���� Ů�ϴ�\n", dest, source);

	}

	//mystrcmp ��


	//mystrcat ����

	//strcat�� return ���� dest�� ������(�����ּ�)�Դϴ�.
	printf("%s\n", mystrcat(dest, source));
	printf("%s\n", dest); //���� �� ���� �������� �����ϴ�.

	mystrcpy(dest, "Inha");   //dest�� �ٽ� "Inha"�� �ٲߴϴ�.
							  // strcpy�� return���� dest�� ������(�����ּ�)�Դϴ�.

							  //strcat�� �̷��Ե� ��밡���մϴ�.
	mystrcat(mystrcat(dest, " "), source);
	printf("%s\n", dest);

	//mystrcat ��


	return 0;

}

//���ڿ��� ���̸� ���ϴ� �Լ�
int mystrlen(char* arr) {
	int i;
	for (i = 0; arr[i] != '\0'; i++)   //NULL���� ���� ���̸� ���ϴ�
		;
	return i;
}

//���ڿ��� ���ϴ� �Լ�
int mystrcmp(char* arr1, char* arr2) {
	int a = 0;
	for (int i = 0; ; i++) {
		a = arr1[i] - arr2[i];          //����̸� arr1, �����̸� arr2�� Ů�ϴ�
		if (a != 0)                  // arr1�� arr2�� �ٸ��� a�� ����
			return a;
		if (arr1[i] == '\0' && arr2[i] == '\0')      //arr1[i]�� arr2[i]�� ��� �ι����� ������ ��� ������ 0�� ����
			return 0;
	}
}

//���ڿ��� ���̴� �Լ�
char* mystrcat(char* arr1, char* arr2) {
	int j;
	int k;
	for (j = 0; arr1[j] != '\0'; j++)   //arr1�� ���̸� ���ϴ�
		;
	for (k = 0; arr2[k] != '\0'; k++)
		arr1[j + k] = arr2[k];         //arr1 �ڿ� arr2�� ���Դϴ�
	arr1[j + k] = '\0';               //���ڿ� �ڿ� NULL���ڸ� ���Դϴ�

	return arr1;
}

//���ڿ��� �����ϴ� �Լ�
char* mystrcpy(char* arr2, char* arr1) {
	int i;
	for (i = 0; arr1[i] != '\0'; i++)   //NULL���� ������ �����մϴ�
		arr2[i] = arr1[i];
	arr2[i] = '\0';                  //���ڿ� �ڿ� NULL���ڸ� ���Դϴ�
	return arr2;
}