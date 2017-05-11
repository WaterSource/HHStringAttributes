Pod::Spec.new do |s|
  s.name             = "HHStringAttributes"
  s.version          = "0.1.0"
  s.summary          = "A simple Attributes Library."

  s.description      = <<-DESC
                      Makes it way easier to generate attribute dictionaries needed for NSAttributedString.
                       DESC

  s.homepage         = "https://github.com/WaterSource/HHStringAttributes"
  # s.screenshots    = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { "何源" => "jamehy@yeah.net"}
  s.source           = { :git => "https://github.com/WaterSource/HHStringAttributes.git", :tag => s.version.to_s }

  s.ios.deployment_target = '8.0'

  s.source_files = 'HHStringAttributes/Classes/*.{h,m}'
  #s.resources = "YFPhotoAlbum/Assets/*.png"

  # s.public_header_files = 'Pod/Classes/**/*.h'
  s.frameworks = 'UIKit'
  s.dependency    'Slash', '~> 0.1.4'
end
