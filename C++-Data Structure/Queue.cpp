#include <iostream>
#include <assert.h>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

class Queue {

    int size {};
    int front {0};
    int rear {0};
    int added_elements{};
    int* array {};

public : 

    Queue(int size) : size(size) {

        array = new int[size];
    }

    Queue(){

        array = new int [10];
    }

    ~Queue(){

        delete [] array;
    }

    int next(int pos){

        //return (pos + 1) % size;

        ++pos;

        if(pos == size)
            pos = 0;

        return pos;
    }

    int isEmpty(){

        return added_elements == 0;
    }

    int isFull(){

        return added_elements == size;
    }

    void enqueue(int value){

        assert(!isFull());

        array[rear] = value;

        rear = next(rear);

        added_elements++;
    }

    int dequeue(){

        assert(!isEmpty());

        int value = array[front];

        front = next(front);

        -- added_elements;

        return value;
    }

    int get_first(){

        assert(!isEmpty());

        return array[front];
    }

    void display(){

        if(isEmpty())
            return;

        for(int cur = front , step = 0 ; step < added_elements ; ++step , cur = next(cur))
            cout<<array[cur]<<" ";
        
        cout<<"\n";
    }
};

class Node{

public:
    Node(int data) : data(data) {}
    ~Node();

    int data;

    Node* next = nullptr;

private: 

};

class LinkedList{

public:
    LinkedList();

    LinkedList(const LinkedList&) = delete;
    LinkedList& operator=(const LinkedList& another) = delete;

    ~LinkedList(){

        if(head == tail)
            delete head , tail ;

        else {

            Node* temp = head;

            while(temp){

                head = head -> next;

                delete temp;

                temp = head;
            }
        }
    }

    void print(){

        Node* temp_head = head; 

        while(temp_head != nullptr){

            cout<<temp_head->data<<" ";

            temp_head = temp_head->next;
        }

        cout<<"\n";
    }

    void insert_end(int value){

        Node* item = new Node(value);

        if(!head)
            head = tail = item;

        else{

            tail->next = item;

            tail = item;
        }
        ++length;
    }

    void insert_front(int value){

        Node* item = new Node(value);

        if(!head)
            head = tail = item;

        else {

            item->next = head;

            head = item;
        }

        ++length;
    }

    int delete_front(){

        assert(length);

        int value ;

        if(head == tail){
            
            value = head -> data;

            delete head;

            head = tail = nullptr;
        }

        else{

            value = head -> data;

            Node* item = head;

            head = head->next;

            delete item;
        }

            --length;

            return value;
    }

    int size(){

        return length;
    }

    Node* get_nth(int steps){

        Node* cur = head;

        while(cur != nullptr && --steps)
            cur = cur->next;

        if(cur)
            return cur;
        
        return nullptr;
    }

    Node* get_nth_back(int steps){

        assert(steps <= length);

        int idx = length - steps;

        Node* cur = head;

        while(idx--)
            cur = cur->next;

        return cur;
    }

    int search(int value){

        int idx = 0;

        for(Node* cur = head ; cur ; cur = cur->next , idx++)
            if(cur->data == value)
                return idx;

        return -1;
    }

    int improved_search(int value){

        int idx = 0;

        Node* previous = nullptr;

        for(Node* cur = head ; cur ; cur = cur->next , idx++){

            if(cur->data == value){

                if(!previous)  // the value is in the head
                    return idx;

                swap(previous->data , cur->data);

                return idx - 1;
            }
            previous = cur;
        }
    }

    int improved_search2(int value){

        int idx = 0;

        for(Node* cur = head , *previous = nullptr ; cur ; previous = cur , cur = cur->next){

            if(cur->data == value){

                if(!previous)
                    return idx;

                swap(previous->data , cur->data);

                return idx - 1;
            }
            ++idx;
        }
    }

    void debug_verify_data_intergriy(){

        if(length == 0){

            assert(head == nullptr);
            assert(tail == nullptr);
        }
        else {

            assert(head != nullptr);
            assert(tail != nullptr);

            if(length == 1)
                assert(head == tail);
            
            else
                assert(head != tail);

            assert(!tail->next);
        }

        int len = 0;

        for(Node* cur = head ; cur ; cur = cur->next , len++)
            assert(len < 10000);

        assert(length == len);

        assert(length == (int)debug_data.size());
    }

