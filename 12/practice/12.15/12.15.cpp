#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector<char> tree;
    char n;
    while (cin >> n){
        if (n == '(' || n == '{' || n == '['){
            tree.push_back(n);
        }
        if(n == ')'){
            if (tree.size() && (tree.at(tree.size()-1) == '('))
                tree.pop_back();
            else{
                cout << "分组符号错误" << endl;
                return 0;
            }
        }
        if (n == '}'){
            if (tree.size() && (tree.at(tree.size()-1) == '{'))
                tree.pop_back();
            else{
                cout << "分组符号错误" << endl;
                return 0;
            }
        }
        if (n == ']'){
            if (tree.size() && (tree.at(tree.size()-1) == '['))
                tree.pop_back();
            else{
                cout << "分组符号错误" << endl;
                return 0;
            }
        }
    }
    if (tree.empty()){
       cout << "分组符号正确" << endl;
       return 0;
    }
    else{
       cout << "分组符号错误" << endl;
       return 0;
    }

    return 0;

}
