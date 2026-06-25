<h1 align="center">🤖 Slack Bot</h1><p align="center">
  A simple command-line bot written in pure C.
</p><p align="center">
  Built as a beginner-friendly project to learn C programming, file handling, command parsing, and software development fundamentals.
</p><hr><h2>✨ Features</h2><h3>👋 Greeting Command</h3>Responds to:

<pre>
!hello
</pre>Example:

<pre>
> !hello
Hello!
</pre><h3>🧮 Calculator</h3>Performs basic arithmetic operations.

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
</pre><h3>📝 Message Logger</h3>Automatically logs all commands entered by the user.

Example log file:

<pre>
!hello
!calc 5 + 7
!exit
</pre>Stored in:

<pre>
log.txt
</pre><hr><h2>🏗️ Architecture</h2><pre>
User
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
</pre><hr><h2>⚙️ Building</h2><h3>Requirements</h3><ul>
  <li>GCC Compiler</li>
  <li>Linux, macOS, Windows (MinGW), or GitHub Codespaces</li>
</ul><h3>Compile</h3><pre>
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
<td>Print a greeting message.</td>
</tr>
<tr>
<td><code>!calc a op b</code></td>
<td>Perform arithmetic calculations.</td>
</tr>
<tr>
<td><code>!exit</code></td>
<td>Exit the application.</td>
</tr>
</table><hr><h2>🎯 Learning Objectives</h2><ul>
  <li>C Programming Fundamentals</li>
  <li>Loops and Conditionals</li>
  <li>String Processing</li>
  <li>File Input/Output</li>
  <li>User Input Handling</li>
  <li>Basic Software Architecture</li>
  <li>Git and GitHub Workflow</li>
</ul><hr><h2>🚀 Future Improvements</h2><ul>
  <li>Add timestamps to logs</li>
  <li>Support floating-point calculations</li>
  <li>Add more commands</li>
  <li>Create modular source files</li>
  <li>Integrate with Slack API</li>
  <li>Add configuration files</li>
</ul><hr><h2>🤝 Contributing</h2>Contributions, suggestions, and bug reports are welcome.

<ol>
  <li>Fork the repository</li>
  <li>Create a feature branch</li>
  <li>Commit your changes</li>
  <li>Open a pull request</li>
</ol><hr><h2>📜 License</h2>This project is licensed under the <strong>GNU General Public License v3.0 (GPL-3.0)</strong>.

You are free to use, study, modify, and distribute this software under the terms of the GPL-3.0 license.

Any distributed derivative work must also be licensed under GPL-3.0 and provide access to its source code.

<hr><p align="center">
  <strong>Written in C. Built to learn. Open Source.</strong>
</p>
