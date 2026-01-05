#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <windows.h>
using namespace std;

void hpPotionUse(int& hpp, int& hp)
{
	if(hpp ==0 )
	{
		cout << "체력포션이 부족합니다" << endl;
	}
	else 
	{
		hpp--;
		cout<<"남은 포션 갯수:" << hpp << endl;
		hp += 20;
		cout << "현재체력:" << hp << endl;
	}

}
void mpPotionUse(int& mpp,int mp)
{
	if (mpp <= 0)
	{
		cout << "마나포션이 부족합니다" << endl;
	}
	else
	{
		mpp--;
		cout << "남은 포션 갯수:" << mpp << endl;
		mp += 20;
		cout << "현재마나:" << mp << endl;
	}
}
void potionRestock(int& hp,int& mp)
{
	if(hp >= 5)
	{
		cout<<"체력포션은 5개 초과 일수없습니다" << endl;
		cout << "현재 포션갯수:" << hp << endl;
	}
	else {
		hp =5 ;
		cout << "현재 체력포션 갯수:" << hp << endl;
	}
	if(mp>=5)
	{
		cout << "마나포션은 5개 초과 일수없습니다" << endl;
		cout << "현재 포션갯수:" << mp << endl;
	}
	else
	{
		mp = 5;
		cout << "현재 마나포션 갯수:" << mp << endl;
	}
	cout << "남은hp포션:" << hp << "  " << "남은mp포션:" << mp << endl;
}
int main()
{
	int hpPotion = 5;
	int mpPotion = 5;
	int Level = 1;
	int stat[8];
	for (int i = 0; i < 8; i++)
	{
		if (i == 0)
		{
			while (stat[0] < 50)
			{
				cout << "체력을 입력해주세요" << endl;
				cin >> stat[0];
				if (stat[0] < 50)
				{
					cout << "hp는 50보다 작을수없습니다" << endl;
				}
				else
				{
					cout << "hp:" << stat[0] << "설정되었습니다" << endl;
				}
				continue;
			}

		}

		if (i == 1)
		{
			while (stat[1] < 50)
			{
				cout << "마나를 입력해주세요" << endl;
				cin >> stat[1];
				if (stat[1] < 50)
				{
					cout << "mp는 50보다 작을수없습니다" << endl;
				}
				else
				{
					cout << "mp:" << stat[1] << "설정되었습니다" << endl;
				}
				continue;
			}

		}
		if (i == 2)
		{
			while (stat[2] <= 0)
			{
				cout << "공격력을 입력해주세요" << endl;
				cin >> stat[2];
				if (stat[2] <= 0)
				{
					cout << "공격력은 0보다 작을수없습니다" << endl;
				}
				else
				{
					cout << "atk:" << stat[2] << "설정되었습니다" << endl;
				}
				continue;
			}

		}
		if (i == 3)
		{
			while (stat[3] <= 0)
			{
				cout << "방어력 입력해주세요" << endl;
				cin >> stat[3];
				if (stat[3] <= 0)
				{
					cout << "방어력은 0보다 작을수없습니다" << endl;
				}
				else
				{
					cout << "def:" << stat[3] << "설정되었습니다" << endl;
				}
				continue;
			}

		}
		if(i==4)
		{
			stat[4] = 10;
			cout << "str:" << stat[4] << "설정되었습니다" << endl;
		}
		if (i == 5)
		{
			stat[5] = 10;
			cout << "dex:" << stat[5] << "설정되었습니다" << endl;
		}
		if (i == 6)
		{
			stat[6] = 10;
			cout << "int:" << stat[6] << "설정되었습니다" << endl;
		}
		if(i==7)
		{
			stat[7] = 100;
			cout << "luk" << stat[7] << "설정되었습니다" << endl;
		}
	}
	cout << "hp:" << stat[0] << "설정되었습니다." << endl;
	cout << "mp:" << stat[1] << "설정되었습니다." << endl;
	cout << "atk:" << stat[2] << "설정되었습니다." << endl;
	cout << "def:" << stat[3] << "설정되었습니다." << endl;
	cout << "str:" << stat[4] << "설정되었습니다." << endl;
	cout << "dex:" << stat[5] << "설정되었습니다." << endl;
	cout << "int:" << stat[6] << "설정되었습니다." << endl;
	cout << "luk:" << stat[7] << "설정되었습니다." << endl;
	cout << "물약이지급되었습니다" << "hp포션:" << hpPotion <<"mp포션:"<<mpPotion << endl;
	// 스텟 기본값 설정완료;
	cout << "스탯관리 시스템을 시작합니다" << endl;
	cout << "1번 hp증가" << endl;
	cout << "2번 mp증가" << endl;
	cout << "3번 atk증가" << endl;
	cout << "4번 def증가" << endl;
	cout << "5번 현재능력치" << endl;
	cout << "6번 레벨업" << endl;
	cout << "7번  종료" << endl;
	int input = 1;
	int exp = 0;

	while(true)
	{
		cin >> input;
		switch (input)
		{
		case 1:
			hpPotionUse(hpPotion,stat[0]);
			continue;
		case 2:
			mpPotionUse(mpPotion,stat[1]);
			continue;
		case 3:
			stat[2] *= 2;
			cout << "atk" << stat[2] << "증가되었습니다" << endl;
			continue;
		case 4:
			stat[3] *= 2;
			cout << "def" << stat[3] << "증가되었습니다" << endl;
			continue;
		case 5:
			cout << "현재 레벨:" << Level << "입니다" << endl;
			cout << "현재hp:" << stat[0] << "입니다." << endl;
			cout << "현재mp:" << stat[1] << "입니다." << endl;
			cout << "현재atk:" << stat[2] << "입니다." << endl;
			cout << "현재def:" << stat[3] << "입니다." << endl;
			cout << "현재str:" << stat[4] << "5증가했습니다." << endl;
			cout << "현재dex:" << stat[5] << "5증가했습니다." << endl;
			cout << "현재int:" << stat[6] << "5증가했습니다." << endl;
			cout << "현재luk:" << stat[7] << "10증가했습니다." << endl;
			cout << "남은 체력:마나 포션갯수:" << hpPotion << ":" << mpPotion << endl;
			continue;
		case 6:
			exp++;
			if(exp== 6)
			{
				Level++;
				exp = 0;
				stat[4] += 5;
				stat[5] += 5;
				stat[6] += 5;
				stat[7] += 10;
				potionRestock(hpPotion, mpPotion);
			}
			else
			{
				cout << exp << "/6" << endl;
			}
			cout << "레벨:" << Level << endl;
			cout << "str:" << stat[4]<< "스탯이5증가했습니다." << endl;
			cout << "dex:" << stat[5]<< "스탯이5증가했습니다." << endl;
			cout << "int:" << stat[6]<< "스탯이5증가했습니다." << endl;
			cout << "luk:" << stat[7]<< "스탯이10증가했습니다." << endl;
			continue;
		case 7:
			cout << "시스템을 종료합니다." << endl;
			return 0;
		default:
			cout << "올바르지 않은 입력입니다." << endl;
		}
	}
}