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
	    //����м�

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
			    //���Ϲ��� ���Ͼ�ȣ���� üũ

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
				//�ٸ����� ��ȣ���п��� üũ

			}
			//�׽�Ʈ���̽� number��ŭ �ݺ�
			
		}
		//testcase�˿�

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
			//�ƽ�Ű �ڵ� �y�� �������� �ص�
		}


	}
}