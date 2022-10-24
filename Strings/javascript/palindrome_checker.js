/* 
Problem Statement :

Program to check whether a given string is a palindrome or not.
A string is said to be palindrome if the reverse of the string is the same as the string.

Case 1:
Enter the String: refer
Palindrome

Case 2:
Enter the String: Apple
Not a Palindrome
*/

// to read input from command line using node
const readline = require("readline");
const input = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

input.question("Enter the String: ", function (string) {
    let isPalindrome = true;
    const word = string;
    for (var i = 0; i < (word.length / 2) + 1; i++) {
        if (word[i] != word[word.length - (i + 1)]) {
            console.log("Not a Palindrome");
            isPalindrome = false;
            input.close();
            return;
        }
    }
    if (isPalindrome) {
        console.log("Palindrome");
    }
    input.close();
});