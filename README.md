# react-native-touch-visualizer
![React Native touch visualizer demo](https://cloud.githubusercontent.com/assets/10658888/21396686/a9f3ae52-c766-11e6-9423-3c6d97b4843f.gif)

## Install via npm
```bash
$ npm install react-native-touch-visualizer --save
```

## Link it to your project
```bash
$ react-native link react-native-touch-visualizer
```

## Edit AppDelegate.m
```objc
#import "TouchVisualizer.h"
```

Change `objc self.window = [[UIWindow alloc] initWithFrame:[UIScreen mainScreen].bounds];` to `objc self.window = [[TouchVisualizer alloc] initWithFrame:[UIScreen mainScreen].bounds];`

## Copyright
Copyright (c) 2017 Zachary Gibson Licensed under the MIT license.
