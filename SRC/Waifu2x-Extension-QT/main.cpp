﻿/*
    Copyright (C) 2020  Aaron Feng

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Affero General Public License as published
    by the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

    My Github homepage: https://github.com/AaronFeng753
*/

#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);//高分辨率屏幕支持
    QApplication a(argc,argv);
    a.setQuitOnLastWindowClosed(false);//隐藏无窗口时保持运行
    MainWindow *w = new MainWindow;
    w->show();
    return a.exec();
}

/*
Change log:
v2.46.08.1-beta:
- 更新ImageMagick.
- 更新waifu2x-ncnn-vulkan.
- 更新ffmpeg.
v2.46.08-beta:
- 新特性:检测到更新后,显示当前更新来自哪个更新通道.
- 直接从内置的ffmpeg读取编码器列表.
- 改进GUI.
- 在线更新QRCode时加入文件有效性校验.
v2.46.07-beta:
- 更新FFmpeg.
- 重新编译启动器.
v2.46.06-beta:
- 新特性:更新后将保留原来的设置.
- 修复bug:当未启用自定义字体设定时,自定义字体大小仍然能生效.
v2.46.05-beta:
- 新特性:最小化到任务栏.
- 新特性:可选择更新通道.
v2.46.04-beta:
- 新特性:系统托盘(任务栏)图标.
- 新特性:后台模式.
- 新特性:系统托盘(任务栏)消息.
- 性能优化.
- 改进GUI.
- 更新ImageMagick.
- 修复一些由QT5自带的bug而引起的bug.
v2.46.03-beta:
- 更新FFmpeg.
- 更新FFmpeg编码器列表.
v2.46.02-beta:
- Add overwrite switch.
- Add tooltip.
- Performance optimization.
- Use isChecked() to replace checkState().
- Fix bug: Potential multi-thread bug when writing files.
v2.46.01-beta:
- 更新FFmpeg.
- 添加tooltip.
- 更改默认设定.
- 删除冗余代码.
--------------------------------------------------------------------------
To do:
- 多gpu支持
- pdf格式支持
---------------------------------------------------------------------------
Integrated component:
- gifsicle version 1.92(release)
- SoX 14.4.2-win32(release)
- waifu2x-caffe 1.2.0.2(release)
- Waifu2x-converter e7de04d
- waifu2x-ncnn-vulkan 785328838a7e3c3429d4d4587ba0d00f50cb098f
- SRMD-ncnn-Vulkan 20200606(release)
- realsr-ncnn-vulkan 20200606(release)
- ImageMagick 7.0.10-20-portable-Q16-x64
- Anime4KCPP v2.1.0(release)
- FFmpeg&FFprobe 20200620-29ea4e1-win64-static
---
Icons made by : Freepik (https://www.flaticon.com/authors/freepik) From Flaticon : https://www.flaticon.com/
*/
