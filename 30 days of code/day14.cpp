#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

    Difference(vector <int> b)
    {
        elements=b;
    }  
    void computeDifference()
    {
        int smallest_element = elements[0]; //let, first element is the smallest one
        int largest_element = elements[0]; //also let, first element is the biggest one
        for(int i = 1; i < elements.size(); i++)  //start iterating from the second element
        {
            if(elements[i] < smallest_element)
            {
            smallest_element = elements[i];
            }
            if(elements[i] > largest_element)
            {
            largest_element = elements[i];
            }
        }
        maximumDifference=largest_element-smallest_element;
    }

    

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}