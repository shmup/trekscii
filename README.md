# trekscii

An ASCII Star Trek scene generator!
![demo](demo.png)

## Compilation

In the root project directory:

```
$ make -j
# make install
```

## Usage

```bash
# press Return to exit
trekscii [height] [width]
```
e.g.

```bash
trekscii # defaults to terminal width and fixed height
trekscii 25 85
trekscii 35 $(tput cols)               # terminal width, fixed height
trekscii $(tput lines) $(tput cols)    # full-terminal
```
