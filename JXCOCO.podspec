#
#  Be sure to run `pod spec lint JXCOCO.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|

  s.name         = "JXCOCO" #项目名
  s.version      = "0.0.1"  #相应的版本号 
  s.summary      = "封装UIButton2."  #简述
  s.description  = <<-DESC #详细描述
	TODO: 创建一个库，自己测试一下
  DESC

  s.homepage     = "https://github.com/bazingaJ/JXCOCO" #项目主页
  s.license      = { :type => "MIT", :file => "LICENSE" } #开源协议
  s.author             = { "Jesse Enzo" => "yjingxu007@gmail.com" } #作者
  s.source       = { :git => "https://github.com/bazingaJ/JXCOCO.git", :tag => "#{s.version}" }

  # 源库资料文件    
  s.source_files  = 'JXKit'

  s.platform = :ios, "10.0"
  s.ios.deployment_target = '8.0'
  
  s.frameworks = 'UIKit'
  s.requires_arc = true
  
  s.dependency 'Masonry'
  s.public_header_files = 'JXKit.h'   #需要对外开放的头文件
end
