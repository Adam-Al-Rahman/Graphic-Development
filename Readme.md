# Graphics

## Local Bazel Package Support

- Using `Hedron` for vscode and clangd to identify the third_party package and after every build just run
- `bazel run @hedron_compile_commands//:refresh_all`

## Points

- Not consider `#pragma once` for c++ header file instead use `ifndef`;

## How to Run

- Clean the project (Optional)
  - `bazel clean`
- Build the project from base folder
  - `bazel build //...`
- Create `compile_commands.json` for your code editor
  - `bazel run @hedron_compile_commands//:refresh_all`
- Run the project
  - `bazel run //graphics/src:main`
