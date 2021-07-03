struct myStack {
//     stack<int> s;
//     int min;
//     void push(int x) { 
//         if(s.empty()){
//             s.push(x);
//             min = x;
//         }
//         else if(x <= min){
//             s.push(x-min);
//             min = x;
//         }
//         else{
//             s.push(x);
//         }
//     }
//     int pop() {
//         int ret = s.top();
//         s.pop();
//         if(ret <= 0){
//             int res = min;
//             min = min - ret;
//             return res;
//         }
//         else{
//             return ret;
//         }
//     }
//     int top() {
//         int t = s.top();
//         if(t<=0){
//             return min;
//         }else{
//             return t;
//         }
//     }
//     int getmin(){
//         return min;
//     }
// };