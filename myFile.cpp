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

int ProductOfList(vector<int> nums) {

    int k = nums.size();
    int product = 1;
    if(k == 0) {
        product = 0;
    }
    else {
        for(int i=0; i<k; i++) {
            product = product * nums[i];
        }
    }

    return product;
}



int main()
{
    vector<int> numbers {4, 3, 2};

    cout << "The result of SumOfList is: " << SumOfList(numbers) << endl;
    cout << "The result of ProductOfList is " << ProductOfList(numbers) << endl;

   
}


