#include <stdio.h>
#include <math.h>

enum shape_type { TRIANGLE, RECTANGLE, CIRCLE };
struct shape {
	int type;
		union {
			struct {
				int base, height;
			} tri;
			struct {
				int width, height;
			} rect;
			struct {
				int radius;
			} circ;
	} p;
};

int main(void)
{
	struct shape s;
	enum shape_type type;
	printf("������ Ÿ���� �Է��Ͻÿ�(0, 1, 2) : ");
	scanf("%d", &type);
	switch(type) {
	case TRIANGLE:
		printf("�غ��� �������� �Է��Ͻÿ�(���� �� 100 200): ");
		scanf("%d %d", &s.p.tri.base, &s.p.tri.height);
		printf("������ %d\n", (int)(0.5*s.p.tri.base*s.p.tri.height));
		break;
	case RECTANGLE:
		printf("���ο� ������ ���̸� �Է��Ͻÿ�(���� �� 100 200):");
		scanf("%d %d", &s.p.rect.width, &s.p.rect.height);
		printf("������ %d\n", (int)(s.p.rect.width*s.p.rect.height));
		break;
	case CIRCLE:
		printf("�������� �Է��Ͻÿ�(���� �� 100): ");
		scanf("%d", &s.p.circ.radius);
		printf("������ %d\n", (int)(3.14*s.p.circ.radius*s.p.circ.radius));
		break;
	} 
	
	return 0;
}
