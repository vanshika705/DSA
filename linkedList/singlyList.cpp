#include<iostream>
#include<vector>
// #include<list>
using namespace std;

class Node{
    public :
        int data;
        Node* next;

        Node(int val){
            data = val;
            next = NULL;
        }
};

class List{
    Node* head;
    Node* tail;

    public:
        List(){
            head = tail = NULL;
        }

        void push_front(int val){
            Node* newNode = new Node(val); //dynamic
            // Node newNode(val); //static

            if(head ==  NULL){
                head = tail = newNode;
                return ;
            }else{
                newNode -> next = head;
                head = newNode;
            }
        }

        void push_back(int val){
            Node* newNode = new Node(val);

            if(head == NULL){
                head = tail = newNode;
                return;
            }else{
                tail -> next = newNode;
                tail = newNode;
            }
        }

        void pop_front(){
            if(head == NULL){
                cout << "List is empty !\n";
                return ;
            }else{
                Node* temp = head;
                head = head -> next;
                temp -> next = NULL;
                
                delete temp;            
            }
        }

        void pop_back(){
            if(head == NULL){
                cout << "List is empty !\n";
                return ;
            }else{
                Node* temp = head;

                while(temp->next != tail){
                    temp = temp -> next;
                }           

                temp -> next = NULL;
                delete tail;
                tail = temp;
            }
        }

        void insert(int val, int pos){
            if(pos < 0){
                cout << "invalid position !";
                return;
            }

            if(pos == 0){
                push_front(val);
            }

            Node* temp = head;
            for(int i =0; i < pos-1; i++){
                if(temp == NULL){
                    cout << "invalid position !";
                    return;
                }
                temp = temp-> next;
            }

            Node* newNode = new Node(val);
            newNode -> next = temp -> next;
            temp -> next = newNode;
        }

        void printLL(){
            Node* temp = head;

            while(temp != NULL){
                cout << temp -> data << " ";
                temp = temp -> next;
            }
            cout << "NULL" << endl;
        }

        int search(int key){
            Node* temp = head;
            int idx = 0;

            while(temp != NULL){
                if(temp -> data == key ){
                    return idx;
                }

                temp = temp -> next;
                idx++;
            }

            return -1;
        }
};

int main(){
    List ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.printLL(); 

    ll.insert(4 , 1);
    ll.printLL(); 

    ll.push_back(5);
    ll.push_back(6);
    ll.push_back(7);
    ll.printLL(); 

    ll.pop_front();
    ll.printLL(); 

    ll.pop_back();
    ll.printLL(); 

    cout << ll.search(2)<< endl;

    return  0;
}