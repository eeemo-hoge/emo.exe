# emo.exe

## 概要
このプログラムは私の最初の、しっかりパッケージ管理をディレクトリごとに分けて作成したプログラムです。
内容物は、私の既存のlifespan, pomo, studyTimeTrackerを組み合わせたものです。
以下リンク{
link of pomo : https://github.com/eeemo-hoge/pomo
link of studyTimeTracker : https://github.com/eeemo-hoge/studyTimeTracker
link of lifespan : https://github.com/eeemo-hoge/simple_lifespan_scaling
}

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



