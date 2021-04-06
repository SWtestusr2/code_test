#include <iostream>
#include <stack>


using namespace std;

#define MAX 100001



int main(void)
{
	//���ʸ��� = 0
	ios_base::sync_with_stdio(false);
	char ch[MAX];
	stack<int> s;
	cin >> ch; //�Է�
	
	int i = 0;
	int ans = 0;
	while (ch[i] != '\0')
	{
		if (ch[i] == '(') {
			s.push(0);
			
		}
		else {
			if (s.top() == 0) {
				s.pop(); // ������ ���� '(' ����
				s.push(1); // �������� ��Ÿ����'1'����
			}
			else{ // ������ ���� �� ���Եɶ� top �� ���������
				int cnt = 0;
				while (s.top() != 0) //���ʸ��� ���� �ö�����
				{
					cnt += s.top();
					s.pop();
				}
				ans += cnt + 1;
				s.pop(); // ������� ���ʸ��� �� pop
				s.push(cnt); // ������ ���� ���ġ
			}

		}
		i++;
	}

	cout << "this is for commit test 1" << endl; // for commit test 1

	cout << ans;

}


