#include <iostream>
#include <fstream>
using namespace std;

class StopWatch{
    private:
        int startTime;
        int endTime;
    public:
        StopWatch();
        int getStartTime() const;
        int getEndTime() const;
        void start();
        void stop();
        int getElapseTime();

};
StopWatch::StopWatch(){
    startTime = time(0);
}

int StopWatch::getStartTime() const{
    return startTime;
}

int StopWatch::getEndTime() const{
    return endTime;
}

void StopWatch::start(){
    startTime = time(0);
}

void StopWatch::stop(){
    endTime = time(0);
}

int StopWatch::getElapseTime(){
    return (endTime - startTime) * 1000;
}

int main(){
    int nums[100000];
    ifstream input("numbers.txt");
    for (int i = 0; i < 100000; i++){
        input >> nums[i];
    }
    StopWatch watch;
    for (int i = 0; i < 100000 - 1; i++){
        int min = i;
        for (int j = i + 1; j < 100000; j++){
            if (nums[min] > nums[j])
                min = j;
        }
        if (min != i){
            int temp = nums[i];
            nums[i] = nums[min];
            nums[min] = temp;
        }
    }
    watch.stop();
    cout << "选择排序100000个数排序所以的时间" << watch.getElapseTime() << " ms" << endl;

    input.close();
    return 0;
}
