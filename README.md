# Data-Structures-Studying

I will do my best to make this a good reference for Anybody to study Data Structures I will split it into several steps. <br>
The first thing in every step I will recommend for you a resources to study from. and I will try to write a good explanation and solve with you some problems. <br>
### recommended resources to study
> - [mycodeschool](https://www.youtube.com/playlist?list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
> - [ Arabic Competitive Programming](https://www.youtube.com/playlist?list=PLPt2dINI2MIZX2EtY81WI-lDkvhKziLKM)**(Arabic)** DR.Mustafa Saad
> - [Mega Code](https://www.youtube.com/playlist?list=PLsGJzJ8SQXTcsXRVviurGei0lf_t_I4D8)**(Arabic)**
> - 
## - [**Step zero**](#Step-zero)✅
## - [**Step One (vector)**](#Step-One-vector)✅
## - [**Step Two (Single Linked list)**](#Step-Two-Single-Linked-list)✅
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

![image](https://github.com/Ahmed-Elshitehi/Data-Structures-Studying/assets/122414149/3a8a9f75-b4fa-4b8c-ba1b-c9c0f93be337)

So in little words, we can say that a linked list is just a connection of some nodes, and another important component *Head* pointer points to the first node, and the *Tail* points to the last Node.
#### Traversal in a Singly Linked List
  
  Traversal means visiting each node of the linked list. and we need to traverse the linked list to do operations like this. <br>
  - Insertion
  - Deletion
  - Display
  - Search 
     
  > - it's too easy to understand from this simple code.
  
  ![image](https://github.com/Ahmed-Elshitehi/Data-Structures-Studying/assets/122414149/8ff3e1ae-f3f5-4b31-a773-47e85901f7b8)

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

and here is a list of some problems I solved.

| Problem  | Level | Solved | My code |
| ------------- | ------------- | ------------- | ------------- |
| [Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)  | ${\color{green}Easy}$  |  ✅| |
| [Palindrome Linked List ](https://leetcode.com/problems/palindrome-linked-list/)  | ${\color{green}Easy}$  |  ✅| |
| [Merge Two Sorted Lists ](https://leetcode.com/problems/merge-two-sorted-lists/)  | ${\color{green}Easy}$  |  ✅| |
| [Linked List Cycle ](https://leetcode.com/problems/linked-list-cycle/)  | ${\color{green}Easy}$  |  ✅| |
| [Remove Nth Node From End of List ](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)  | ${\color{yellow}Medium}$  |  ✅| |
| [Reorder List  ](https://leetcode.com/problems/reorder-list/)  | ${\color{yellow}Medium}$  |  ✅| |
| [Add Two Numbers ](https://leetcode.com/problems/add-two-numbers/)  | ${\color{yellow}Medium}$  |  ✅| |
| [Add Two Numbers II](https://leetcode.com/problems/add-two-numbers-ii/)  | ${\color{yellow}Medium}$  |  ✅| |
