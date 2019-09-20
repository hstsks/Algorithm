#include <iostream>
#include <string>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int number = 0;
		string testcase[103];
		int Check[103] = { 0, };
		int Spell[1003] = { 0, };

		string answer;
		string code;
		
		cin >> number;

		for (int j = 0; j < number ; j++)
		{
			cin >> testcase[j];
		}

		cin >> answer >> code;


		
		for (int j = 0; j < answer.length(); j++)
		{
			for (int k = 1; k < answer.length() - j -1; k++)
			{
				if (Spell[j + k] /= 0)
				{
					if (answer[j] == answer[j + k])
					{
						Spell[j] = j;
						Spell[j + k] = j;
					}
				}
			}

		}
	    //정답분석

		for (int j = 0; j < number; j++)
		{
			
			if ( testcase[j].length() != answer.length())
			{
				Check[j] = 1;
				break;
			}

			for (int k = 0; k < answer.length(); k++)
			{
				if (Spell[k] != 0)
				{
					for (int l = 0; l < answer.length(); l++)
					{
						if (Spell[l] == Spell[k])
						{
							if (testcase[j][l] != testcase[j][k])
							{
								Check[j] = 1;
								break;
							}
						}
						else
						{
							if (Spell[j] == Spell[k])
							{
								Check[j] = 1;
								break;
							}

						}
					}
				}
			    //동일문자 동일암호여부 체크

				else
				{
					for (int l = 0; l < answer.length() ; l++)
					{
						if (k == l)
						{
							continue;
						}

						if (testcase[k] == testcase[l])
						{
							Check[j] = 1;
							break;
						}
					}
				}
				//다른문자 암호구분여부 체크

			}
			//테스트케이스 number만큼 반복
			
		}
		//testcase검열

		int decode = t;

		for (int j = 0; j < t; j++)
		{
			decode = decode - Check[j];
		}

		if (decode == 0)
		{
			cout << "IMPOSSIBLE" << endl;
			continue;
		}
		else if (decode == 1)
		{
			//아스키 코드 뻴셈 덧셈으로 해독
		}


	}
}