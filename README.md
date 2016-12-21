# react-native-touch-visualizer
![React Native touch visualizer demo](https://s3-us-west-2.amazonaws.com/zach-random-stuff/touch-visualizer.gif)
## Install via npm
`$ npm install --save react-native-touch-visualizer`
## Link it to your project
`$ react-native link`
## Edit AppDelegate.m
`#import "TouchVisualizer.h"`

Change `self.window = [[TouchVisualizer alloc] initWithFrame:[UIScreen mainScreen].bounds];` to `self.window = [[UIWindow alloc] initWithFrame:[UIScreen mainScreen].bounds];`
### License
License is MIT
