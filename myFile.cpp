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

vector<int> ReverseOrder(vector<int> oldVec) {
    vector<int> newVec;

    for(int i=oldVec.size(); i>0; i--) {
        newVec.push_back(oldVec[i-1]);
    }
    return newVec;

}

int main()
{
    vector<int> numbers;
    int size = 0;
    int x = 0;

    cout << "How many numbers would you like to enter? ";
    cin >> size;
    cout << "Enter your " << size << " numbers: ";
    cout << endl;

    for(int i=0; i<size; i++) {
        cin >> x;
        numbers.push_back(x);
    }
    
    vector<int> reverseVec;
    reverseVec = ReverseOrder(numbers);

    cout << "The result of SumOfList is: " << SumOfList(numbers) << endl;
    cout << "The result of ProductOfList is: " << ProductOfList(numbers) << endl;

   
}