    string debug_to_string(){

        if(length == 0)
            return "";
        
        ostringstream oss;

        for(Node* cur = head ; cur ; cur = cur->next){

            oss<<cur->data;

            if(cur->next)
                oss<<" ";
        }

        return oss.str();

    }

    bool is_same(const LinkedList& other){

        Node* h1 = head , *h2 = other.head;

        while(h1 && h2){

            if(h1->data != h2->data)
                return false;

            h1 = h1 ->next , h2 = h2->next;
        }

        return !h1 && !h2;
    }

    void delete_end(){

        assert(length);

        if(head == tail){

            delete head;

            head = tail = nullptr;

        }
        else{

            Node* cur = head;

            while(cur->next != tail)
                cur = cur->next;

            delete tail;

            cur->next = nullptr;

            tail = cur;
        }

        --length;

    }

    void delete_nth(int idx){

        assert(idx <= length);

        Node* cur = head;
        Node* previous = nullptr;

        if(idx == 1){

            head = head->next;

            delete cur;

            return;
        }

        while(--idx){

            previous = cur;

            cur = cur->next;
        }

        previous->next = cur->next;

        delete cur;

        --length;
    }

    void delete_value(int value){

        assert(length);

        Node* cur = head,
                *previous = nullptr;

        while(cur){

            if(cur->data == value){

                if(head == tail){

                    delete head;

                    head = tail = nullptr;
                }

                else{

                    if(!previous){

                        head = head->next;

                        delete cur;
                    }

                    else{

                        previous->next = cur ->next;

                        delete cur;
                    }  
                }

                --length;

                return;

            }

            previous = cur;

            cur = cur->next;
        } 
    }

    void swap_pairs(){

        assert(length);

        if(head == tail)
            return;

        Node* cur = head->next;
        Node* previous = head;

        while(cur){

            swap(previous->data , cur->data);

            previous = cur->next;

            cur = cur->next->next;
        }
    }

    void delete_even_positions(){

        assert(length);

        if(head == tail)
            return;

        Node* previous = head,
            *cur = head->next;

        while(previous->next){

            previous->next = cur->next;

            previous = cur->next;

            delete cur;

            --length;

            cur  = previous->next;
        }
    }

    void insert_sorted(int value){

        Node* item = new Node(value);

        if(!head)
            head = tail = item;

        for(Node* cur = head , *previous = nullptr; cur ; previous = cur , cur = cur->next){

            if(cur->data > value){

                if(!previous){

                    item->next = head;

                    head = item;
                }

                else{

                    item->next = cur;

                    previous->next = item;
                }

                ++length;

                return;
            }
        }

        insert_end(value);

        ++length;
    }

    void test1(){

        cout<<"\ntest1\n";

        LinkedList list;

        list.insert_end(1);
        list.insert_end(2);
        list.insert_end(3);
        list.insert_end(4);

        list.print();

        string expected = "1 2 3 4";

        string result = list.debug_to_string();

        if(expected != result){

            cout<<"No match : \n"
                <<"Expected : "<<expected
                <<"\nResult   : "<<result<<"\n";

            assert(false);
        }

        //list.debug_print_list("********");
    }

    void debug_add_node(Node* node){

        debug_data.push_back(node);
    }

    void debug_remove_node(Node* node){

        auto it = std::find(debug_data.begin() , debug_data.end() , node);

        if(it == debug_data.end())
            cout<<"Node does not exist \n";

        else 
            debug_data.erase(it);

    }


private:

    Node* head {}; // to initialize it with "nullptr"
    
    Node* tail {};

    int length = 0;

    vector<Node*> debug_data;
};

class LinkedQueue {

    LinkedList list;

public : 
    void enqueue(int value){

        list.insert_end(value);
    }

    int dequeue(){

        return list.delete_front();
    }

    void display(){

        list.print();
    }

    bool isEmpty(){

        return list.size() == 0;
    }

};

class Deque {

    int size {};
    int front {0};
    int rear {0};
    int added_elements{};
    int* array {};

public : 

    Deque(int size) : size(size) {

        array = new int[size];
    }

    ~Deque(){

        delete [] array;
    }

    int next(int pos){

        //return (pos + 1) % size;

        ++pos;

        if(pos == size)
            pos = 0;

        return pos;
    }

    int isEmpty(){

        return added_elements == 0;
    }

    int isFull(){

        return added_elements == size;
    }

    void enqueue_rear(int value){

        assert(!isFull());

        array[rear] = value;

        rear = next(rear);

        added_elements++;
    }

