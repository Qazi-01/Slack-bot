<h1 align="center">🤖 Simple C CLI Bot</h1><p align="center">
  A lightweight command-line bot written in pure C.
</p><p align="center">
  Built to learn programming fundamentals through a practical project involving command processing, calculations, and file logging.
</p><hr><h2>✨ Features</h2><h3>👋 Greeting Command</h3>Responds to user greetings.

<pre>
!hello
</pre>Example:

<pre>
> !hello
Hello!
</pre><h3>🧮 Calculator</h3>Performs basic operations, nothing too powerful.

Examples:

<pre>
!calc 5 + 7
!calc 10 - 3
!calc 9 * 8
!calc 20 / 4
</pre>Output:

<pre>
12
7
72
5
</pre><h3>📝 Command Logger</h3>Every command enteredby the user is logged to a text file.

Example:

<pre>
!hello
!calc 5 + 7
!exit
</pre>Stored in:

<pre>
log.txt
</pre><hr><h2>🏗️ How It Works</h2><pre>
User
 │
 ▼
CLI Terminal
 │
 ▼
Simple C Bot
 ├── Command Handler
 ├── Calculator
 └── Logger
</pre><hr><h2>📂 Project Structure</h2><pre>
slack-bot/
├── main.c
├── README.md
├── LICENSE
├── .gitignore
└── log.txt
</pre><hr><h2>⚙️ Building</h2><h3>Compile</h3><pre>
gcc main.c -o bot
</pre><h3>Run</h3><pre>
./bot
</pre><hr><h2>📖 Available Commands</h2><table>
<tr>
<th>Command</th>
<th>Description</th>
</tr>
<tr>
<td><code>!hello</code></td>
<td>Greetings!</td>
</tr>
<tr>
<td><code>!calc a op b</code></td>
<td>Performs arithmetic calculations.</td>
</tr>
<tr>
<td><code>!exit</code></td>
<td>Closes the application.</td>
</tr>
</table><hr><h2>🎯 Learning Objectives</h2><ul>
  <li>C Programming Fundamentals</li>
  <li>User Input Handling</li>
  <li>String Processing</li>
  <li>Conditional Logic</li>
  <li>Loops</li>
  <li>File Input/Output</li>
  <li>Command Parsing</li>
</ul><hr><h2>🚀 Future Improvements</h2><ul>
  <li>Add timestamps to logs</li>
  <li>Add command history</li>
  <li>Support floating-point calculations</li>
  <li>Add more commands</li>
  <li>Refactor into multiple source files</li>
</ul><hr><h2>📜 License</h2>This project is licensed under the <strong>GNU General Public License v3.0 (GPL-3.0)</strong>.

You are free to use, modify, and distribute this software under the terms of the GPL-3.0 license.

<hr><p align="center">
  <strong>Written in C • Open Source • Beginner Project</strong>
</p>
