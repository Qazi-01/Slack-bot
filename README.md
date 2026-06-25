<h1 align="center">🤖 C Slack Bot</h1><p align="center">
  A lightweight Slack bot written in pure C.
</p><p align="center">
  Learn systems programming, APIs, networking, file handling, and software architecture through a real project.
</p><hr><h2>🚀 Features</h2><h3>👋 Command Handler</h3>Responds to simple commands.

<pre>
!hello
!help
</pre>Example:

<pre>
> !hello
Hello!
</pre><h3>📝 Message Logger</h3>Records commands and activity to a log file.

<pre>
2026-06-25 12:34 !hello
2026-06-25 12:35 !help
</pre>Stored in:

<pre>
logs/messages.txt
</pre><h3>🧮 Calculator</h3>Performs basic arithmetic operations.

<pre>
!calc 25 * 4
</pre>Output:

<pre>
100
</pre><hr><h2>🏗️ Architecture</h2><pre>
                Slack
                  │
                  ▼
          ┌─────────────────┐
          │     C Bot       │
          └─────────────────┘
                  │
      ┌───────────┼───────────┐
      ▼           ▼           ▼
 Commands      Logger     Calculator
</pre><hr><h2>📂 Project Structure</h2><pre>
c-slack-bot/
├── main.c
├── commands.c
├── commands.h
├── logger.c
├── logger.h
├── calculator.c
├── calculator.h
├── Makefile
├── LICENSE
├── README.md
├── .gitignore
└── logs/
</pre><hr><h2>⚙️ Building</h2><h3>Compile</h3><pre>
gcc main.c commands.c logger.c calculator.c -o bot
</pre><h3>Run</h3><pre>
./bot
</pre><hr><h2>🎯 Roadmap</h2><h3>Phase 1 — Core Bot</h3><ul>
  <li>Project structure</li>
  <li>Command system</li>
  <li>Logger</li>
  <li>Calculator</li>
  <li>Error handling</li>
</ul><h3>Phase 2 — Improvements</h3><ul>
  <li>Better command parser</li>
  <li>Modular architecture</li>
  <li>Unit tests</li>
  <li>Configuration support</li>
</ul><h3>Phase 3 — Slack Integration</h3><ul>
  <li>Slack API integration</li>
  <li>HTTPS requests</li>
  <li>JSON parsing</li>
  <li>Authentication</li>
  <li>Real-time events</li>
</ul><h3>Phase 4 — Advanced Features</h3><ul>
  <li>Reminders</li>
  <li>Polls</li>
  <li>Usage statistics</li>
  <li>Plugin system</li>
  <li>Persistent storage</li>
</ul><hr><h2>📚 Learning Objectives</h2><ul>
  <li>C Programming</li>
  <li>Memory Management</li>
  <li>File I/O</li>
  <li>Networking</li>
  <li>APIs</li>
  <li>JSON Processing</li>
  <li>Software Design</li>
  <li>Open-Source Collaboration</li>
</ul><hr><h2>🤝 Contributing</h2>Contributions, bug reports, and feature requests are welcome.

<ol>
  <li>Fork the repository</li>
  <li>Create a feature branch</li>
  <li>Commit your changes</li>
  <li>Open a pull request</li>
</ol><hr><h2>📜 License</h2>This project is licensed under the <strong>GNU General Public License v3.0 (GPL-3.0)</strong>.

You may use, modify, and distribute this software under the terms of the GPL-3.0 license.

Any distributed derivative work must also be licensed under GPL-3.0 and provide access to its source code.

<hr><p align="center">
  <strong>Built to learn. Designed to grow.</strong>
</p>
