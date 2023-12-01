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
## - [**Step Two (Single Linked list)**](#Step-Two-Single-Linked-list)⏳
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

- For data: we can store our data in an array but wait wa said that the array is limited so I will use a dynamic array
> - How to do that? I will use pointers,  int* which will point to an array and when I need another array I will make the pointer point to it and store data in the new array, and then ${\color{red}Delete}$ the old array.

I think Now you have a good background about vector and how our implementation will be So after you finish take a look at [my code](/vector) I think It would be helpful.

## Step Two (Single Linked list)
First of all we need to remember some things about array and vector
> - Array is static. You can’t delete/insert/expand
> - Vector was our way to get a dynamic array
but if we ant to add a new element in the vector and ther is no free place we will take a new array and copy all the data = O(N).<br>
So what if I want to just add the new element and I don't want to care about the size of the array? now we can talk about linked list.

| Problem  | Level | Solved | My code |
| ------------- | ------------- | ------------- | ------------- |
| [Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)  | ${\color{green}Easy}$  |  ✅| |
| [Palindrome Linked List ](https://leetcode.com/problems/palindrome-linked-list/)  | ${\color{green}Easy}$  |  ✅| |
| [Merge Two Sorted Lists ](https://leetcode.com/problems/merge-two-sorted-lists/)  | ${\color{green}Easy}$  |  ✅| |
| [Linked List Cycle ](https://leetcode.com/problems/linked-list-cycle/)  | ${\color{green}Easy}$  |  ✅| |
| [Remove Nth Node From End of List ](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)  | ${\color{yellow}Medium}$  |  ✅| |
| [Reorder List  ](https://leetcode.com/problems/reorder-list/)  | ${\color{yellow}Medium}$  |  ✅| |
