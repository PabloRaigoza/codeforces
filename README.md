# codeforces

The go.cpp program will open the file in vs-code automatically.
This shortcut will change the current working directory to  current file open,
as well as revert four dirrectories to base with "alt+n","alt+b" respectively.
```
{
    "key": "alt+n",
    "command": "workbench.action.terminal.sendSequence",
    "args": {"text": "cd '${fileDirname}'\u000D"}
},
{
    "key": "alt+b",
    "command": "workbench.action.terminal.sendSequence",
    "args": {"text": "cd '../../../../'\u000D"}
},
```
