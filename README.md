<h1 align="center">🤖 Simple C Bot</h1><p align="center">
  A beginner-friendly command-line bot written in pure C.
</p><p align="center">
  Built to learn the fundamentals of C programming through a small but complete project.
</p><hr><h2>✨ Features</h2><h3>👋 Greeting Command</h3>Responds to:

<pre>
!hello
</pre>Example:

<pre>
> !hello
Hello!
</pre>---

<h3>🧮 Calculator</h3>Performs basic arithmetic operations.

Examples:

<pre>
!calc 5 + 7
!calc 9 * 8
!calc 20 / 4
</pre>Output:

<pre>
12
72
5
</pre>---

<h3>📝 Message Logger</h3>Automatically logs all commands entered by the user.

Log file:

<pre>
log.txt
</pre>Example:

<pre>
!hello
!calc 5 + 7
!exit
</pre><hr><h2>🏗️ Project Structure</h2><pre>
simple-c-bot/
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
<td>Prints a greeting message.</td>
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
  <li>Variables and Data Types</li>
  <li>Loops</li>
  <li>Conditional Statements</li>
  <li>Functions</li>
  <li>String Handling</li>
  <li>File I/O</li>
  <li>User Input Processing</li>
</ul><hr><h2>🚀 Future Improvements</h2><ul>
  <li>Add more commands</li>
  <li>Support floating-point calculations</li>
  <li>Add timestamps to logs</li>
  <li>Connect to the Slack API</li>
  <li>Improve error handling</li>
</ul><hr><h2>🤝 Contributing</h2>Contributions, suggestions, and bug reports are welcome.

<ol>
  <li>Fork the repository</li>
  <li>Create a feature branch</li>
  <li>Commit your changes</li>
  <li>Open a pull request</li>
</ol><hr><h2>📜 License</h2>This project is licensed under the <strong>GNU General Public License v3.0 (GPL-3.0)</strong>.

Any distributed derivative work must also be released under GPL-3.0 and provide access to its source code.

<hr><p align="center">
  <strong>First project. Real code. Pure C.</strong>
</p>
