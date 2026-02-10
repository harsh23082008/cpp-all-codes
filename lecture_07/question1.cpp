// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector <int> vec(8,21); //={1,3,5};
//     // cout<<vec[7];
//     for(int i :vec){//syntax for (for looop)
//         cout<< i<<endl;
//     }
//     return 0 ;
// }


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec;
    vec.push_back(124);
    vec.push_back(321);
    vec.push_back(132);
    vec.push_back(121);
    vec.push_back(121);

    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    return 0;
}
