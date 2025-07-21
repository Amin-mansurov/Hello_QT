# Qt Click Counter

This is a simple Qt GUI application written in C++.  
It shows a window with a button and a label. Every time the button is clicked, a counter increments and the label updates.

## 📦 Features

- `QLabel` to display click count
- `QPushButton` to trigger the action
- Uses `QVBoxLayout` for layout
- Demonstrates Qt's signal-slot system with C++ lambda

## 🛠 Requirements

- Qt 5 or 6 (with Qt Widgets module)
- C++ compiler (g++, clang++, MSVC)

## 🚀 Build Instructions (qmake)

```bash
mkdir build/
cd build
qmake ../helloworld.pro
make
./your_app_name
