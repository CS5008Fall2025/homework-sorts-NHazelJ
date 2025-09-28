# Sort Analysis Data

## Results Table
Make sure to go out to at least 100,000 (more are welcome), and you have 10 different values (more welcome). You are welcome to go farther, but given 100,000 can take about 20 seconds using a selection sort on a fast desktop computer, and 200,000 took 77 seconds, you start having to wait much longer the more 0s you add. However, to build a clearer line, you will want more data points, and you will find merge and quick are able to handle higher numbers easier (but at a cost you will explore below). 

You are free to write a script to run the program and build your table (then copy that table built into the markdown). If you do that, please include the script into the repo.  Note: merge and quick sorts are going to be explored in the team activity for Module 06. You can start on it now, but welcome to wait.

 

### Table [^note]
| N      | Bubble   | Selection | Insertion | Merge (module 6) | Quick (module 6) |  
| 10     | 0.000001 | 0.000001 | 0.000000 | :--: | :--: |  
| 50     | 0.000011 | 0.000005 | 0.000002  | :--: | :--: |  
| 100    | 0.000026 | 0.000016 | 0.000008 | :--: | :--: |  
| 250    | 0.000145 | 0.000081 | 0.000046 | :--: | :--: |  
| 500    | 0.000556 | 0.000304 | 0.000213 | :--: | :--: |  
| 1000   | 0.002155 | 0.001209 | 0.000665 | :--: | :--: |  
| 2000   | 0.008741 | 0.004563 | 0.002528 | :--: | :--: |  
| 5000   | 0.063351 | 0.028247 | 0.016018 | :--: | :--: |  
| 10000  | 0.283265 | 0.112168 | 0.063926 | :--: | :--: |  
| 20000  | 1.259489 | 0.452660 | 0.304080 | :--: | :--: |  
| 50000  | 8.588222 | 3.006050 | 1.613781 | :--: | :--: |  
| 100000 | 34.361687 | 11.871099 | 7.134020 | :--: | :--: |  


## BigO Analysis  / Questions

### 1. Build a line chart
Build a line chart using your favorite program. Your X axis will be N increasing, and your Y access will be the numbers for each type of sort. This will create something similar to the graph in the instructions, though it won't be as smooth. Due to speed differences, you may need to break up the $O(\log n)$ and $O(n^2)$ into different charts.

![Sorting Algorithms Bubble Selection and Insertion](SortingAlgorithms.png)


### 2. Analysis
Looking at the graph and the table, what can you say about the various sorts? Which are the fastest? Which are the slowest? Which are the most consistent? Which are the least consistent? Use this space to reflect in your own words your observations.  
From both the table and the charts, the gap between the quadratic sorts widens quickly as N grows. Insertion sort is the fastest of the three in my runs, which matches its lower constant factors and the fact it shifts rather than swaps a lot. Bubble sort is the slowest overall and scales the worst, as expected for a comparison heavy O(n²) method with many swaps. Selection sort lands in the middle: it does a fixed pattern of scans and one swap per outer pass, so it’s usually slower than insertion for large N but much better than bubble. In terms of consistency, selection sort is the most stable across input shapes (its work is almost the same whether the data is sorted or not). Insertion and bubble are the least consistent, they can be much faster on nearly sorted arrays (insertion is O(n) and bubble can exit early), but degrade to full O(n²) on harder inputs. Overall, the plots show insertion as the practical winner among these three for moderate sizes, with selection steady but slower, and bubble clearly falling behind as N increases.


### 3. Big O
Build another table that presents the best, worst, and average case for Bubble, Selection, Insertion, Merge, and Quick. You are free to use resources for this, but please reference them if you do. 


#### 3.2 Worst Case
Provide example of arrays that generate _worst_ case for Bubble, Selection, Insertion, Merge Sorts


#### 3.3 Best Case
Provide example of arrays that generate _best_ case for Bubble, Selection, Insertion, Merge Sorts 


