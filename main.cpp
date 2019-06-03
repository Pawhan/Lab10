#include<iostream>
#include<vector>
#include <numeric>
#include <algorithm>

using namespace std;
float sum(const vector<int> &v)
{
	float sum= accumulate(v.begin(),v.end(),0);
	return sum;
}
float Product(const vector<int> &v , const vector<int> &v1)
{
    float product= inner_product(v.begin(),v.end(),v1.begin(),0);
    return product;
}
void SORT(vector<int> *v)
{
    sort(v->begin(),v->end());
}
bool CONTAINS(vector<int> v , int element)
{
    bool t=false;
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i]==element)
            t=true;
    }
    return t;
}
void RemoveDuplicates(vector<int> v )
{
    int j=0;
    while (j< v.size()) {
        for (int i = 1 + j; i < v.size(); i++) {
            if (v[i] == v[j]) {
                v.erase(v.begin());
            }
        }
        j++;
    }
}
int main()
{
	vector<int>numbers={1,2,3,4,8,2,5,6};
	vector<int>numbers2={8,7,6,5,4,3,2,1};
	cout<<sum(numbers)<<endl;
	cout<<Product(numbers,numbers2)<<endl;
	SORT(&numbers2);
    for (int i = 0; i < numbers2.size(); i++)
    {
        cout<<numbers2[i]<<" ";
    }
    cout<<endl;
    cout<<CONTAINS(numbers,10)<<endl;
    RemoveDuplicates(numbers);
    for (int i = 0; i < numbers.size(); i++)
    {
        cout<<numbers[i]<<" ";
    }
}