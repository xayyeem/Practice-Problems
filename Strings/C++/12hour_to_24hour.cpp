//Convert the 12hour clock to 24hour clock

#include <bits/stdc++.h>
using namespace std;

int changeint(string st){  //convert string to int
    int x = 0;
    stringstream str(st);   
    str >> x;
    return x;
}

string changestr(int n){  //convert int to string
    ostringstream ss;
    ss<<n;
    return ss.str();
}

string timeConversion(string s) //12h to 24h
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
    cout<<"Enter time in 12hour Fromat: \n";
    string s;
    getline(cin, s);
    string result = timeConversion(s);
    cout<<"24hour format: \n";
    cout<<result<<endl;
    fout << result << endl;
    fout.close();
    return 0;
}

/*
Sample case 1:
Enter time in 12hour Fromat: 01:19:04PM
24hour format: 13:19:04

Sample case 2:
Enter time in 12hour Fromat: 12:20:08AM
24hour format: 12:20:08
*/
