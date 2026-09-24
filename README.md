# emo.exe

## 作成動機
自分だけの対話型プロンプトが欲しかった。
それに私は頑張りすぎてしまうので、強制的にリマンドする必要があった。

## 概要
このプログラムは私の最初の、しっかりパッケージ管理をディレクトリごとに分けて作成したプログラムです。
内容物は、私の既存のlifespan, pomo, studyTimeTrackerを組み合わせたものです。
以_下リンク
link of pomo : https://github.com/eeemo-hoge/pomo
link of studyTimeTracker : https://github.com/eeemo-hoge/studyTimeTracker
link of lifespan : https://github.com/eeemo-hoge/simple_lifespan_scaling

##
<!-- Treeコマンドでディレクトリ構成を記載 -->
> tree "emo.exe"


## ユーザー側でできる設定


## コンパイルと実行方法
cd ~/c++/emo.exe/v1.1/src
srcに移動して"./main"を実行。 

## License
詳細は LISENCEを参照してください。

## pomodoroについて
"work time"これは作業時間のことを指します。
"short break time"これは小休憩のことを指します。
"long break time"これは長休憩のことを指します。
"sessions"これは、トータルでの、（休憩は小、長とも含まない。)を指します。
"Long inter val spacing" これは何回に一回小休憩を取るか、を指します。通常のポモドーロでは4セッションだと思いますが、このプログラムでは自由です。
"Reminder interval" これは、何分間に一回、動画再生と、メモ帳をポップアップ表示するか。
です。ソースコードはライセンスにもあるように改変自由なので、各自行ってください。

## 注意点
できるだけファイル、フォルダ構造は変更しないでください。
また、変更する場合は自己責任で、コードを変更してください。
例えば一定期間ごとに再生される動画ファイルのパスを買えたい場合は、apps/pomo/main.cppを書き換えてください。
メディアを変更するのと同時にソースファイルも書き換えてください。


# emo.exe

## Motivation
I wanted my very own interactive prompt.

## Overview
This programme is my first to be created with proper package management, organised by directory.
It combines my existing programmes: lifespan, pomo and studyTimeTracker.
Links below: {
link to pomo: https://github.com/eeemo-hoge/pomo
link to studyTimeTracker: https://github.com/eeemo-hoge/studyTimeTracker
link to lifespan: https://github.com/eeemo-hoge/simple_lifespan_scaling
}

##
<!-- Directory structure shown using the 'tree' command -->
> tree "emo.exe"


## User-configurable settings


## How to compile and run
cd ~/c++/emo.exe/v1.1/src
Navigate to the src directory and run ‘./main’. 

## Licence
Please refer to the LICENCE file for details.

## About the Pomodoro Technique
‘work time’ refers to the time spent working.
‘short break time’ refers to a short break.
‘long break time’ refers to a long break.
"Sessions" refers to the total number of sessions (excluding both short and long breaks).
"Long interval spacing" refers to how often a short break is taken. In a standard Pomodoro session, this is typically every 4 sessions, but in this programme, you are free to set it as you wish.
"Reminder interval" refers to how many minutes elapse before a video plays and a notepad pops up. As stated in the licence, the source code may be freely modified, so please do so as you see fit.

## Important Notes
Please avoid changing the file and folder structure as much as possible.
Furthermore, if you do make changes, please do so at your own risk.
For example, if you wish to change the path of the video file that plays at regular intervals, please edit apps/pomo/main.cpp.
Please ensure you update the source file at the same time as you change the media.






