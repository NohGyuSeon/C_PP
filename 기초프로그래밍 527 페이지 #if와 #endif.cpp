#if (DEBUG == 1)   // DEBUG 값이 1이면 컴파일
	printf("value = %d\n", value);
#endif

#if(VERSION > 3)   // 버전이 3 이상이면 컴파일

#endif

#if ()   // 여기서부터 시작하여
void test()
{
	/* 여기에 주석이 있다면 코드 전체를 주석 처리하는 것이 쉽지 않다. */
	sub();	 
 } 
#endif   // 여기까지 주석 처리된다. 
