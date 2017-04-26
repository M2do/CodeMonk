#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char vowel[]={'a','e','i','o','u'};
    int vowelNum=5;
    char consonant[]={'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','z'};
    int consonantNum=20;
    int n;
    cin>>n;
    if(n>0)
        {
        for(int i=0;i<vowelNum;i++)
            {
            //first place with vowels first-vowel
            //cout<<vowel[i];
            int test1=n-1;
            if(test1>0)
                {
                for(int j=0;j<consonantNum;j++)
                    {
                    //second place with vowels first-consonant
                    
                    //cout<<vowel[i]<<consonant[j;
                    int test2=n-2;
                    if(test2>0)
                        {
                        //third place with vowels first-vowel
                        for(int k=0;k<vowelNum;k++)
                            {
                            //cout<<vowel[i]<<consonant[j]<<vowel[k];
                            int test3=n-3;
                            if(test3>0)
                                {
                                //fourth place with vowels first-consonant
                                for(int l=0;l<consonantNum;l++)
                                    {
                                    //cout<<vowel[i]<<consonant[j]<<vowel[k]<<consonant[l];
                                    int test4=n-4;
                                    if(test4>0)
                                        {
                                        //fifth place with vowels first-vowel
                                        for(int m=0;m<vowelNum;m++)
                                            {
                                            //cout<<vowel[i]<<consonant[j]<<vowel[k]<<consonant[l]<<vowel[m];
                                            int test5=n-5;
                                            if(test5>0)
                                                {
                                                //sixth place with vowels first-consonant
                                                for(int n=0;n<consonantNum;n++)
                                                    {
                                                    cout<<vowel[i]<<consonant[j]<<vowel[k]<<consonant[l]<<vowel[m]<<consonant[n];
                                                    cout<<endl;
                                                }
                                            }
                                            else
                                                cout<<vowel[i]<<consonant[j]<<vowel[k]<<consonant[l]<<vowel[m]<<endl;
                                        }
                                    }
                                    else
                                        cout<<vowel[i]<<consonant[j]<<vowel[k]<<consonant[l]<<endl;
                                }
                            }
                            else
                                cout<<vowel[i]<<consonant[j]<<vowel[k]<<endl;
                        }
                    }
                    else
                        cout<<vowel[i]<<consonant[j]<<endl;
                }
            }
            else
                cout<<vowel[i]<<endl;
        }
    }    
    if(n>0)
        {
        for(int i=0;i<consonantNum;i++)
            {
            //first place with consonant first-consonant
            //cout<<consonant[i];
            int test1=n-1;
            if(test1>0)
                {
                for(int j=0;j<vowelNum;j++)
                    {
                    //second place with consonant first-vowel
                    //cout<<consonant[i]<<vowel[j];
                    int test2=n-2;
                    if(test2>0)
                        {
                        //third place with consonant first-consonant
                        for(int k=0;k<consonantNum;k++)
                            {
                            //cout<<consonant[i]<<vowel[j]<<consonant[k];
                            int test3=n-3;
                            if(test3>0)
                                {
                                //fourth place with consonant first-vowel
                                for(int l=0;l<vowelNum;l++)
                                    {
                                    //cout<<consonant[i]<<vowel[j]<<consonant[k]<<vowel[l];
                                    int test4=n-4;
                                    if(test4>0)
                                        {
                                        //fifth place with consonant first-consonant
                                        for(int m=0;m<consonantNum;m++)
                                            {
                                            //cout<<consonant[i]<<vowel[j]<<consonant[k]<<vowel[l]<<consonant[m];
                                            int test5=n-5;
                                            if(test5>0)
                                                {
                                                //sixth place with consonant first-vowel
                                                for(int n=0;n<vowelNum;n++)
                                                    {
                                                    cout<<consonant[i]<<vowel[j]<<consonant[k]<<vowel[l]<<consonant[m]<<vowel[n];
                                                    cout<<endl;
                                                }
                                            }
                                            else
                                                cout<<consonant[i]<<vowel[j]<<consonant[k]<<vowel[l]<<consonant[m]<<endl;
                                        }
                                    }
                                    else
                                        cout<<consonant[i]<<vowel[j]<<consonant[k]<<vowel[l]<<endl;
                                }
                            }
                            else
                                cout<<consonant[i]<<vowel[j]<<consonant[k]<<endl;
                        }
                    }
                    else
                        cout<<consonant[i]<<vowel[j]<<endl;
                }
            }
            else
                cout<<consonant[i]<<endl;
        }
    }
    return 0;
}
