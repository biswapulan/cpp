// #include<iostream>
// using namespace std;
// int main(){
//     int w;
//     cin >> w;
//     if(w <= 2){
//         cout << "NO";
//     }else if(w % 2 == 0){
//         cout << "YES";
//     }else{
//         cout << "NO";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for(int i = 0; i < n; i++){
//         string temp;
//         cin >> temp;
//         int length = temp.size();
//         if(length <= 10){
//             cout << temp << "\n";
//         }else{
//             cout << temp[0] << (length-2) << temp[length-1] << "\n";
//         }
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int count = 0;
//     for(int i = 0; i < n; i++){
//         int a,b,c;
//         cin >> a >> b >> c;
//         if(a + b + c >= 2){
//             count+=1;
//         }
//     }
//     cout << count;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int x = 0;
//     while(n--){
//         string a;
//         cin >> a;
//         if(a[1] == '+'){
//             x+=1;
//         }else{
//             x-=1;
//         }
//     }
//     cout << x;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int limak, bob;
//     cin >> limak >> bob;
//     int years = 0;
//     while(limak <= bob){
//         years += 1;
//         limak *= 3;
//         bob *= 2;
//     }

//     cout << years;  
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n,k;
//     cin >> n >> k;
//     int count = 0;
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     int threshold = arr[k-1];
//     for(int j = 0; j < n; j++){
//         if(arr[j] >= threshold && arr[j] > 0){
//             count++;
//         }
//     }
//     cout << count;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int k,n,w,borrow;
//     int total = 0;
//     cin >> k >> n >> w;
//     for(int i = 0; i < w; i++){
//         total = total + ((i+1)*k);
//     }
//     if(total <= n){
//         cout << 0;
//     }else{
//         cout << (total - n);
//     }
// }

// 236A
// #include<iostream>
// using namespace std;

// int main(){
//     string str,dstr;
//     cin >> str;
//     dstr = str[0];
//     int count = 1;
//     for(int i = 1; i < str.size(); i++){
//         int flag = 0;
//         for(int j = 0; j < dstr.size(); j++){
//             if(dstr[j] == str[i]){
//                 flag = 1;
//             }
//         }
//         if(flag != 1){
//             count += 1;
//             dstr += str[i];
//         }
//     }
//     if(count % 2 == 0){
//         cout << "CHAT WITH HER!";
//     }else{
//         cout << "IGNORE HIM!";  
//     }
// }

//50A
// 617A
// 59A 
// 467A
// 112A
// 266A
// 263A