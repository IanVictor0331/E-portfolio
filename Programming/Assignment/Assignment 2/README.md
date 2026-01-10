<!DOCTYPE html>
<html>
<body>

  <h1>Basal Metabolic Rate (BMR) Calculator</h1>
  <p>This C++ program calculates a user's Basal Metabolic Rate (BMR) using the Mifflin-St Jeor Equation and provides daily calorie requirements based on various activity levels.</p>

  <hr>

  <h2>Programming Techniques Implemented</h2>
  <ul>
    <li>
      <strong>Modular Programming:</strong> 
      The code is organized into distinct functions: <code>main()</code> for flow control, <code>getInput()</code> for data collection, and <code>calcBMR()</code> for mathematical processing.
    </li>
    <li>
      <strong>Pass-by-Reference:</strong> 
      The <code>getInput</code> function uses reference parameters (<code>int &age</code>, <code>int &height</code>, etc.) to efficiently update multiple variables from the main scope.
    </li>
    <li>
      <strong>Input Validation:</strong> 
      Utilizes <code>do-while</code> loops to ensure user data (Age, Gender, Height, Weight) falls within logical and required ranges before proceeding.
    </li>
    <li>
      <strong>Data Normalization:</strong> 
      Includes <code>cctype</code> functions like <code>toupper()</code> and <code>islower()</code> to handle case-insensitive user input for gender and loop control.
    </li>
    <li>
      <strong>Formatted Console Output:</strong> 
      Uses the <code>&lt;iomanip&gt;</code> library with <code>setw()</code>, <code>left</code>, and <code>right</code> manipulators to create a clean, aligned table for calorie needs.
    </li>
    <li>
      <strong>Mathematical Operations:</strong> 
      Implements conditional logic to apply different coefficients for Male ('M') and Female ('F') formulas and utilizes <code>round()</code> for final calorie values.
    </li>
  </ul>

  <h2>Calculation Details</h2>
  <p>The program uses the following formulas based on gender:</p>
  <ul>
    <li><strong>Male:</strong> (10 &times; weight) + (6.25 &times; height) - (5 &times; age) + 5</li>
    <li><strong>Female:</strong> (10 &times; weight) + (6.25 &times; height) - (5 &times; age) - 161</li>
  </ul>

  <h2>Activity Level Multipliers</h2>
  <table border="1" cellpadding="5">
    <thead>
      <tr>
        <th>Activity Level</th>
        <th>BMR Multiplier</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td>Sedentary</td>
        <td>1.2</td>
      </tr>
      <tr>
        <td>Exercise 1-3 times/week</td>
        <td>1.375</td>
      </tr>
      <tr>
        <td>Exercise 4-5 times/week</td>
        <td>1.465</td>
      </tr>
      <tr>
        <td>Daily/Intense exercise</td>
        <td>1.55</td>
      </tr>
      <tr>
        <td>Physical job/Very intense</td>
        <td>1.725</td>
      </tr>
    </tbody>
  </table>

  <h2>Project Metadata</h2>
  <ul>
    <li><strong>Authors:</strong> Ian Victor & Jed Yong</li>
    <li><strong>Date:</strong> 27/12/2025</li>
    <li><strong>Language:</strong> C++</li>
  </ul>

</body>
</html>
