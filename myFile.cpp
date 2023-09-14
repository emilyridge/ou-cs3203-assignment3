#include <iostream>
#include <vector>
#include <string>

using namespace std;

int SumOfList(vector<int> nums) {

    int j = nums.size();
    int sum = 0;
    if(j == 0) {
        sum = 0;
    }
    else {
        for(int i=0; i<j; i++) {
            sum = sum + nums[i];
        }
    }

    return sum;
}




int main()
{
    vector<int> numbers {4, 3, 2, 12, 200};

    cout << "The result is: " << SumOfList(numbers) << endl;

   
}


