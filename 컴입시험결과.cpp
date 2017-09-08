#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct myst {
	char name[8];
	int grade[4];
};

int main() {
	myst student[3];
	int sum[4] = { 0 };
	char* subject[4] = { "국어" , "영어", "수학", "과학" };

	for (int i = 0; i < 3; i++) {
		scanf("%s", &student[i].name);
		for (int j = 0; j < 4; j++) {
			scanf("%d", &student[i].grade[j]);
			sum[j] += student[i].grade[j];
		}
	}


	for (int i = 0; i < 4; i++) {
		printf("%s 평균 : %d\n", subject[i], sum[i] / 3);
		printf("%s 보충수업\n", subject[i]);
		for (int k = 0; k < 3; k++) {
			if (student[k].grade[i] < sum[i] / 3)
				printf("%s ", student[k].name);
		}
		printf("\n");
	}

	return 0;
}