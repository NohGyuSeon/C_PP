#include <stdio.h>
int main(void)
{
	int mid_score, final_score;
	double w_average;

	printf("�߰� ��� ������ �Է��Ͻÿ� :");
	scanf("%d",&mid_score);

	printf("�⸻ ��� ������ �Է��Ͻÿ� :");
	scanf("%d",&final_score);
	w_average = (mid_score + final_score)/2.0;

	if(w_average >= 90)
		printf("����� ������ A�����Դϴ�.\n");
	else if(w_average >= 80)
		printf("����� ������ B�����Դϴ�.\n");
	else if(w_average >= 70)
		printf("����� ������ C�����Դϴ�.\n");
	else if(w_average >= 60)
		printf("����� ������ D�����Դϴ�.\n");
	else 
		printf("����� ������ F�����Դϴ�.\n");
		
	return 0;
}
