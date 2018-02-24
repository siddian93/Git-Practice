#include<iostream>

using namespace std; 

int find_min(int a, int b){
    a>b? return a:return b;
}

void print_linked_list(node* head){
    node* temp = head;
    while (temp->next!=\0){
        cout<<temp->data>>"->";
        temp = temp->next;
    }
    cout<<"[]"<<endl;
}

void print_array(vector<int>& v){
    for (int i = 0; i<v.size(); i++){
        cout<<v[i]<<" "<<endl;
    }
    cout<<endl;
}