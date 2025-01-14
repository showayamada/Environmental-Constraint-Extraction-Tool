# リアクティブシステム仕様における環境制約の抽出ツール

## Installation

You need to install go-task.  
go-task[https://taskfile.dev/installation/]

```
task build
```

## Usage

例

```
task run -- 'G((x1 -> F(y)) & (x2 -> !y))' 'y'
```

The first parameter is the LTL formula, and the second and subsequent parameters are response events."

補オートマトン構成のアルゴリズムの変更

```
task change -- algorithmName
```
アルゴリズムのリスト
- ramsay
- kurshan 
- modifiedsafra
- ms
- piterman
- progressmeasure
- rank
- safra
- sdbw
- slice
- waa
- wapa
