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

| Component | What it does | Link |
|---|---|---|
| `pomo` | Pomodoro timer with reminder-oriented workflow | <https://github.com/eeemo-hoge/pomo> |
| `studyTimeTracker` | Records and reviews study time | <https://github.com/eeemo-hoge/studyTimeTracker> |
| `simple_lifespan_scaling` | Helps view time from a lifespan perspective | <https://github.com/eeemo-hoge/simple_lifespan_scaling> |

---

## Directory Tree / ディレクトリ構成

> [!IMPORTANT]
> The block below is a **placeholder/example** for presentation.  
> Please update it with the latest `tree` output so it matches your local repository exactly.

```text
emo.exe/
├── LICENSE
├── README.md
├── README2.md
└── emo.exe/
    ├── README.md
    ├── media_for_readme/
    │   └── studyTimeTracking.png
    └── v1.1/
        ├── lib/
        ├── media/
        └── src/

# Example only — replace with real output when the structure changes.
```

---

## User-configurable Settings / ユーザー側でできる設定

The project is intended to be adjusted by the user as needed.  
必要に応じて、利用者自身が設定やソースを調整する前提のプロジェクトです。

| Setting / 用語 | Meaning |
|---|---|
| `work time` | Focus/work session length / 作業時間 |
| `short break time` | Short rest duration / 小休憩 |
| `long break time` | Long rest duration / 長休憩 |
| `sessions` | Total work sessions, excluding breaks / 休憩を除いた総セッション数 |
| `Long interval spacing` | How often a longer cycle or break cadence is applied / 何回ごとに区切りを入れるか |
| `Reminder interval` | How often reminder media/text appears / 何分ごとに通知やメディアを出すか |

---

## Compile / Run / コンパイル・実行

The existing project notes currently point to this workflow:

```bash
cd ~/c++/emo.exe/v1.1/src
./main
```

**JP**: `src` に移動して `./main` を実行します。  
**EN**: Move into `src` and run `./main`.

> [!NOTE]
> The README history mainly documents the **run location and executable invocation** above.  
> If your local environment differs, adjust the path to match your actual checkout.

---

## Pomodoro Terms at a Glance / 用語まとめ

| Term | Quick meaning |
|---|---|
| **Work Time** | The focused working period / 集中作業の時間 |
| **Short Break** | A brief rest between sessions / 短い休憩 |
| **Long Break** | A longer rest after repeated sessions / 長めの休憩 |
| **Sessions** | Count of work-only cycles / 作業のみの回数 |
| **Long Interval Spacing** | How frequently the larger cycle appears / 長い区切りの頻度 |
| **Reminder Interval** | How often reminder content appears / リマインド表示の間隔 |

---

## Important Notes / 注意点

> [!WARNING]
> Try to preserve the file and folder structure as much as possible.  
> できるだけファイル・フォルダ構造は維持してください。

- If you change the project layout, do so carefully and at your own responsibility.
- If you change media paths, also update the corresponding source file.
- As described in the original project notes, media-path changes may require editing **`apps/pomo/main.cpp`** in layouts that use that path.
- In short: **change the media and the code together** so runtime references stay valid.

---

## License / ライセンス

This repository includes a conventional **`LICENSE`** file at the repository root.  
Details are provided under the **GNU General Public License v3.0**.

- See: [`LICENSE`](./LICENSE)
- 日本語メモ: 詳細はリポジトリ直下の `LICENSE` を参照してください。

---

<div align="center">

_Thanks for checking out **emo.exe**._  
_自分の生活リズムや学習習慣を見直す、小さな入口になりますように。_

</div>
