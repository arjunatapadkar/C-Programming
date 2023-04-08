#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int> vec1;
    int element, size;
    cout<<"Enter the size of the vector : "<<endl;
    cin>>size;

    for (int i = 0; i < size; i++){
        cout<<"Enter the element to add to the vector : "<<endl;
        cin>>element;
        vec1.push_back(element);
    }

    display(vec1);
    vec1.pop_back();
    display(vec1);

    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter, 34);
    display(vec1);
    cout<<vec1.at(2)<<endl;

    vec1.push_back(23);
    vec1.push_back(111);
    display(vec1);
    cout<<endl;

    vector<int> vec3(23, 64);
    display(vec3);

    return 0;
}