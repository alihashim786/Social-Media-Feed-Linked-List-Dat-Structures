# Social Media Feed
The aim of this assignment is to have hands-on experience with linked  list operations while building a practical application.


This project simulates the functionality of a social media feed, similar to platforms like Facebook, Twitter, and Instagram. Using a **linked list** as the underlying data structure, this project demonstrates how to manage, organize, and display posts in a chronological order, offering features such as creating, editing, searching, and sorting posts by date.

## Features

- **Create Posts**: Add new posts to the feed with auto-generated unique IDs.
- **Edit Posts**: Modify the content of existing posts and update the timestamp.
- **Search Posts**: Search for posts based on specific text.
- **Sort Posts**: Display posts in ascending or descending order of their creation date.
- **Delete Posts**: Remove posts based on their ID.

## Data Structure

The feed is implemented using a **singly linked list**, where each node represents a **Post**. Each post contains attributes like an ID, text, and timestamp. Below are the components and functionalities.

### 1. Post Class/Struct

Each post in the feed is represented by a Post object. The attributes of the **Post** class include:

- **ID**: A 4-digit unique identifier, auto-generated when a post is created.
- **Text**: The text content of the post.
- **Timestamp**: The date and time of post creation or its most recent edit.

### 2. Feed Class/Struct

The **Feed** class is a singly linked list that holds the posts and provides several key functionalities, including:

- **Add a New Post**:  
  Prompts the user for input text, creates a new post, and inserts it in the appropriate position in the feed.

- **Edit a Post**:  
  Prompts the user to enter the post ID and the new text. If the ID exists, it updates the post text and timestamp and repositions the post in the feed based on the updated time.

- **Search for Posts by Text**:  
  Prompts the user for input text and searches the feed to display all posts containing the specified text.

- **Delete a Post**:  
  Prompts the user to input the post ID and deletes the post if the ID exists in the feed.

- **Display All Posts (Latest First)**:  
  Displays all posts in reverse chronological order (newest to oldest).

- **Display All Posts (Oldest First)**:  
  Displays all posts in chronological order (oldest to newest).

## Interface

To test and interact with the feed, the following operations are provided via an interface:

1. **Create a Feed**: Initialize the feed.
2. **Create Posts**: Add the following posts:
   - "Hello World!"
   - "How is everyone doing today?"
   - Six posts with random text.
   - "I should be going, see you guys later."
   - "Bye"
3. **Search Posts**: Search for posts containing the word "World" and retrieve the post's ID.
4. **Edit a Post**: Using the ID found from the search, change the text of the post to "Hello guys!".
5. **Display Posts**:  
   - Display all posts in chronological order (oldest to newest).  
   - Search for posts containing the word "guys" and delete them.
   - Display all posts in reverse chronological order (newest to oldest).

## Conclusion

This project demonstrates the implementation of a basic social media feed using linked lists. It highlights key concepts such as data organization, searching, sorting, and editing within a dynamic structure, providing a practical way to understand linked lists.

## <img src="https://img.icons8.com/ios/50/000000/email-open.png" width="20"/> Contact:
If you have any queries, feel free to email me at [muhammadalihashim514@gmail.com](mailto:muhammadalihashim514@gmail.com) or [i220554@nu.edu.pk](mailto:i220554@nu.edu.pk).

Feel free to connect with me on [LinkedIn](https://www.linkedin.com/in/muhammad-ali-hashim-5115882b4) to stay in touch and network.

## Contributing 

Contributions are welcome! Feel free to open issues or submit pull requests to improve the project.

