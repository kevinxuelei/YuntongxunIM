#
# Be sure to run `pod lib lint YuntongxunIM.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'YuntongxunIM'
  s.version          = '0.1.3'
  s.summary          = 'Yuntongxun IM SDK'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/kevinxuelei/YuntongxunIM'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'kevinxuelei' => 'kevinxuelei@163.com' }
  s.source           = { :git => 'https://github.com/kevinxuelei/YuntongxunIM.git', :tag => '0.1.3' }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '11.0'

#  s.source_files = 'YuntongxunIM/Classes/**/*'

  s.subspec 'YuntongxunIMLibCore' do |m|
     m.vendored_frameworks = 'YTXIMLibs/YTXIMLibCore.xcframework'
    end

  s.subspec 'YuntongxunIMKit' do |l|
      l.vendored_frameworks = 'YTXIMLibs/YTXIMKit.xcframework'
      l.resources = 'YTXIMLibs/YuntongxunIMKit.bundle'
      l.dependency 'YuntongxunIM/YuntongxunIMLibCore'
    end

  # s.resource_bundles = {
  #   'YuntongxunIM' => ['YuntongxunIM/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
    s.pod_target_xcconfig = { 'DEFINES_MODULE' => 'YES', 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'armv7' }
end
