#
#  Be sure to run `pod spec lint JXCOCO.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

  spec.name         = "JXCOCO"
  spec.version      = "0.0.1"
  spec.summary      = "封装UIButton."
  spec.description  = <<-DESC
创建一个库，自己测试一下
                   DESC

  spec.homepage     = "https://github.com/bazingaJ/JXCOCO"
  spec.license      = { :type => "MIT", :file => "LICENSE" }
  spec.author             = { "Jesse Enzo" => "yjingxu007@gmail.com" }
  spec.source       = { :git => "https://github.com/bazingaJ/JXCOCO.git", :tag => "#{spec.version}" }
  spec.source_files  = "JXKit/*"
  spec.frameworks = 'UIKit'
  spec.requires_arc = true
  spec.ios.deployment_target = '8.0'
  spec.dependency 'Masonry'
end
