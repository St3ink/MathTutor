/*
Title: Chapter 3 Exercise 17 - Math Tutor
File Name: MathTutor.cpp
Programmer: Kason Steiner
Date: 09/2024
Write a program that can be used as a math tutor for a young student.
The program should then pause while the student works on the problem. When the student is ready to check the answer, he or she can press a key and the program will display the correct solution.
Once you have coded this and placed in your main branch in GitHub, create a second branch that revises your code so that before the answer is displayed allow the user to enter an answer . Then display the correct answer and tell the student either "You are correct" or "Your answer is not correct."
*/  
#include <iostream>
#include <random>

using namespace std;
int main() { 

  
  
  cout << "Math Tutoring Program\n";
  cout << "----------------------\n";
  cout << "Press enter to display problem\n";
  cin.get();
  
  random_device MyEngine;
  uniform_int_distribution<int> randomInt(100, 999);
  
  int num1 = randomInt(MyEngine);
  int num2 = randomInt(MyEngine);
  int answer = num1 + num2;
  int userAnswer;
  
  cout << num1 << " + " << num2 << " = \n";
  cout << "Enter your Answer: \n";
  cin >> userAnswer;
  cout << "The correct answer is: " << answer << endl; 

  if (userAnswer == answer)
    cout << "You are correct.\n";
  else
    cout << "Your answer is not correct.\n";

  return 0;
}