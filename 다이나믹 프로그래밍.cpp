#include <stdio.h>

// DP -> 하나의 문제는 단 한 번만 풀도록 하는 알고리즘 
// DP -> 규칙성 찾기 => 점화식 도출 (Imagination을 통한 이해, 그림)
int d[100];

int dp(int x) {
	if(x == 1) return 1;
	if(x == 2) return 1;
	if(d[x] != 0) return d[x];
	return d[x] = dp(x - 1) + dp(x - 2);
}

int main(void) {
	printf("%d", dp(30));
}

