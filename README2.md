<div align="center">

# emo.exe

**A bilingual personal productivity hub for Pomodoro, study tracking, and lifespan reflection.**  
**ポモドーロ・学習記録・ライフスパン確認をひとつにまとめた、個人用の対話型ツールです。**

<p>
  <code>C++</code>
  <code>CLI</code>
  <code>Pomodoro</code>
  <code>Study Tracker</code>
  <code>Bilingual: JP / EN</code>
</p>

</div>

---

## Motivation / 作成動機

> **EN**: I wanted an interactive prompt that felt personal, practical, and a little strict when I start pushing myself too hard.  
> **JP**: 自分専用の対話型プロンプトが欲しくて、さらに頑張りすぎてしまう自分に対して強制的にリマインドできる仕組みも必要でした。

---

## Overview / 概要

**emo.exe** is a small personal toolkit that brings together three ideas in one place:

- **pomo** — a Pomodoro-style timer with reminders
- **studyTimeTracker** — a simple study logging utility
- **simple_lifespan_scaling** — a lifespan-oriented perspective tool

このプロジェクトは、作者の既存ツールをひとつの導線にまとめた構成です。  
ディレクトリを分けて整理しながら作られた、個人開発の統合型CLIプロジェクトです。

---

## Featured Components / 主な構成要素

Component | What it does | Link
--- | --- | ---
`pomo` | Pomodoro timer with reminder-oriented workflow | <https://github.com/eeemo-hoge/pomo>
`studyTimeTracker` | Records and reviews study time | <https://github.com/eeemo-hoge/studyTimeTracker>
`simple_lifespan_scaling` | Helps view time from a lifespan perspective | <https://github.com/eeemo-hoge/simple_lifespan_scaling>

---

## Directory Tree / ディレクトリ構成

> [!IMPORTANT]
> The block below is a **directory-tree example/template** based on the current repository layout.  
> Please refresh it with the latest `tree` output whenever the structure changes.

```text
emo.exe/
├── LICENSE
├── README.md
├── README2.md
└── emo.exe/
    ├── README.md
    ├── media_for_readme/
    └── v1.1/
        ├── lib/
        │   └── string_media_path.h
        ├── media/
        └── src/

# Replace this example with real `tree` output when files or folders change.
```

---

## User-configurable Settings / ユーザー側でできる設定

The project is intended to be adjusted by the user as needed.  
必要に応じて、利用者自身が設定やソースを調整する前提のプロジェクトです。

Setting / 用語 | Meaning
--- | ---
`work time` | Focus/work session length / 作業時間
`short break time` | Short rest duration / 小休憩
`long break time` | Long rest duration / 長休憩
`sessions` | Total work sessions, excluding breaks / 休憩を除いた総セッション数
`Long interval spacing` | How often a longer cycle or break cadence is applied / 何回ごとに区切りを入れるか
`Reminder interval` | How often reminder media/text appears / 何分ごとに通知やメディアを出すか

---

## Build / Run (Unix-like) / ビルドと実行（Unix-like環境）

From the repository root shown above, the checked-in source tree is under `emo.exe/v1.1/src`.  
For a Unix-like environment, a minimal build/run flow is:

```bash
cd emo.exe/v1.1/src
g++ -std=c++11 main.cpp -o main
./main
```

Historical reference only: the following **non-portable local example** preserves an older Unix-like local path while keeping the same `./main` run pattern:

```bash
cd ~/c++/emo.exe/v1.1/src
g++ -std=c++11 main.cpp -o main
./main
```

**JP**: `src` に移動して `./main` を実行します。  
**EN**: Move into `src` and run `./main`.

> [!NOTE]
> The legacy local-path example `~/c++/emo.exe/v1.1/src` is preserved above for continuity.  
> For a fresh clone of this repository, prefer the repository-relative path `emo.exe/v1.1/src`.

---

## Pomodoro Terms at a Glance / 用語まとめ

Term | Quick meaning
--- | ---
**Work Time** | The focused working period / 集中作業の時間
**Short Break** | A brief rest between sessions / 短い休憩
**Long Break** | A longer rest after repeated sessions / 長めの休憩
**Sessions** | Count of work-only cycles / 作業のみの回数
**Long Interval Spacing** | How frequently the larger cycle appears / 長い区切りの頻度
**Reminder Interval** | How often reminder content appears / リマインド表示の間隔

---

## Important Notes / 注意点

> [!WARNING]
> Try to preserve the file and folder structure as much as possible.  
> できるだけファイル・フォルダ構造は維持してください。

- If you change the project layout, do so carefully and at your own responsibility.
- If you change media paths, also update the corresponding source file.
- In the current checked-in tree, review **`emo.exe/v1.1/lib/string_media_path.h`** when adjusting bundled media paths.
- In short: **change the media and the code together** so runtime references stay valid.

> Historical note / 旧READMEメモ: older documentation/layouts may refer to the obsolete path `apps/pomo/main.cpp` when changing media paths.  
> In this checkout, review `emo.exe/v1.1/lib/string_media_path.h` instead.

---

## License / ライセンス

Please refer to the repository-root **`LICENSE`** file for the exact license terms.

- See: [`LICENSE`](./LICENSE)
- 日本語メモ: 詳細はリポジトリ直下の `LICENSE` を参照してください。

---

<div align="center">

_Thanks for checking out **emo.exe**._  
_自分の生活リズムや学習習慣を見直す、小さな入口になりますように。_

</div>
