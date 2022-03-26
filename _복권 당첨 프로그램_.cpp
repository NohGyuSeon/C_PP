#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{	
	while(1)
	{
		int R = 0, N6 = 0, N5 = 0, N4 = 0, N3 = 0, N2 = 0, N1 = 0;
		int month, day;
		int coin1, coin2;
		int coin1_sub;
		srand(time(NULL));
		printf("복권 당첨 날짜의 월을 입력하세요 : ");
		scanf("%d", &month);
		printf("복권 당첨 날짜의 일을 입력하세요 : ");
		scanf("%d", &day);
		printf("\n");
		 
		R = (R + day) * month;
		N6 = (N6 + day) * month;
		N5 = (N5 + day) * month;
		N4 = (N4 + day) * month;
		N3 = (N3 + day) * month;
		N2 = (N2 + day) * month;	
		N1 = (N1 + day) * month;
		
		R += rand();
		N6 += rand();
		N5 += rand();
		N4 += rand();
		N3 += rand();
		N2 += rand();	
		N1 += rand();
		
		coin1 = rand();
		coin2 = rand();
		coin1_sub = rand();
		coin1 = coin1 % 2;
		coin2 = coin2 % 3;
		coin1_sub = coin1_sub % 2;
		
		R = R % 10;
		N6 = N6 % 10;
		N5 = N5 % 10;	
		N4 = N4 % 10;
		N3 = N3 % 10;
		N2 = N2 % 10;
		N1 = N1 % 10;
		
		if ( R == 1 || R == 2 || R == 4 || R == 5 || R == 7 || R == 8 ) // 조 단위 60 % 
		{
			if ( coin1 == 0) // 50%
			{
				R = 4;
			}
			else if ( coin1 == 1) // 50%
			{
				R = 1;
			} 	
		}	
		else if ( R == 3 || R == 6 || R == 9) // 조 단위 30% 
		{
			if ( coin1 == 0)  // 50%
			{
				R = 2;
			}
			else if ( coin1 == 1) // 50%
			{
				R = 3;
			} 	
		}
		else if ( R == 0) // 조 단위 10% 
		{
			R = 5; // 100%
		} 
		
		// ------------------------------------------------------------------//
		
		if ( N6 == 1 || N6 == 2 || N6 == 4 || N6 == 8 ) // 십만 단위 40% 
		{
			if ( coin2 == 0) // 30%
			{
				N6 = 1;
			}
			else if ( coin2 == 1) // 40%
			{
				N6 = 5;
			} 	
			else if ( coin2 == 2) // 30%
			{
				N6 = 4;
			} 	
		}	
		else if ( N6 == 3 || N6 == 6 || N6 == 9) // 십만 단위 30% 
		{
			if ( coin2 == 0) // 30%
			{
				N6 = 3;
			}
			else if ( coin2 == 1) // 40%
			{
				N6 = 7;
			} 	
			else if ( coin2 == 2) // 30%
			{
				N6 = 6;
			} 	
		}
		else if ( N6 == 5 || N6 == 7 ) // 십만 단위 20% 
		{
			if ( coin1 == 0) // 50%
			{
				N6 = 0;
			}
			else if ( coin1 == 1) // 50%
			{
				N6 = 9;
			} 	
		} 
		else if ( N6 == 0) // 십만 단위 10% 
		{
			if ( coin1 == 0) // 50%
			{
				N6 = 2;
			}
			else if ( coin1 == 1) // 50%
			{
				N6 = 8;
			} 	
		} 
		
		// ------------------------------------------------------------------//
		
		if ( N5 == 1 || N5 == 2 || N5 == 4 || N5 == 5 || N5 == 7 || N5 == 8 ) // 만 단위 60% 
		{
			if ( coin1 == 0)
			{
				if ( coin1_sub == 0) // 25%
				{
					N5 = 1;
				}
				else if ( coin1_sub == 1) // 25%
				{
					N5 = 6;
				}
			}
			else if ( coin1 == 1)
			{
				if ( coin1_sub == 0) // 25%
				{
					N5 = 7;
				}
				else if ( coin1_sub == 1) // 25%
				{
					N5 = 9;
				}
			} 	
		}
		else if ( N5 == 3 || N5 == 6 || N5 == 9) // 만 단위 30% 
		{
			if ( coin2 == 0) // 30%
			{
				N5 = 5;
			}
			else if ( coin2 == 1) // 40%
			{
				N5 = 3;
			} 	
			else if ( coin2 == 2) // 30%
			{
				N5 = 4;
			} 	
		}
		else if ( N5 == 0 ) // 만 단위 10% 
		{
			if ( coin2 == 0) // 30%
			{
				N5 = 0;
			}
			else if ( coin2 == 1) // 40%
			{
				N5 = 8;
			} 	
			else if ( coin2 == 2) // 30%
			{
				N5 = 1;
			} 	
		} 
	
		// ------------------------------------------------------------------//
		
		if ( N4 == 1 || N4 == 2 || N4 == 4 || N4 == 5 || N4 == 7 || N4 == 8 ) // 천 단위 60% 
		{
			if ( coin2 == 0) // 30%
			{
				N4 = 9;
			}
			else if ( coin2 == 1) // 40%
			{
				N4 = 2;
			} 	
			else if ( coin2 == 2) // 30%
			{
				N4 = 7;
			} 	
		}
		else if ( N4 == 3 || N4 == 6 || N4 == 9) // 천 단위 30% 
		{
			if ( coin2 == 0) // 30%
			{
				N4 = 0;
			}
			else if ( coin2 == 1) // 40%
			{
				N4 = 4;
			} 	
			else if ( coin2 == 2) // 30%
			{
				N4 = 3;
			} 	
		}
		else if ( N4 == 0 ) // 천 단위 10% 
		{
			if ( coin1 == 0)
			{
				if ( coin1_sub == 0) // 25%
				{
					R = 1;
				}
				else if ( coin1_sub == 1) // 25%
				{
					N4 = 5;
				}
			}
			else if ( coin1 == 1)
			{
				if ( coin1_sub == 0) // 25%
				{
					N4 = 6;
				}
				else if ( coin1_sub == 1) // 25%
				{
					N4 = 7;
				}
			} 	
		} 
		
		// ------------------------------------------------------------------//
			
		if ( N3 == 1 || N3 == 2 || N3 == 4 || N3 == 8 ) // 백 단위 40% 
		{
			N3 = 2;
		}
		else if ( N3 == 3 || N3 == 6 || N3 == 9) // 백 단위 30% 
		{
			if ( coin2 == 0) // 30%
			{
				N3 = 0;
			}
			else if ( coin2 == 1) // 40%
			{
				N3 = 6;
			} 	
			else if ( coin2 == 2) // 30%
			{
				N3 = 8;
			} 	
		}
		else if ( N3 == 5 || N3 == 7 ) // 백 단위 20% 
		{
			if ( coin1 == 0) // 50%
			{
				N3 = 8;
			}
			else if ( coin1 == 1) // 50%
			{
				N3 = 9;
			} 	
		} 
		else if ( N3 == 0) // 백 단위 10% 
		{
			if ( coin1 == 0)
			{
				if ( coin1_sub == 0) // 25%
				{
					N3 = 3;
				}
				else if ( coin1_sub == 1) // 25%
				{
					N3 = 4;
				}
			}
			else if ( coin1 == 1)
			{
				if ( coin1_sub == 0) // 25%
				{
					N3 = 5;
				}
				else if ( coin1_sub == 1) // 25%
				{
					N3 = 7; 
				}
			} 	
		} 
		
		// ------------------------------------------------------------------//
		
		if ( N2 == 1 || N2 == 2 || N4 == 3 || N2 == 4 || N2 == 5 || N2 == 7 || N2 == 8 ) // 십 단위 70% 
		{
			if ( coin2 == 0) // 30%
			{
				N2 = 3;
			}
			else if ( coin2 == 1) // 40%
			{
				N2 = 4;
			} 	
			else if ( coin2 == 2) // 30%
			{
				N2 = 1;
			} 	
		}
		else if ( N4 == 6 || N4 == 9 ) // 십 단위 20% 
		{
			if ( coin2 == 0) // 30%
			{
				N2 = 7;
			}
			else if ( coin2 == 1) // 40%
			{
				N2 = 2;
			} 	
			else if ( coin2 == 2) // 30%
			{
				N2 = 9;
			} 	
		}
		else if ( N2 == 0 ) // 십 단위 10% 
		{
			if ( coin1 == 0)
			{
				if ( coin1_sub == 0) // 25%
				{
					N2 = 0;
				}
				else if ( coin1_sub == 1) // 25%
				{
					N2 = 4;
				}
			}
			else if ( coin1 == 1)
			{
				if ( coin1_sub == 0) // 25%
				{
					N2 = 6;
				}
				else if ( coin1_sub == 1) // 25%
				{
					N2 = 8;
				}
			} 	
		} 
		
		// ------------------------------------------------------------------//
		
		if ( N1 == 0 || N1 == 1 || N1 == 2 || N1 == 3 || N1 == 4 || N1 == 6 || N1 == 8 ) // 일 단위 70% 
		{
			if ( coin2 == 0) // 30%
			{
				N1 = 6;
			}
			else if ( coin2 == 1) // 40%
			{
				N1 = 7;
			} 	
			else if ( coin2 == 2) // 30%
			{
				N1 = 8;
			} 	
		}
		else if ( N1 == 5 || N1 == 7 ) // 일 단위 20% 
		{
			if ( coin2 == 0) // 30%
			{
				N1 = 5;
			}
			else if ( coin2 == 1) // 40%
			{
				N1 = 2;
			} 	
			else if ( coin2 == 2) // 30%
			{
				N1 = 9;
			} 	
		}
		else if ( N2 == 9 ) // 일 단위 10% 
		{
			if ( coin1 == 0)
			{
				if ( coin1_sub == 0) // 25%
				{
					N2 = 0;
				}
				else if ( coin1_sub == 1) // 25%
				{
					N2 = 1;
				}
			}
			else if ( coin1 == 1)
			{
				if ( coin1_sub == 0) // 25%
				{
					N2 = 3;
				}
				else if ( coin1_sub == 1) // 25%
				{
					N2 = 4;
				}
			} 	
		}
		
		// 3  3  2  2    / 4  3  3    / 3  3  4    / 1  3  2  4    / 3  3  4    / 3  3  4
		// 40 30 20 10   / 60 30 10   / 60 30 10   / 40 30 20 10   / 70 20 10   / 70 20 10
		
		printf("조 단위는 = %d \n", R);
		printf("십만 단위는 = %d \n", N6);
		printf("만 단위는 = %d \n", N4);
		printf("천 단위는 = %d \n", N3);
		printf("백 단위는 = %d \n", N2);
		printf("일 단위는 = %d \n\n", N1);
		
		printf("복권 당첨 예상 번호 = %d조 %d %d %d %d %d %d \n", R, N6, N5, N4, N3, N2, N1);	
		printf("--------------------------------------------- \n\n");
	}
	
	return 0;
}

