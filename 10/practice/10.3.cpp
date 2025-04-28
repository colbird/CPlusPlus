#include <iostream>
#include <string>
using namespace std;

void findGene(const string& s){
    bool status = false;
    int start = 0;
    int end = 0;
    for (int postion = 0; postion < s.size(); postion++){
        string emp = s.substr(postion, 3);
        if(emp == "ATG"){
            start = postion + 3;
            postion += 2;
        }
        else if (emp == "TAG" || emp == "TAA" || emp == "TGA"){
            end = postion - start;
            if (end % 3 == 0 &&
                s.substr(start, end).find("ATG") == string::npos &&
                s.substr(start, end).find("TAG") == string::npos &&
                s.substr(start, end).find("TAA") == string::npos &&
                s.substr(start, end).find("TGA") == string::npos)
            cout << s.substr(start, end) << endl;
            status = true;
        }
    }
    if (!status){
        cout << "no gene is found" << endl;
    }
}

int main(){
    string s1;
    cin >> s1;
    findGene(s1);
    return 0;
}
