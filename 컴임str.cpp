#include<stdio.h>

int mystrlen(char*);
int mystrcmp(char*, char*);
char* mystrcat(char*, char*);
char* mystrcpy(char*, char*);

int main() {
	//프로그램에 사용될 기본 string변수들(하나는 배열, 하나는 char*)
	char dest[50] = "Inha";
	char* source = "University";
	int result;

	//mystrcmp 시작

	result = mystrcmp(dest, source);   //strcmp는 비교의 결과를 정수로 나타냅니다.
									   // 0: 같음, 양수: dest가 큼, 음수: source가 큼. 각각 알파벳으로 비교

	printf("result의 값은 %d\n", result);
	if (result == 0) {
		printf("두 문자열이 같습니다.\n");

	}
	else if (result < 0) {
		printf("%s가 %s보다 큽니다.\n", source, dest);

	}
	else {
		printf("%s가 %s보다 큽니다\n", dest, source);

	}

	//mystrcmp 끝


	//mystrcat 시작

	//strcat의 return 값은 dest의 포인터(시작주소)입니다.
	printf("%s\n", mystrcat(dest, source));
	printf("%s\n", dest); //따라서 이 둘의 실행결과는 같습니다.

	mystrcpy(dest, "Inha");   //dest를 다시 "Inha"로 바꿉니다.
							  // strcpy의 return값도 dest의 포인터(시작주소)입니다.

							  //strcat는 이렇게도 사용가능합니다.
	mystrcat(mystrcat(dest, " "), source);
	printf("%s\n", dest);

	//mystrcat 끝


	return 0;

}

//문자열의 길이를 구하는 함수
int mystrlen(char* arr) {
	int i;
	for (i = 0; arr[i] != '\0'; i++)   //NULL문자 까지 길이를 셉니다
		;
	return i;
}

//문자열을 비교하는 함수
int mystrcmp(char* arr1, char* arr2) {
	int a = 0;
	for (int i = 0; ; i++) {
		a = arr1[i] - arr2[i];          //양수이면 arr1, 음수이면 arr2가 큽니다
		if (a != 0)                  // arr1과 arr2가 다르면 a를 리턴
			return a;
		if (arr1[i] == '\0' && arr2[i] == '\0')      //arr1[i]와 arr2[i]가 모두 널문자일 때까지 모두 같으면 0을 리턴
			return 0;
	}
}

//문자열을 붙이는 함수
char* mystrcat(char* arr1, char* arr2) {
	int j;
	int k;
	for (j = 0; arr1[j] != '\0'; j++)   //arr1의 길이를 셉니다
		;
	for (k = 0; arr2[k] != '\0'; k++)
		arr1[j + k] = arr2[k];         //arr1 뒤에 arr2를 붙입니다
	arr1[j + k] = '\0';               //문자열 뒤에 NULL문자를 붙입니다

	return arr1;
}

//문자열을 복사하는 함수
char* mystrcpy(char* arr2, char* arr1) {
	int i;
	for (i = 0; arr1[i] != '\0'; i++)   //NULL문자 전까지 복사합니다
		arr2[i] = arr1[i];
	arr2[i] = '\0';                  //문자열 뒤에 NULL문자를 붙입니다
	return arr2;
}