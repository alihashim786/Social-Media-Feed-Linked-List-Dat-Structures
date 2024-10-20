#include <iostream>
#include "DataStructures_Asg1_BAI-3B_22I0554_AliHashim.h"
using namespace std;
#include <string>
#include <ctime>


int main() {
    srand(time(0)); // Initialize random seed
    
    Feed FacebookFeed;

    // Creating Posts
    FacebookFeed.AddPost("Hello World!");
    FacebookFeed.AddPost("How is everyone doing today");
    for (int i = 0; i < 6; i++) {
        FacebookFeed.AddPost("Post " + to_string(i) + " created");
    }
    FacebookFeed.AddPost("I should be going, see you guys later.");
    FacebookFeed.AddPost("Bye");

    // Searching for a Post containing "World" and edit it
    FacebookFeed.SearchPosts("World");
    cout<<"Enter the id of the post containing word \"World\" (see in above output ): ";
    int id = 0;
    cin>>id;
    FacebookFeed.EditPost(id,"Hello guys!");

    // Displaying all Posts in chronological order (Oldest first)
    FacebookFeed.DisplayPostsOldestFirst();

    // Searching for Posts containing "guys" and delete them
    FacebookFeed.SearchPosts("guys");
    cout<<"Enter the id of the post containing word \"guys\" (see in above output ): ";
    cout<<"\nid 1: ";
    cin>>id;
    FacebookFeed.DeletePost(id);
    cout<<"id 2: ";
    cin>>id;
    FacebookFeed.DeletePost(id);
    
    
  // Displaying all Posts in reverse chronological order (Newest first)
    FacebookFeed.DisplayPostsNewestFirst();


    return 0;
}
