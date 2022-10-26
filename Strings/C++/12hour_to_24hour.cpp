#include <bits/stdc++.h>
using namespace std;

int changeint(string st){  //returns the hour
    int x = 0;
    stringstream str(st);   
    str >> x;
    return x;
}

string changestr(int n){  //changes hour to string
    ostringstream ss;
    ss<<n;
    return ss.str();
}
// 0 1 2 3 4 5 6 7 8 9
// 1 2 : 0 0 : 0 0 P M

string timeConversion(string s)
{
    string final;
    int hour=changeint(s)+12;
    if(hour==24 && s[8]=='A'){
        s.erase(0,2);
        final=s.insert(0,"00");
    }
    else if(hour==24 && s[8]=='P'){
        s.erase(0,2);
        final=s.insert(0,"12");
    }
    else if(hour>=13 && hour<24 && s[8]=='P'){
        s.erase(0,2);
        final=s.insert(0,changestr(hour));
    }
    else if(s[8]=='A'){
        final=s;
    }
    return final.erase(8,2);
}

int main(){
    ofstream fout(getenv("OUTPUT_PATH"));
    string s;
    getline(cin, s);
    string result = timeConversion(s);
    cout<<result<<endl;
    fout << result << "\n";
    fout.close();
    return 0;
}
