# Environmental-Constraint-Extraction-Tool

## Installation

You need to install go-task.  
go-task[https://taskfile.dev/installation/]

```
task build
```

## Usage

example

```
task run -- 'G((x1 -> F(y)) & (x2 -> !y))' 'y'
```

The first parameter is the LTL formula, and the second and subsequent parameters are response events."
