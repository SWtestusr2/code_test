#include <iostream>
#include <stack>


using namespace std;

#define MAX 100001



int main(void)
{
	//왼쪽막대 = 0
	ios_base::sync_with_stdio(false);
	char ch[MAX];
	stack<int> s;
	cin >> ch; //입력
	
	int i = 0;
	int ans = 0;
	while (ch[i] != '\0')
	{
		if (ch[i] == '(') {
			s.push(0);
			
		}
		else {
			if (s.top() == 0) {
				s.pop(); // 레이저 왼쪽 '(' 제거
				s.push(1); // 레이저를 나타내는'1'삽입
			}
			else{ // 오른쪽 막대 끝 삽입될때 top 이 레이저라면
				int cnt = 0;
				while (s.top() != 0) //왼쪽막대 끝이 올때까지
				{
					cnt += s.top();
					s.pop();
				}
				ans += cnt + 1;
				s.pop(); // 연산다한 왼쪽막대 끝 pop
				s.push(cnt); // 레이저 개수 재배치
			}

		}
		i++;
	}

	cout << ans;

}


