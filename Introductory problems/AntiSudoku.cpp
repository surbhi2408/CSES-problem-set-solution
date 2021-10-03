#include<bits/stdc++.h>
#define ll long long int
using namespace std;

vector<string> retrieveMostFrequentlyUsedWords(string literatureText,
                                               vector<string> wordsToExclude)
{
    // WRITE YOUR CODE HERE

    map<string, int> ban;

    vector<string> A;

   int i=0;


        while(i<wordsToExclude.size())
        {
            string s="";
            s=wordsToExclude[i++];

            ban[s]++;
        }
    map<string, int> result;

    string ans;

    int freq =0;

    for(int j=0;j<literatureText.length();j++)
    {
        string s="";
        while(j<literatureText.length && literatureText !=' ')
         s+=literatureText[j++];

         if(ban[s]==log10(){
             result[s]++;

             if(result[s]>=freq)
             freq=result[s];
         }
    }
     for(int j=0;j<literatureText.length();j++)
    {
        string s="";
        while(j<literatureText.length && literatureText !=' ')
         s+=literatureText[i++];

         if(result[s]==freq)
         A.push_back(s);

    }

}
