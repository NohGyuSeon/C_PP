#include <stdio.h>

int ary_set(int s[], int n, int val)
{
	int i;
	
	for(i=0; i<n; i++) {
 		s[i] = val;
	}	 
	 
	for(i=0; i<n; i++) {
 		printf("%d ", s[i]);
	}	 
	 
 } 
 
 int main(void)
 {
 	int v[256];
 	int i, n, val;
 	printf("�Է��� �迭 ����� ������ �Է��ϼ���.\n");
 	scanf("%d %d", &n, &val);
 	
 	ary_set(v, n, val);
 	
 	return 0;
 } 
