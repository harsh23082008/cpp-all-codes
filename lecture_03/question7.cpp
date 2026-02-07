//for loop 
// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     int sum =0 ;    
//     cout<< "enter the number" <<endl;
//     cin>>n;
//     for(int i =1 ; i<=n;i += 2){
//         sum += i ;
//     }
//     cout<<"the sum is equal to: "<<sum ;
//     return 0; 

// }

//while 
// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     int sum =0 ;  
//     int i =1 ;  
//     cout<< "enter the number" <<endl;
//     cin>>n;
//     while (i<=n){
//         if(i%2!=0){
//             sum = sum +i;
//         };
//         i++;
//     };
//     cout<<"the sum is equal to: "<<sum ;
//     return 0; 

// }


//do while 
#include<iostream>
using namespace std;
int main(){
    int n ;
    int sum =0 ;  
    int i =1 ;  
    cout<< "enter the number" <<endl;
    cin>>n;
    do{
        if(i%2!=0){
        sum = sum +i;
        };
        i++;
    }while(i<=5);
    cout<<"the sum is equal to: "<<sum ;
    return 0; 

}
