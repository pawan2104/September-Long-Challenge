//Problem :-
//Chef has a rectangular plate of length N cmNcm and width M cmMcm. He wants to make a wireframe around the plate. The wireframe costs XX rupees per cm.

//Determine the cost Chef needs to incur to buy the wireframe.

//Input Format
//First line will contain TT, the number of test cases. Then the test cases follow.
//Each test case consists of a single line of input, containing three space-separated integers N,M,N,M, and XX — the length of the plate, width of the plate, and the cost of frame per cm.

//Output Format
//For each test case, output in a single line, the price Chef needs to pay for the wireframe.

//Constraints
//1≤T≤1000
//1≤N,M,X≤1000


Sample 1:
Input                    Output
3                        400
10 10 10                 624
23 3 12                  4000000
1000 1000 1000




Explanation:
Test case 11: The total length of the frame is 2\cdot 10 + 2\cdot 10 = 402⋅10+2⋅10=40 cms. Since the cost is 1010 per cm, the total cost would be 10 \cdot 40 = 40010⋅40=400.

Test case 22: The total length of the frame is 2\cdot 23 + 2\cdot 3 = 522⋅23+2⋅3=52 cms. Since the cost is 1212 per cm, the total cost would be 52 \cdot 12 = 62452⋅12=624.

Test case 33: The total length of the frame is 2\cdot 1000 + 2\cdot 1000 = 40002⋅1000+2⋅1000=4000 cms. Since the cost is 10001000 per cm, the total cost would be 4000 \cdot 1000 = 40000004000⋅1000=4000000.



//code



#include <iostream>
using namespace std;

int main() {
    int t;
    cin >>t;
    while(t--)
    {
        int n, x, y;
        cin>>n>>x>>y;
        int r = 2*n + 2*x;
        cout<<r*y<<endl;
    }
	
	return 0;
}
