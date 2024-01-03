# Data-Structures-Studying

I will do my best to make this a good reference for Anybody to study Data Structures I will split it into several steps. <br>
The first thing in every step I will recommend for you a resources to study from. and I will try to write a good explanation and solve with you some problems. <br>
### recommended resources to study
> - [mycodeschool](https://www.youtube.com/playlist?list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
> - [freeCodeCamp](https://www.youtube.com/watch?v=B31LgI4Y4DQ&t=146s&pp=ygULbGlua2VkIGxpc3Q%3D)
> - [ Arabic Competitive Programming](https://www.youtube.com/playlist?list=PLPt2dINI2MIZX2EtY81WI-lDkvhKziLKM)**(Arabic)** DR.Mustafa Saad
> - [Mega Code](https://www.youtube.com/playlist?list=PLsGJzJ8SQXTcsXRVviurGei0lf_t_I4D8)**(Arabic)**
> - [Hard-Code](https://www.youtube.com/playlist?list=PLwCMLs3sjOY4UQq4vXgGPwGLVX1Y5faaS)**(Arabic)**
> - [Adel Nasim](https://www.youtube.com/playlist?list=PLCInYL3l2AajqOUW_2SwjWeMwf4vL4RSp)**(Arabic)**


## - [**Step zero**](#Step-zero)✅
## - [**Step One (vector)**](#Step-One-vector)✅
## - [**Step Two (Single Linked list)**](#Step-Two-Single-Linked-list)✅
## - [**Step Three (Double Linked list)**](#Step-Three-Double-Linked-list)✅
## - [**Step Four (Stack)**](#Step-Four-Stack)✅
## - [**Step Five (Queue)**](#Step-Five-Queue)⏳
## - [**Step Six (Binary Tree)**](#Step-Six-Binary-Tree)⏳
## - [**Step Seven (Binary Search Tree (BST))**](#Step-Seven-Binary-Search-Tree-(BST))⏳

## Step zero 


### First of all I have two questions **what is Data Structure ?** And **Why do I want to study Data Structure?**<br>
#### ***What is Data Structure ?*** 
> - [Data Structures - What and Why](https://www.youtube.com/watch?v=N-vU8VZ5ukA&list=PLPt2dINI2MIZX2EtY81WI-lDkvhKziLKM&index=1&pp=iAQB)**(Arabic)** DR.Mustafa Saad
> - [What Are Data Structures?](https://www.youtube.com/watch?v=bum_19loj9A) CS Dojo
>  A data structure is a way of organizing data in the computer memory that we can use effectively.
#### ***Why do I want to study Data Structure?*** 

> You know that we store and reuse data in the memory, so we need fast and powerful algorithms to do that.<br>
> Now you may have a  question how can we compare between algorithms to know the most  useful algorithm in my case <br>
> I may have an algorithm that is so fast but take a lot of memory or in other case, you may have an algorithm so slow but take little memory or another one so fast and take little memory<br>
>  > Wait for a second How can I compare between algorithms <br>
>  >  So to compare between Algorithms One of the most fundamental ways to compare algorithms is to analyze their **Time And Space complexity**.<br><br>
>  > And this is some resources to know about **Time And Space complexity** <br>
>  >  > [Full course from freeCodeCamp](https://youtu.be/Mo4vesaut8g?si=scKq0vsxty_RgWeR) <br>
>  >  > [EducationAboutStuff](https://youtu.be/8mBxpDWEKNw?si=51d6stt1lBvvVdTX) <br>
>  >  > [Adel Nasim](https://youtu.be/sHhVsGQz9MI?si=-NjIAOKvVXJbCEK8) (Arabic) <br>
>  >  > Search and you will find more and more <br>

>  >  We will learn about the Implementation of the basic data structures. <br>
>  >  Now you may have another question Why should I know something like that in case I can use the built-in data structure like STL in C++?<br>
>  >  I will ask you a question what is better using these black boxes or knowing the implementation of them and having the ability to build your data structure?<br>

### Do you know any data structure?
> The answer is **YES** you know the **array**
#### Array Data Structure
>An array is a collection of items stored at contiguous memory locations. The idea is to store multiple items of the same type together. This makes it easier to calculate the position of each element by simply adding >an offset to a base value, i.e., the memory location of the first element of the array (generally denoted by the name of the array).

## Step One (vector)


We talked about the most simple data structure The array data structure, But it's easy to see that the array is so limited by its initial size.<br>
>When the size is determined, it is fixed.
>So we aren't able to insert or remove elements that affect the size
So we need something more flexible. <br>
let's create our own dynamic array and we will call it vector.
> similar to STL Vector class in C++.
>  > If you don't know what is vector I recommend watching one of these videos :
>  > > - [take U forward](https://youtu.be/RRVYpIET_RU?si=dLR169cAO1i9OVub) at 10:04
>  > > - [Elzero Web School](https://www.youtube.com/watch?v=55MRxgVOkMo&pp=ygUVdmVjdG9yIGRhdGEgc3RydWN0dXJl) (Arabic)
>  > > - [Adel Nasim](https://www.youtube.com/watch?v=AMnultLTdlI&t=903s) (Arabic)
>  > > - [Knowledge Center](https://youtu.be/je7zlYfJf7Q?si=o_7H1mkHztFeb-L_).

Now what we need in our class ??<br>
....... We need Data and operations;
- I will talk about some Operations first .... We have some basic operations :
> - set data
> - get data
> - insert data
> - delete data
> - find data by index <br>

- For data: we can store our data in an array but wait it said that the array is limited so I will use a dynamic array
> - How to do that? I will use pointers,  int* which will point to an array and when I need another array I will make the pointer point to it and store data in the new array, and then ${\color{red}Delete}$ the old array.

I think Now you have a good background abohttps://media.geeksforgeeks.org/wp-content/cdn-uploads/20230726162542/Linked-List-Data-Structure.pngut vector and how our implementation will be So after you finish take a look at [my code](/vector) I think It would be helpful.


## Step Two (Single Linked list)

### resources :-
> - [Mega Code](https://www.youtube.com/playlist?list=PLsGJzJ8SQXTeekVrjC0Nq3xGq1pXi6cQO) (Arabic)
> - [Neso Academy](https://www.youtube.com/playlist?list=PLBlnK6fEyqRi3-lvwLGzcaquOs5OBTCww)

Before Taking about linked list I will mention Important thing 
> There are broadly two types of Data structures: Linear and Non-linear. Linear data structures are those in which every element is connected to the previous element and the elements are present at a single level.
> Some examples of linear data structures are- Arrays, linked lists, stack,s and queues. Thus, a linked list is a linear data structure in which elements are not stored contiguously in the memory.

First of all we need to remember some things about array and vector
> - Array is static. You can’t delete/insert/expand
> - Vector was our way to get a dynamic array
but if we want to add a new element in the vector and there is no free place we will take a new array and copy all the data = O(N).<br>
So what if I want just to add the new element and I don't want to care about the size of the array? now we can talk about the linked list.

let's say that we have some variables how can we link them ??
what if every element points to the next one?

<img src="https://techvidvan.com/tutorials/wp-content/uploads/sites/2/2021/06/TechVidvan-Linked-list-normal-image01.jpg" alt="single linked list" width="800" height="400">

so the node is a structure that contains data and pointer points to the next node 

```cpp
struct node{
    int data;
    node *Next;
    node(int data = 0) : data(data), Next(nullptr) {
    }
    ~node(){
    }
};
```

So in little words, we can say that a linked list is just a connection of some nodes, and another important component *Head* pointer points to the first node, and the *Tail* points to the last Node.
#### Traversal in a Singly Linked List
  
  Traversal means visiting each node of the linked list. and we need to traverse the linked list to do operations like this. <br>
  - Insertion
  - Deletion
  - Display
  - Search 
     
  > - it's too easy to understand from this simple code.
  
  ```c++
node *ptr = head;
    while (head != nullptr) {
        std::cout << ptr->data << ' ';
        ptr = ptr->Next;
    }
```

### Insertion in a Single Linked List

when we talk about Insertion We talk about three cases.

1. Insertion at the beginning of the list

2. Insertion after a particular node.

3. Insertion at the end of the list

##### 1. Insertion at the beginning:

Insertion at the beginning means we will insert a node at the front of the list in the following way:

<img src="https://techvidvan.com/tutorials/wp-content/uploads/sites/2/2021/06/TechVidvan-Linked-list-normal-image02.jpg" alt="insert in single linked list" width="800" height="400">

We can see that we have a linked list of the following elements: 10→20→30.

Once we insert a new node at the beginning, the list will be 50→10→20→30.

##### 2. Insertion after a particular node:
We need to traverse all the nodes before the position of insertion of the new node.

<img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2013/03/Linkedlist_insert_middle.png" alt="insert in single linked list" width="800" height="400">

In this case, we will have a temporary pointer named ‘tmp’. This pointer tmp will be pointing to *B* because we need to insert *E* after ‘B’.

##### 3. Insertion at the End:
here we have a trick if we use the *Tail* pointer to point to the last node in the linked list it will be like [Insertion at the beginning](Insertion-at-the-beginning:) We just want to change the Tail pointer to point to the new node after changing the next pointer in the old last node to the new one.

but if we don't use a Tail pointer it will be like [Insertion after a particular node](Insertion-after-a-particular-node:).

| Insertion operation | Complexity |
| ------------------- | ---------- |
| At the beginning	  | O(1) |
| After a particular node | O(n) |
| At the end | O(n) |
| At the end (using Tail) | O(1) |
### Deletion from a Linked List:
Just like insertion, deletion also works in three different cases:

1. Deletion from beginning

2. Deleting a node other than the first and the last node

3. Deletion at the end


##### 1. Deletion from the beginning:

It involves deleting the first node of the linked list.

<img src="https://techvidvan.com/tutorials/wp-content/uploads/sites/2/2021/06/TechVidvan-Linked-list-normal-image04.jpg" alt="Delete from single linked list" width="800" height="400">

Suppose we initially had the linked list elements as 10→20→30→40.

If we perform the deletion of one node at the beginning, the linked list will be:
20→30→40.

Whenever we delete a node, we make the memory area occupied by that node free by using the *Delete* keyword. Otherwise, it might lead to a memory leakage problem.

###### 2. Deletion after a particular node:
If we have the address of a particular node, we can always delete the node next to it.

<img src="https://techvidvan.com/tutorials/wp-content/uploads/sites/2/2021/06/TechVidvan-Linked-list-normal-image06.jpg" alt="Delete from single linked list" width="800" height="400">

##### 3. Deletion at the end
It is an easy case we can consider it like Deletion after a particular node.

<img src="https://techvidvan.com/tutorials/wp-content/uploads/sites/2/2021/06/TechVidvan-Linked-list-normal-image05.jpg" alt="Delete from single linked list" width="800" height="400">


| Deletion operation | Complexity |
| ------------------- | ---------- |
| At the beginning	  | O(1) |
| After a particular node | O(n) |
| At the end | O(n) |

Now try to implement and solve some problems using linked list.

Problemset :

| Problem  | Level | Solved | video |
| ------------- | ------------- | ------------- | ------------- |
| [Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)  | ${\color{green}Easy}$  |  ✅| [take U forward](https://www.youtube.com/watch?v=D2vI2DNJGd8&list=PLgUwDviBIf0rAuz8tVcM0AymmhTRsfaLU&index=10&pp=iAQB) |
| [Palindrome Linked List ](https://leetcode.com/problems/palindrome-linked-list/)  | ${\color{green}Easy}$  |  ✅|  [take U forward](https://www.youtube.com/watch?v=lRY_G-u_8jk&list=PLgUwDviBIf0rAuz8tVcM0AymmhTRsfaLU&index=11&pp=iAQB) |
| [Merge Two Sorted Lists ](https://leetcode.com/problems/merge-two-sorted-lists/)  | ${\color{green}Easy}$  |  ✅|  |
| [Linked List Cycle ](https://leetcode.com/problems/linked-list-cycle/)  | ${\color{green}Easy}$  |  ✅| [take U forward](https://www.youtube.com/watch?v=wiOo4DC5GGA&list=PLgUwDviBIf0rAuz8tVcM0AymmhTRsfaLU&index=15) |
| [Remove Nth Node From End of List ](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)  | ${\color{yellow}Medium}$  |  ✅|  [take U forward](https://www.youtube.com/watch?v=3kMKYQ2wNIU&list=PLgUwDviBIf0rAuz8tVcM0AymmhTRsfaLU&index=9&pp=iAQB) |
| [Reorder List  ](https://leetcode.com/problems/reorder-list/)  | ${\color{yellow}Medium}$  |  ✅| |
| [Add Two Numbers ](https://leetcode.com/problems/add-two-numbers/)  | ${\color{yellow}Medium}$  |  ✅|  [take U forward](https://www.youtube.com/watch?v=XmRrGzR6udg&list=PLgUwDviBIf0rAuz8tVcM0AymmhTRsfaLU&index=6) |
| [Add Two Numbers II](https://leetcode.com/problems/add-two-numbers-ii/)  | ${\color{yellow}Medium}$  |  ✅|  |


## Step Three (Double Linked list)

### resources :-
> - [Neso Academy](https://www.youtube.com/playlist?list=PLBlnK6fEyqRg7pacSDMgPn7vDVhz3N1uf)
> - [Hard-Code](https://www.youtube.com/playlist?list=PLwCMLs3sjOY4UQq4vXgGPwGLVX1Y5faaS)**(Arabic)** [18-21]
> - [Adel Nasim](https://www.youtube.com/watch?v=9xtRgr2V2mY&list=PLCInYL3l2AajqOUW_2SwjWeMwf4vL4RSp&index=18&t=2s&pp=iAQB)**(Arabic)**


In singly linked list We have single pointer pointing to the next node.<br>
But a doubly linked list contains two pointers. One pointer points to the next node and one pointer to the previous node.<br>

Every node in a doubly linked list has :- 
   - Data
   - Address of the next node
   - Address of the previous node

```cpp
struct node{
    int data;
    node *next;
    node *pre;
    node(int data = 0) : data(data), next(nullptr), pre(nullptr) {
    }
    ~node(){
    }
};
```

<img src="https://techvidvan.com/tutorials/wp-content/uploads/sites/2/2021/06/TechVidvan-Doubly-linked-list-normla-image02-1.jpg" alt="Node in Double linked list" width="200" height="200">

so we can represent Double linked list like this : 

<img src="https://techvidvan.com/tutorials/wp-content/uploads/sites/2/2021/06/TechVidvan-Doubly-linked-list-normla-image.jpg" alt="Double linked list" width="600" height="300">


Now let's Talk about simple operations on double Linked list : -
- Insertion
- Deletion

Insertion in a Linked List

Insertion in a linked list occurs at three different positions:

1. Insertion at the beginning of the list

2. Insertion after a particular node.

3. Insertion at the end of the list

#### 1. Insertion at the beginning
We insert a node at the beginning such that the next pointer points to the node which was at first before. The previous pointer points to NULL.

![TechVidvan-Doubly-linked-list-normla-image04](https://github.com/Ahmed-Elshitehi/Data-Structures-Studying/assets/122414149/aac2f09d-0626-46c8-a9b3-e3652b8b1ffe)
Here, we have tried to insert M at the beginning.
```cpp
void DoubleLinkedList::insert_front(int value) {
    node *tmp = new node(value);
    if (!head) {
        head = tail = tmp;
    } else {
        link(tmp, head);
        head = tmp;
    }
    length++;
}
```

#### 2. Insertion after a particular node.
Insertion after a particular node involves traversing all nodes before that node. We will make use of an extra pointer ‘temp’ for traversing the node up to a particular position.

![TechVidvan-Doubly-linked-list-normla-image06](https://github.com/Ahmed-Elshitehi/Data-Structures-Studying/assets/122414149/e11a3e50-bfb7-4489-8d44-2b1d9d498b25)
here we want to add a node  ‘M’ between node ‘B’ and node ‘C’.

#### 3. Insertion at the end of the list
If the list is empty, we will insert a node right after the Head. If the list is not empty, we first need to traverse the whole list to insert a node at the end of the list.

<img src="https://techvidvan.com/tutorials/wp-content/uploads/sites/2/2021/06/TechVidvan-Doubly-linked-list-normla-image05.jpg" alt="Double linked list" width="900" height="300">
Here we are inserting M at the end.

```cpp
void insert_end(int value) {
    node *tmp = new node(value);
    if (!head) {
        head = tail = tmp;
    } else {
        link(tail, tmp);
        tail = tmp;
    }
    length++;
}
```

Deletion also works in three different cases:

1. Deletion from beginning

2. Deleting a node other than the first and the last node

3. Deletion at the end


#### 1. Deletion from the beginning:

It involves deleting the first node of the doubly linked list

<img src="https://techvidvan.com/tutorials/wp-content/uploads/sites/2/2021/06/TechVidvan-Doubly-linked-list-normla-image07.jpg" alt="Double linked list" width="900" height="300">

```cpp
void delete_front() {
    if (!head) return;
    head = head->next;
    delete head->pre;
    if (head)
        head->pre = nullptr;
    length--;
    if (!length) {
        tail = nullptr;
    }
}
```

#### 2.Deletion after a particular node:

suppose we wish to delete node ‘C’ from the list having nodes: ‘A’, ‘B’, ‘C’ and ‘D’. Then, we will do it as follows:

<img src="https://techvidvan.com/tutorials/wp-content/uploads/sites/2/2021/06/TechVidvan-Doubly-linked-list-normla-image09.jpg" alt="Double linked list" width="900" height="300">

```cpp
void DoubleLinkedList::delete_at(int n) {
    if (n == 1) {
        delete_front();
    } else if (n == length) {
        delete_end();
    } else {
        node* temp = get_at(n); // to be deleted
        node *pre = temp->pre;
        node *nxt = temp->next;
        pre->next = nxt;
        nxt->pre = pre;
        delete temp;
        length--;
    }
}
```

#### 3. Deletion at the end:
When the list has two or more nodes, we need to traverse the whole node and then delete the last node.


<img src="https://techvidvan.com/tutorials/wp-content/uploads/sites/2/2021/06/TechVidvan-Doubly-linked-list-normla-image08-1.jpg" alt="Double linked list" width="900" height="300">


$NOTE :$ here if we have tail pointer we don't neet to traverse the whole nodes.

```cpp
void delete_end() {
    if (!head) return;
    tail = tail->pre;
    delete tail->next;
    if (tail)
        tail->next = nullptr;
    length--;
    if (!length) {
        head = nullptr;
    }
}
```



## Step Four (Stack)

### What is a Stack?

A stack is a linear data structure. It works on LIFO(Last in first out) or FILO(First in last out) approach. A stack contains a pointer named ‘top’. This pointer points to the top of the stack.

In stack, we can perform insertion and deletion operations at only one end i.e. at the top of the stack.


![stack drawio2](https://github.com/Ahmed-Elshitehi/Data-Structures-Studying/assets/122414149/df1591b8-aa1b-4a1e-ba82-28a6b1ffae25)

We can implement stack using array or using linked list 

### Array implementation of Stack 

```cpp
Stack {
private:
    static const int MAX_SIZE = 100; // Maximum size of the stack
    int stackArray[MAX_SIZE];
    int top = -1; // Index of the top element

public:
    Stack(); // Constructor
    void push(int element); // Pushes an element onto the stack
    int pop(); // Pops the top element from the stack
    bool isEmpty(); // Checks if the stack is empty
};
```
#### 1 - push operation

To insert an element into the stack, we increment the top index and assign the element to the corresponding position in the stackArray.

```cpp
void Stack::push(int element) {
    if (top == MAX_SIZE - 1) {
        // Stack is full
        cout << "Stack Overflow!" << endl;
        return;
    }
    stackArray[++top] = element;
}
```
#### 2- pop operation

To remove the top element from the stack, we decrement the top index.

```cpp
void Stack::pop() {
    if (top == -1) {
        // Stack is empty
        cout << "Stack Underflow!" << endl;
    }
}
```

### Linked List implementation of Stack 

The linked list allocates memory dynamically. Thus, the stack will also have dynamic memory allocation.
Since there is dynamic memory allocation, heap use comes into the picture.
In the case of the linked list implementation, the stack will be considered full if the heap does not have enough space to create a new node.
In a linked list, the last node points to NULL. if the stack is implemented using a linked list, its topmost node will also point to NULL.

<img src="https://techvidvan.com/tutorials/wp-content/uploads/sites/2/2021/06/Stack-normal-images04.jpg" alt="Stack">

In the stack Implementation, a stack contains a *head* pointer. where pushing and popping items happen at the head of the list. The first node has a null in the link field and second node-link has the first node address in the link field and so on and the last node address is in the “top” pointer.

Push Operation:
- Initialise a node
- Update the value of that node by data i.e. node->data = data
- Now link this node to the top of the linked list
- And update top pointer to the current node

Pop Operation:
- First Check whether there is any node present in the linked list or not, if not then return
- Otherwise make pointer let say temp to the top node and move forward the top node by 1 step
- Now free this temp node

Peek Operation:
- Check if there is any node present or not, if not then return.
- Otherwise return the value of top node of the linked list



Problemset :

| Problem  | Level | Solved | My code |
| ------------- | ------------- | ------------- | ------------- |
| [Min Stack](https://leetcode.com/problems/min-stack/description/)  | ${\color{yellow}Medium}$  |  ✅| |


## Step Five (Queue)


## Step Six (Binary Tree)

$Problemset$ :

| Problem  | Level | Solved | video |
| ------------- | ------------- | ------------- | ------------- |
| [Invert Binary Tree](https://leetcode.com/problems/invert-binary-tree/)  | ${\color{green}Easy}$  |  ✅| |
| [Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/description/)  | ${\color{green}Easy}$  |  ✅| |
| [Diameter of Binary Tree](https://leetcode.com/problems/diameter-of-binary-tree/)  | ${\color{green}Easy}$  |  ✅| |
| [Balanced Binary Tree](https://leetcode.com/problems/balanced-binary-tree/description/)  | ${\color{green}Easy}$  |  ✅| |
| [Same Tree ](https://leetcode.com/problems/same-tree/)  | ${\color{green}Easy}$  |  ✅| |
| [Subtree of Another Tree](https://leetcode.com/problems/subtree-of-another-tree/description/)  | ${\color{green}Easy}$  |  ✅| |
| [Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/description/)  | ${\color{yellow}Medium}$  |  ✅| |
| [Binary Tree Right Side View](https://leetcode.com/problems/binary-tree-right-side-view/description/)  | ${\color{yellow}Medium}$  |  ✅| |
| [Count Good Nodes in Binary Tree](https://leetcode.com/problems/count-good-nodes-in-binary-tree/description/)  | ${\color{yellow}Medium}$  |  ✅| |
| [Binary Tree Maximum Path Sum](https://leetcode.com/problems/binary-tree-maximum-path-sum/description/)  | ${\color{RED}Hard}$  |  ✅| |

## Step Seven (Binary Search Tree (BST))
