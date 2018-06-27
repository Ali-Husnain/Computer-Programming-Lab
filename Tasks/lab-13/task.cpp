#include <iostream>

using namespace std;

struct node
{
    int value;
    node *next = NULL;
};
class linklist
{
private:
    node *head;
public:
    bool search(int key)
    {
        node *temp = head;
        int n = 0;
        while (temp->next != NULL) {
            if(temp->value == key)
            {
                // cout<<"Position of "<<key<<" in list: "<<n<<endl;
                return true;
                // cout<<temp->next->next<<endl;
            }
            temp = temp->next;
            n++;
        }
        return false;
    }
    void delte(int key)
    {
        node *temp = head , *t1;

            if(search(key) == true)
            {
                while(temp->next != NULL)
                {
                    // cout<<"hello\n";
                    if(temp->next->value == key)
                    {
                        // cout<<"hi..\n";
                        t1 = temp->next;
                        temp->next = temp->next->next;    //// temp->next = t1->next
                    }
                    temp=temp->next;
                }
                delete t1;
            }

            else
            {
                cout<<"Element is not in list.\n";
            }


    }
    void create(int x)
    {
        if(head == NULL)
        {
            head = new node;
            head->value = x;
            head->next = NULL;
        }
        else
        {
            node *temp = head;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next=new node;
            temp->next->value = x;
            temp->next->next=NULL;
        }
    }
    void print()
    {
        node *temp = head;
        while(temp->next != NULL)
        {
            cout<<temp->value<<"  ";
            temp = temp->next;
        }
        cout<<temp->value<<endl;
    }
    linklist()
    {
        head = NULL;
    }
};





int main()
{

    linklist list;
    list.create(1);
    list.create(2);
    list.create(3);
    list.create(4);
    // list.print();
    // list.delte(3);
    list.delte(8);
    // list.print();
    // list.search(1);
    return 0;
}
