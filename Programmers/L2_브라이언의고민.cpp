#include <string>
#include <utility>
#include <vector>
#include <iostream>
using namespace std;

string delSign(string word, int start, int jump)
{
    for(int i=start; i<word.size(); i+=jump)
    {
        word.erase(i,1);
    }
    return word;
}

// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
string solution(string sentence) {
    string answer = "";
    int signnum[26]={0,}, sensize = sentence.size();
    pair<int,int> se;
    vector< pair< char, pair<int,int> > > signvec; //<alpabet, <start, end>>
    //cout<<"sensize:"<<sensize<<endl;
    
    //confirm sign index, count sign (signvec, signnum)
    char sign;
    int idx, wordallsize = 0;;
    string::size_type pos;
    for(int i=0; i<sensize; i++)
    {
        sign = sentence[i];
        if(sentence[i]>='a' && signnum[sign-'a']==0)
        {
            idx=i;
            
            while((pos = sentence.find(sign,idx)) != string::npos)
            {
                signnum[sign-'a']++;
                idx = pos+1;
            }
            
            se = make_pair(i,idx-1);
            signvec.push_back(make_pair(sign, se));
        }
    }
    
    for(int i=0; i<signvec.size(); i++)
    {
        pair<int,int> p = signvec[i].second;
        cout<<signvec[i].first<<' '<<p.first<<' '<<p.second<<endl;
    }
    
    //divid sentence to word, setting word tag (word <word, tag>)
    vector<pair<string, int> > word;
    int sidx=0, eidx, max=0;
    for(int i=0; i<signvec.size(); i++)
    {
        sign = signvec[i].first;
        se = signvec[i].second;
        
        //RULE 2
        if(signnum[sign-'a']==2)
        {
            if(se.first-1 >= sidx && (i==signvec.size()-1 || se.second+1 <= signvec[i+1].second.first)) goto RULE1;
            
            if(sidx<se.first)
            {
                word.push_back(make_pair(sentence.substr(sidx, se.first-sidx), 0));
            }
            
            word.push_back(make_pair(sentence.substr(se.first, se.second-se.first+1), 2));
            sidx = se.second+1;
            max = sidx>max?sidx:max;
            
            if(i!=signvec.size()-1 && signvec[i+1].second.second < se.second) 
            {
                word.back().second++;
                i++;
            }
        }
        
        //RULE 1
        else
        {
            RULE1:
            if(se.first-1<0 || se.second+1>sensize-1) goto INVALID;
            
            if(sidx<se.first-1)
            {
                word.push_back(make_pair(sentence.substr(sidx, se.first-sidx-1), 0));
            }
            
            word.push_back(make_pair(sentence.substr(se.first-1, se.second-se.first+3), 1));
            sidx=se.second+2;
            max = sidx>max?sidx:max;
        }
        
    }
    
    if(max != sentence.size())
    {
        word.push_back(make_pair(sentence.substr(max), 0));
    }
    
    cout<<"word"<<endl;
    // search invalid
    for(int i=0; i<word.size(); i++)
    {
        cout<<word[i].first<<' '<<word[i].second<<endl;
        wordallsize+=word[i].first.size();
    }
    
    if(wordallsize>sensize)
    {
        INVALID:
        return "invalid";
    }
    
    //make answer
    int jmp;
    for(int i=0; i<word.size(); i++)
    {
        string wrd = word[i].first;
        answer+=" ";
        switch(word[i].second)
        {       
            case 0:
                answer+=wrd;
                break;
            case 1:
                answer+= delSign(wrd, 1, 1);
                break;
            case 2:
                answer += delSign(wrd, 0, wrd.size()-2);
                break;
            case 3:
                answer += delSign(delSign(wrd, 0, wrd.size()-2), 1, 1);
                break;
        }
    }
    
    if(answer[0]==' ') answer.erase(0,1);
    
    return answer;
}

int main()
{
    string str;
    cin>>str;
    cout<<solution(str)<<endl;
    
    return 0;
}