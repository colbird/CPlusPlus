#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

void swap(vector<int>& data, int pos1, int pos2){
    int temp = data[pos1];
    data[pos1] = data[pos2];
    data[pos2] = temp;
}

int main(){
    srand(time(0));
    vector<int> pick;
    for (int i = 0; i < 52; i++)
        pick.push_back(i);
    
    for (int i = 0; i < 52; i++)
        swap(pick, i, rand()% 52);

    int cut = 0;
    int status = 0;
    vector<int> Fpick;
    for (cut = 0; cut < 52; cut++){
        if (pick.at(cut)/ 13 == 0 && !(status & 1)){
            Fpick.push_back(pick.at(cut));
            status += 1;
        }
        else if (pick.at(cut)/ 13 == 1 && !(status & 2)){
            Fpick.push_back(pick.at(cut));
            status += 2;
        }
        else if (pick.at(cut)/ 13 == 2 && !(status & 4)){
            Fpick.push_back(pick.at(cut));
            status += 4;
        }
        else if (pick.at(cut)/ 13 == 3 && !(status & 8)){
            Fpick.push_back(pick.at(cut));
            status += 8;
        }

        if ((status & 15)== 15)
            break;
    }
    for (int i = 0; i < 4; i++){
        switch(Fpick.at(i) % 13){
            case 10:
                cout << "J" << " of ";
                break;
            case 11:
                cout << "Q" << " of ";
                break;
            case 12:
                cout << "K" << " of ";
                break;
            default:
                cout << (Fpick.at(i)% 13)+ 1 << " of ";
                break;
        }
        switch(Fpick.at(i) / 13){
            case 0:
                cout << "Spades" << endl;
                break;
            case 1:
                cout << "Cluds" << endl;
                break;
            case 2:
                cout << "Hearts" << endl;
                break;
            case 3:
                cout << "Diamonds" << endl;
                break;
        }
    }
    cout << "Number of picks: " << cut + 1 << endl;
    return 0;
}
