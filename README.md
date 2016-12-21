# react-native-touch-visualizer
![React Native touch visualizer demo](https://cloud.githubusercontent.com/assets/10658888/21396686/a9f3ae52-c766-11e6-9423-3c6d97b4843f.gif)
## Install via npm
`$ npm install --save react-native-touch-visualizer`
## Link it to your project
`$ react-native link`
## Edit AppDelegate.m
`#import "TouchVisualizer.h"`

Change `self.window = [[TouchVisualizer alloc] initWithFrame:[UIScreen mainScreen].bounds];` to `self.window = [[UIWindow alloc] initWithFrame:[UIScreen mainScreen].bounds];`
### License
License is MIT
