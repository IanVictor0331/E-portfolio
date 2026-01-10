<!DOCTYPE html>
<html>
<head>
</head>
<body>

  <h1>Competition Scoring System</h1>
  <p>A C++ application designed to process participant scores, calculate totals, and determine winners for both individual and group categories based on external data files.</p>

  <hr>

  <h2>Programming Techniques</h2>
  <p>This project implements the following core programming concepts:</p>
  
  <ul>
    <li>
      <strong>File Stream Processing (I/O):</strong> 
      Utilizes <code>&lt;fstream&gt;</code> to establish a robust link between the program and external files (<code>input.txt</code> and <code>output.txt</code>).
    </li>
    <li>
      <strong>Data Parsing and Tokenization:</strong> 
      The program reads structured rows of data, extracting specific integers for Team IDs, Participant IDs, and a series of five distinct scores (E1–E5).
    </li>
    <li>
      <strong>Conditional Logic and Comparison Algorithms:</strong> 
      Implements nested logic to track and update the "Highest Score" in real-time as the file is parsed to identify winners.
    </li>
    <li>
      <strong>Formatted Output:</strong> 
      Uses <code>&lt;iomanip&gt;</code> and <code>setw</code> to generate a clean, tabular report in the output file, ensuring data alignment for readability.
    </li>
    <li>
      <strong>Modular Function Design:</strong> 
      The code is broken down into specific tasks (calculating totals, finding individual winners, and aggregating team performance) to follow clean coding principles.
    </li>
  </ul>

  <h2>Data Structure</h2>
  <p>The program processes data organized as follows:</p>
  <table border="1">
    <tr>
      <th>Field</th>
      <th>Description</th>
    </tr>
    <tr>
      <td>Team ID</td>
      <td>Numerical identifier for the group.</td>
    </tr>
    <tr>
      <td>Participant ID</td>
      <td>Unique identifier for the individual.</td>
    </tr>
    <tr>
      <td>Scores (E1-E5)</td>
      <td>Five separate event scores used for the total calculation.</td>
    </tr>
  </table>

  <h2>How to Use</h2>
  <ol>
    <li>Place <code>input.txt</code> in the root directory.</li>
    <li>Execute <code>ASSIGNMENT3_FINAL.exe</code>.</li>
    <li>View the generated results in <code>output.txt</code>.</li>
  </ol>

</body>
</html>
