#include<Node.h>

int main(){
    Node t1_2(2, nullptr, nullptr);
    Node t1_4(4, nullptr, nullptr);
    Node t1_3(3, &t1_4, nullptr);
    Node t1_1(1, &t1_2, &t1_3);

    Node t2_2(2, nullptr, nullptr);
    Node t2_4(4, nullptr, nullptr);
    Node t2_3(3, &t2_4, nullptr);
    Node t2_1(1, &t2_2, &t2_3);
    
    if(same_tree(&t1_1, &t2_1)){
        cout << "true"<<endl;
    }else{
        cout<< "false"<<endl;
    }
    
    return 0;
}
