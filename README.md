<h1>Aim of the experiment</h1>
<p>To study and implement C++ arrays and strings.</p>
<hr>
<h1>Software required</h1>
<p>VS code</p>
<hr>
<h1>Theory</h1>
<p>In C++, an array is a collection of elements of the same data type stored in contiguous memory locations, accessed using indices starting from 0. Arrays are useful for storing multiple values under a single variable name. C++ also handles strings as character arrays, where each character is stored in consecutive memory locations. Arrays provide a way to manage and manipulate multiple data points efficiently in C++.</p>
<hr>
<h1>Algorithms</h1>
<h2>Sum of Elements of Array</h2>
<ol>
  <li>Start.</li>
  <li>Declare variables
  <ul>
    <li>Create an array 'x[5]' and integers 'sum = 0' and 'avg'.
    </li>
  </ul>
    <li>Input elements
    <ul>
      <li>Loop through the array and input 5 elements.
      </li>
    </ul>
    </li>
  <li>Calculate sum
  <ul>
    <li>For 'i' from 0 to 4, add 'x[i]' to sum.</li>
  </ul>
  </li>
  <li>Display the sum.</li>
  <li>Calculate average
  <ul>
    <li>Divide sum by 5 and store result in 'avg'.</li>
  </ul>
  </li>
  <li>Display the average.</li>
  <li>End.</li>
</ol>
<h2>Find the maximum and minimum element of an array.</h2>
<ol>
  <li>Start.</li>
  <li>Initialise variables 'i','j','max','min' and arr = {2,6,5,9,7}.</li>
  <li>Set both max and mean to first element of array.</li>
  <li>Run a loop from 0 to 5
  <ul>
    <li>Update max if the current element is greater or equal to initial value of max.</li>
    <li>Update min if the current element that is smaller than or equal to initial value of mean.</li>
    <li>Increment counter.</li>
  </ul>
  </li>
  <li>Display the value of max and min.</li>
  <li>End.</li>
</ol>
<h2>Palindrome Checker</h2>
<ol>
  <li>Start.</li>
  <li>Initialise strings 'str' and 'rev_str'.</li>
  <li>Prompt the user to enter a word and store it in 'str'.</li>
  <li>Initialise 'length' to length of the input string.</li>
  <li>Loop through the last to the first character of the string:
  <ul>
    <li>Append each character of 'str' from last to the first of 'rev_str'.</li>
    <li>Decrement counter.</li>
  </ul>
  </li>
  <li>Compare 'str' and 'rev_str'
  <ul>
    <li>If equal, display "It is a palindrome."</li>
    <li>Else, displayb "It is not a palindrome".</li>
  </ul>
  </li>
</ol>
<hr>
<h1>Conclusion</h1>
<p>In conclusion, arrays and strings in C++ are essential for managing collections of data. Arrays offer efficient, fixed-size storage, while strings handle text with built-in manipulation functions. Mastering these structures is key to effective programming, enabling developers to create efficient, reliable solutions across a wide range of applications.</p>