    void enqueue_front(int value){

        assert(!isFull());

        if(isEmpty())
            array[rear++] = value;

        else {

            if(front == 0)
                front = size - 1;

            array [front] = value;
        }

        added_elements++;
    }

    int dequeue_front(){

        assert(!isEmpty());

        int value = array[front];

        front = next(front);

        -- added_elements;

        return value;
    }

    int dequeue_rear(){

        assert(!isEmpty());

        int value ;

        if(rear == 0){

            value = array[rear];

            rear = size - 1;
        }

        else 
            value = array[--rear];

        -- added_elements;

        return value;
    }

    void display(){

        if(isEmpty())
            return;

        for(int cur = front , step = 0 ; step < added_elements ; ++step , cur = next(cur))
            cout<<array[cur]<<" ";
        
        cout<<"\n";
    }
};

class StackQ {

    Queue q;

    int added_elements {};

public : 

    StackQ(int size) : q(size){}

    bool isFull(){

        return q.isFull();
    }

    bool isEmpty(){

        added_elements == 0;
    }

    int peek(){

        assert(!isEmpty());

        return q.get_first();
    }

    void push(int value){

        int s = added_elements;

        q.enqueue(value);

        while(s--)
            q.enqueue(q.dequeue());

        ++added_elements;
    }

    int pop(){

        assert(!isEmpty());

        --added_elements;

        q.dequeue();
    }
};

class Stack
{
public:
    Stack(int);
    Stack();
    ~Stack();

    void push(int);
    int pop();
    int peek();
    void display();
    bool isFull();
    bool isEmpty();

private:

    int size {};

    int top {};

    int* arr {};
};

Stack::Stack(int size) : size(size) , top(-1){

    arr = new int[size];
}

Stack::Stack(){ arr = new int [10] ; top = -1;}

Stack::~Stack(){

}

void Stack::push(int value){

    assert(!isFull());

    arr[++top] = value;
}

int Stack::pop(){

    assert(!isEmpty());

    return arr[top--];
}

int Stack::peek(){

    assert(!isEmpty());
    
    return arr[top];
}

bool Stack::isFull(){

    return top == size -1;
}

bool Stack::isEmpty(){

    return top == -1;
}

void Stack::display(){

    for(int i = top ; i >= 0 ; i--)
        cout<<arr[i]<<" ";

    cout<<"\n";
}


class Q2S_v1 {

    int size {};
    int added_elements{};

    Stack s1;
    Stack s2;

public :

    Q2S_v1(int size) : size(size) , s1(size) , s2(size){}

    void enqueue(int value){

        assert(!s1.isFull());

        s1.push(value);

        added_elements++;
    }

    int dequeue(){

        while(!s1.isEmpty())
            s2.push(s1.pop());

        s1 = s2;

        added_elements--;

        return s1.pop();

    }

    bool isFull(){

        return added_elements == size;
    }

    bool isEmpty(){

        return added_elements == 0;
    }

};

class Q2S_v2 {
    int size {};
    int added_elements{};

    Stack s1;
    Stack s2;

public :

    Q2S_v2(int size) : size(size) , s1(size) , s2(size){}

    void enqueue(int value){

        assert(!s1.isFull());

        s1.push(value);

        while(!s1.isEmpty())
            s2.push(s1.pop());

        s1 = s2;

        added_elements++;
    }

    int dequeue(){

        assert(!s1.isEmpty());

        added_elements--;

        return s1.pop();

    }

    bool isFull(){

        return added_elements == size;
    }

    bool isEmpty(){

        return added_elements == 0;
    }

};

int main(){

    // Deque d(10);

    // d.enqueue_front(3);
    // d.enqueue_front(2);
    // d.enqueue_rear(4);
    // d.enqueue_front(1);

    // d.display();

    // cout<<d.dequeue_rear()<<"\n";

    // d.display();

    // cout<<d.dequeue_front()<<"\n";

    // d.display();

    // cout<<d.dequeue_front()<<"\n";
    // cout<<d.dequeue_rear()<<"\n";

    // d.enqueue_rear(7);

    // d.display();


    Q2S_v1 q(6);

    for(int i = 1 ; i <= 3 ; ++i)
        q.enqueue(i);

    cout<<q.dequeue()<<"\n";

    for(int i = 4 ; i <= 5 ; ++i)
        q.enqueue(i);

    while(!q.isEmpty())
        cout<<q.dequeue()<<" ";

    return 0;
}