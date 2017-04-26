#include <bits/stdc++.h>
using namespace std;
#define M 3
#define N 3
string dictionary[] = {"GEEKS", "FOR", "QUIZ", "GO"};
int n = sizeof(dictionary)/sizeof(dictionary[0]);
bool isWord(string str)
{
	for(int i=0;i<n;i++)
	{
		if(str.compare(dictionary[i]) == 0)
		{
			return true;
		}
	}
	return false;
}
void findWordsUtil(char boggle[][N],int i,int j,bool visited[][N],string str)
{
	visited[i][j] = true;
	str = str + boggle[i][j];
	if(isWord(str))
	{
		cout<<str<<endl;
	}
	for(int k = i-1;k<=i+1&&k<M;k++)
	{
		for(int m = j-1;m<=j+1&&m<N;m++)
		{
			if(k>=0&&m>=0&&!visited[k][m])
			{
				findWordsUtil(boggle,k,m,visited,str);
			}
		}
	}
	str.erase(str.length()-1);
	visited[i][j] = false;
}
void findWords(char boggle[][N])
{
	bool visited[M][N];
	for(int i=0;i<M;i++)
	{
		for(int j=0;j<N;j++)
		{
			visited[i][j] = false;
		}
	}
	for(int i=0;i<M;i++)
	{
		for(int j=0;j<N;j++)
		{
			string str = "";
			findWordsUtil(boggle,i,j,visited,str);
		}
	}
}
int main()
{
    char boggle[M][N] = {{'G','I','Z'},
                         {'U','E','K'},
                         {'Q','S','E'}};
    cout << "Following words of dictionary are present\n";
    findWords(boggle);
	return 0;
}
