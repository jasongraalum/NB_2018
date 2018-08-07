#include <cstdlib>
#include <iostream>

using namespace std;

struct node {
    int data;
    node * next;
};

class lll {
    public:
        lll();
        void insert(int);
        void display_all();
    private:
        node * head;
};

lll::lll()
{
    head = NULL;
}
void lll::insert(int new_data)
{
    node * temp = new node;
    temp->data = new_data;

    // Case 1: head is NULL means List is empty
    if(head == NULL) {
        cout << "Case 1 insert : " << new_data << endl;
        head = temp;
        temp->next = NULL;
    }
    // Case 2: Insert at the beginning of the List
    else if(new_data < head->data) {
        cout << "Case 2 insert : " << new_data << endl;
        temp->next = head;
        head = temp;
    }
    else {
        cout << "Case 3 insert : " << new_data << endl;
        node * current = head;
        while(current->next != NULL && current->next->data < new_data)
        {
            current = current->next;
        }
        temp->next = current->next;
        current->next = temp;
    }
}

void lll::display_all()
{
    node * current = head;
    while(current != NULL) {
        cout << current->data << " : ";
        current = current->next;
    }
    cout << endl;
}

int main(){

    lll L;

    int test_data[10] = {34,56,234,87,347,9,12,64,8,2};

    for(int i = 0; i < 10; i++) {
        L.insert(test_data[i]);
    }

    L.display_all();

}