#### 3.4 Memory Considerations
Order the various sorts based on which take up the most memory when sorting to the least memory. You may have to research this, and include the mathematical notation. 

### 4. Growth of Functions
Give the following values, place them correctly into *six* categories. Use the bullets, and feel free to cut and paste the full LatexMath we used to generate them.  

$n^2$  
$n!$  
$n\log_2n$  
$5n^2+5n$  
$10000$  
$3n$    
$100$  
$2^n$  
$100n$  
$2^{(n-1)}$
#### Categories
* 
*
*
*
*
*

### 5. Growth of Function Language

Pair the following terms with the correct function in the table. 
* Constant, Logarithmic, Linear, Quadratic, Cubic, Exponential, Factorial

| Big $O$     |  Name  |
| ------      | ------ |
| $O(n^3)$    |  your answer here |
| $O(1)$      |   |
| $O(n)$      |   |
| $O(\log_2n)$ |   |
| $O(n^2)$    |   |
| $O(n!)$     |   |
| $O(2^n)$    |   |



### 6. Stable vs Unstable
Look up stability as it refers to sorting. In your own words, describe one sort that is stable and one sort that isn't stable  


### 6.2 When stability is needed?
Explain in your own words a case in which you will want a stable algorithm over an unstable. Include an example. 

### 7. Gold Thief

You are planning a heist to steal a rare coin that weighs 1.0001 ounces. The problem is that the rare coin was mixed with a bunch of counter fit coins. You know the counter fit coins only weight 1.0000 ounce each. There are in total 250 coins.  You have a simple balance scale where the coins can be weighed against each other. Hint: don't think about all the coins at once, but how you can break it up into even(ish) piles. 

#### 7.1 Algorithm
Describe an algorithm that will help you find the coin. We encourage you to use pseudo-code, but not required.

#### 7.2 Time Complexity
What is the average time complexity of your algorithm? 


## Technical Interview Practice Questions

For both these questions, are you are free to use what you did as the last section on the team activities/answered as a group, or you can use a different question.

1. Select one technical interview question (this module or previous) from the [technical interview list](https://github.com/CS5008-khoury/Resources/blob/main/TechInterviewQuestions.md) below and answer it in a few sentences. You can use any resource you like to answer the question.

2. Select one coding question (this module or previous) from the [coding practice repository](https://github.com/CS5008-khoury/Resources/blob/main/LeetCodePractice.md) and include a c file with that code with your submission. Make sure to add comments on what you learned, and if you compared your solution with others. 
 

## Deeper Thinking
Sorting algorithms are still being studied today. They often include a statistical analysis of data before sorting. This next question will require some research, as it isn't included in class content. When you call `sort()` or `sorted()` in Python 3.6+, what sort is it using? 

#### Visualize
Find a graphic / visualization (can be a youtube video) that demonstrates the sort in action. 

#### Big O
Give the worst and best case time-complexity, and examples that would generate them. 

<hr>

## References
Add your references here. A good reference includes an inline citation, such as [1] , and then down in your references section, you include the full details of the reference. Use [ACM Reference format].

1. Reference info, date, etc.
2. ...





## Footnotes:
[^note]: You will want at least 10 different N values, probably more to see the curve for Merge and Quick. If bubble, selection, and insertion start to take more than a  minute, you can say $> 60s$ or - . For example 
    | N | Bubble | Selection | Insertion | Merge | Quick |
    | :-- | :--: | :--: | :--: | :--: | :--: |
    | 10,000|0.197758|0.070548|0.000070|0.000513|0.000230|
    |100,000|-|-|-|0.131061|0.018602|

<!-- links moved to bottom for easier reading in plain text (btw, this a comment that doesn't show in the webpage generated-->
[image markdown]: https://docs.github.com/en/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax#images

[ACM Reference Format]: https://www.acm.org/publications/authors/reference-formatting
[IEEE]: https://www.ieee.org/content/dam/ieee-org/ieee/web/org/conferences/style_references_manual.pdf