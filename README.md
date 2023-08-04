# atcoder


## Prerequisites

- `rye` v0.11.0 (Virtal Envrioment)
  - `online-judge-tools`

When you install `rye` using `pacman`, you should not add `source $HOME/.rye/env` to `.zshrc` so that other pacman packages can use Arch's `python3`.

## Usage

For the first time, setup dependencies.

```shell
rye sync
```
When you want to use `online-judge-tools`, activate virtual envrioment shell.

```shell
rye shell # this will enable `oj` command
```
