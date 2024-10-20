#include <iostream>
using namespace std;
#include <string>
#include <ctime>

//I can also do this by using only two classes by making "next" pointer in post class and aggregate with Feed class
//and then accessing the data means id , text and timestamp fro the post class
class Post {
public:
    int ID;
    string Text;
    string Timestamp;

    Post(int id, const string& text) : ID(id), Text(text) {
        // Get the current date and time for Timestamp
        time_t now = time(0);
        Timestamp = ctime(&now);
    }
};

//Didn't use class because struct can do it. As structure have public data so i can use it anywhere in the code
class Node {
    public:
    Post data;
    Node* next;
    Node(Post newP, Node* next):data(newP),next(next){}
    };


class Feed {
private:
    Node* head;

public:
    Feed(){
        head = NULL;
    }

    // Function to add a new Post to the Feed
    void AddPost(const string& text) {
       
         int id = 0;
         id = rand() % 9000 + 1000; // Generatig a 4-digit random ID. 1000-9999
        Post newPost(id, text);
        Node* newNode = new Node(newPost, nullptr);

        //head == nullptr means checking that currently any node exists in linked list or not. So id head is equal to nullptr that currently there are no node in linked list
        //head == nullptr will be only true at fitsy node/post creation only 
        //INSERTING NEW NODE AT BEGINING 
        if (head == nullptr || head->data.Timestamp < newPost.Timestamp) {
            newNode->next = head;  //first saving the address of first node of list to new node because head contains the address of first node  
            head = newNode;   //then pointing head toward new node
        } 

        //only runs when user wants to put a new node which has time lesser than currently first node
        /*for example:
        we have three nodes p1 p2 and p3 having 8:00, 7:56,and 7:55 times respectively and newnode/newpost time is 
        7:57 now else part will run and new node will be put before p2 and linked list will be like:
        p3->newnode->p2->p1
        */
        else {
            Node* current = head;
            while (current->next != nullptr && current->next->data.Timestamp >= newPost.Timestamp) {
                current = current->next;
            }
            newNode->next = current->next;
            current->next = newNode;
        }
    }

    
    void EditPost(int id, const string& newText) {
        Node* current = head;
        while (current != nullptr) {
            if (current->data.ID == id) {
                current->data.Text = newText;
                // Updating  the Timestamp
                time_t rightNow = time(0);
                current->data.Timestamp = ctime(&rightNow);
                cout<<"\nEDIT POST FUNCTION\nID: " << current->data.ID << ", Text: " << current->data.Text << endl<<endl;
                return;
            }
            current = current->next;
        }
        cout << "Post with ID " << id << " not found." << endl;
    }

    void SearchPosts(const string& searchText) {
        Node* current = head;
        cout<<"\nSEARCH POST FUNCTION\n";
        while (current != nullptr) {
            if (current->data.Text.find(searchText) != string::npos) {
                cout << "ID: " << current->data.ID << ", Text: " << current->data.Text << endl<<endl;

            }
            current = current->next;
        }
    }

    void DisplayPostsOldestFirst() {
        Node* current = head;
        while (current) {
            cout << "ID: " << current->data.ID << ", Text: " << current->data.Text << ", Timestamp: " << current->data.Timestamp;
            current = current->next;
        }
    }


    void DisplayPostsNewestFirst() {
        Node* current = head;
        Node* prev = nullptr;
        while (current) {
            Node* next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        current = prev;
        while (current) {
            cout << "ID: " << current->data.ID << ", Text: " << current->data.Text << ", Timestamp: " << current->data.Timestamp;
            current = current->next;
        }
    }

    void DeletePost(int id) {
        Node* current = head;
        Node* prev = nullptr;

        while (current) {
            if (current->data.ID == id) {
                if (prev) {
                    prev->next = current->next;
                } else {
                    head = current->next;
                }
                delete current;
                cout << "\nPost with ID " << id << " deleted.\n\n";
                return;
            }
            prev = current;
            current = current->next;
        }
        cout << "Post with ID " << id << " not found." << endl;
    }


};