#
#  Be sure to run `pod spec lint JXCOCO.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

  spec.name         = "JXCOCO" #项目名
  spec.version      = "0.0.1"  #相应的版本号 
  spec.summary      = "封装UIButton2."  #简述
  spec.description  = <<-DESC #详细描述
			创建一个库，自己测试一下
                   DESC

  spec.homepage     = "https://github.com/bazingaJ/JXCOCO" #项目主页
  spec.license      = { :type => "MIT", :file => "LICENSE" } #开源协议
  spec.author             = { "Jesse Enzo" => "yjingxu007@gmail.com" } #作者
  spec.source       = { :git => "https://github.com/bazingaJ/JXCOCO.git", :tag => "#{spec.version}" }
  spec.source_files  = "JXKit/*.{h,m}"
  spec.frameworks = 'UIKit'
  spec.requires_arc = true
  spec.ios.deployment_target = '9.0'
  spec.dependency 'Masonry'
  spec.public_header_files = 'JXKit/JXKit.h'   #需要对外开放的头文件
end
