<!DOCTYPE html>
<html>
<body>

  <h1>Basal Metabolic Rate (BMR) Calculator</h1>
  <p>This project is a C++ implementation of a BMR Calculator, designed to estimate the amount of energy an individual expends at rest based on the Mifflin-St Jeor Equation. It was developed as part of the Programming Technique 1 course.</p>

  <hr>

  <h2>Logic & Programming Techniques</h2>
  <p>The program follows a structured logic flow to ensure accurate calculations and a user-friendly experience:</p>
  
  <ul>
    <li>
      <strong>Input Processing:</strong> 
      The system reads user data including Age, Gender, Height, and Weight to perform calculations.
    </li>
    <li>
      <strong>Selection Logic (Branching):</strong> 
      Implements <code>if...else</code> structures to apply gender-specific formulas. For example, the calculation adds 5 for males and subtracts 161 for females.
    </li>
    <li>
      <strong>Repetition (Control Flow):</strong> 
      Uses a <code>do...while</code> loop to allow users to perform multiple calculations without restarting the program.
    </li>
    <li>
      <strong>User-Defined Functions:</strong> 
      The code is modularized, utilizing a specific function (<code>calcBMR</code>) to separate the calculation logic from the main input/output flow.
    </li>
  </ul>

  

  <h2>Mathematical Model</h2>
  <p>The core algorithm is based on the following equations:</p>
  <ul>
    <li><strong>Male:</strong> 10 &times; Weight (kg) + 6.25 &times; Height (cm) - 5 &times; Age + 5</li>
    <li><strong>Female:</strong> 10 &times; Weight (kg) + 6.25 &times; Height (cm) - 5 &times; Age - 161</li>
  </ul>

  <h2>Project Requirements</h2>
  <p>As per the assignment guidelines, this solution demonstrates:</p>
  <table border="1" cellpadding="5">
    <tr>
      <th>Requirement</th>
      <th>Implementation</th>
    </tr>
    <tr>
      <td>Branching</td>
      <td>Gender-based calculation selection</td>
    </tr>
    <tr>
      <td>Looping</td>
      <td>"Calculate again" functionality</td>
