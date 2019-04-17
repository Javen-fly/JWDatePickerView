Pod::Spec.new do |s|
  s.name         = "JWDatePickerView"
  s.version      = "0.0.1"
  s.summary      = "DatePickerView."
  s.homepage     = "https://github.com/Javen-fly/JWDatePickerView"
  s.license      = "MIT"
  s.author       = { "Javenfly" => "960838547@qq.com" }
  s.platform     = :ios, "8.0"
  s.source       = { :git => "https://github.com/Javen-fly/JWDatePickerView.git", :tag => "0.0.1" }
  s.source_files  = "JWDatePickerView", "JWDatePickerView/**/*.{h,m}"
  s.framework  = "UIKit"
  s.dependency "JWLunarCalendarDB", "~> 1.1.2"
  s.dependency "JWPickerView", "~> 1.0.0"

end
