# Data-Structures-Studying

I will do my best to make this a good reference for Anybody to study Data Structures I will split it into several steps. <br>
The first thing in every step I will recommend for you resources to study from But please keep reading I think you will have a very good background before starting. <br>
And there is the total number of problems while I'm studying this core ( 0 )  I'm sure you can do better than me.<br>
- Step zero
- [Step One (vector)](https://github.com/Ahmed-Elshitehi/Data-Structures-Studying/blob/main/README.md#step-one-vector)
## Step zero 
### First of all I have two questions **what is Data Structure ?** And **Why do I want to study Data Structure?**<br>
#### ***What is Data Structure ?*** 
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
### recommended resources to study I can't cover everything :(
> - Arabic Competitive Programming (DR.Mustafa Saad) **(Arabic)**
>  > - [Vector - 1 Intro](https://www.youtube.com/results?search_query=vector+data+structure)
>  > - [Vector - 2 Appending operation](https://www.youtube.com/watch?v=sSXmes20AOc)
>  > - [Vector - 3 Capacity Trick](https://www.youtube.com/watch?v=MM2-h-naowE)
>  > - [Vector - 4 Insertion (Arabic)](https://www.youtube.com/watch?v=wmzmEuOtKRI)<br>


We talked about the most simple data structure The array data structure, But it's easy to see that the array is so limited by its initial size.<br>
>When the size is determined, it is fixed.
>So we aren't able to insert or remove elements that affect the size
So we need something more flexible. <br>
let's create our own dynamic array and we will call it vector.
> similar to STL Vector class in c++.
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

- For data : we can store our data in array but wait wa said that array is limited so I will use dynamic array
> - How to do that? I will use pointers,  int* which will point to an array and when I need another array I will make the poiner point to it.

I think Now you have a good back ground about vector and how our implementation will be So after you finish take a look at [my code](https://github.com/Ahmed-Elshitehi/Data-Structures-Studying/tree/main/vector) I think It would be helpful.
