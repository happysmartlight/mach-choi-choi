#pragma once

/*
 * Welcome!
 * You can use the file "my_config.h" to make changes to the way WLED is compiled!
 * It is possible to enable and disable certain features as well as set defaults for some runtime changeable settings.
 *
 * How to use:
 * PlatformIO: Just compile the unmodified code once! The file "my_config.h" will be generated automatically and now you can make your changes.
 *
 * ArduinoIDE: Make a copy of this file and name it "my_config.h". Go to wled.h and uncomment "#define WLED_USE_MY_CONFIG" in the top of the file.
 *
 * DO NOT make changes to the "my_config_sample.h" file directly! Your changes will not be applied.
 */

// uncomment to force the compiler to show a warning to confirm that this file is included
//#warning **** my_config.h: Settings from this file are honored ****

/* Uncomment to use your WIFI settings as defaults
  //WARNING: this will hardcode these as the default even after a factory reset
#define CLIENT_SSID "Your_SSID"
#define CLIENT_PASS "Your_Password"
*/

#define MAX_LEDS 5000       // Maximum total LEDs. More than 1500 might create a low memory situation on ESP8266.
#define MDNS_NAME "hsl"    // mDNS hostname, ie: *.local
#define SERVERNAME "ARGB" // HTTP server description
#define WLED_PIN "1907"    // PIN for settings pages

/*
 * ================================================================
 *  HAPPY SMART LIGHT – CODENAME COLLECTION
 *  Dành cho các phiên bản firmware tùy chỉnh của bạn (ARGB/WLED)
 * ================================================================
 *
 * | Codename   | Ý nghĩa / Phong cách                                                   | Gợi ý sử dụng                                      |
 * |-------------|-----------------------------------------------------------------------|----------------------------------------------------|
 * | AURORA      | "Cực quang" – Ánh sáng tự nhiên đầy màu sắc, giống hiệu ứng LED.     | Bản firmware chuyên về hiệu ứng màu động.          |
 * | LUMINA      | Từ “Luminous” (ánh sáng rực rỡ), dễ đọc, hiện đại, sang trọng.       | Bản firmware tối ưu hiển thị hoặc công suất sáng.  |
 * | NEONIX      | Phong cách công nghệ, ghép từ “Neon + Matrix”, nghe hiện đại.        | Dòng controller dành cho LED strip / LED matrix.   |
 * | SPECTRA     | Nghĩa là “Quang phổ” – liên tưởng đến bảng màu RGB/HSL.              | Bản điều khiển palette hoặc màu thông minh.        |
 * | FLARE       | “Tia lóe sáng” – biểu tượng cho tốc độ, gọn nhẹ và mạnh mẽ.          | Bản mini, tối ưu tốc độ và hiệu ứng đơn giản.      |
 *
 * Ví dụ sử dụng:
 *   #define WLED_CODENAME "AURORA"
 *   #define WLED_BRAND "Happy Smart Light"
 *   #define WLED_PRODUCT_NAME "HSL Aurora Controller"
 *
 * ================================================================
 */
#define WLED_CODENAME "AURORA" 

#define WLED_BRAND "ARGB"
#define WLED_PRODUCT_NAME "ARGB HSL Controller"

/*
  * ================================================================
  *  Mặc định WIFI AP
  * ================================================================
  *
  * Thay đổi các cài đặt WIFI AP mặc định của bạn ở đây.
  * Nếu bạn muốn sử dụng các cài đặt WIFI AP đã lưu trữ (được khuyến nghị), hãy để trống các định nghĩa này.
  * Nếu bạn muốn sử dụng các cài đặt WIFI AP tùy chỉnh, hãy bỏ chú thích và thay đổi SSID và mật khẩu.
  *
  * Ví dụ sử dụng:
  *   #define WLED_AP_SSID     "MyCustomAP"
  *   #define WLED_AP_PASS     "MyCustomPass"
  *
  * ================================================================
  */
#define WLED_AP_SSID     "ARGB-AP"
#define WLED_AP_PASS     "argb1234"

/*
  * ================================================================
  *  Mặc định WIFI
  * ================================================================
  *
  * Thay đổi các cài đặt WIFI mặc định của bạn ở đây.
  * Nếu bạn muốn sử dụng các cài đặt WIFI đã lưu trữ (được khuyến nghị), hãy để trống các định nghĩa này.
  * Nếu bạn muốn sử dụng các cài đặt WIFI tùy chỉnh, hãy bỏ chú thích và thay đổi SSID và mật khẩu.
  *
  * Ví dụ sử dụng:
  *   #define CLIENT_SSID "OLIVE BERRY 2.4G"
  *   #define CLIENT_PASS "zxcvbnm@123"
  *
  * ================================================================
  */  
// #define CLIENT_SSID_DEV "OLIVE BERRY 2.4G" // Your WIFI SSID
// #define CLIENT_PASS_DEV "zxcvbnm@123" // Your WIFI password

#define CLIENT_SSID "OLIVE BERRY 2.4G" // Your WIFI SSID
#define CLIENT_PASS "zxcvbnm@123" // Your WIFI password

// #define CLIENT_SSID "NHA TRO 757 T1-1" // Your WIFI SSID
// #define CLIENT_PASS "11111111" // Your WIFI password

#define WLED_OTA_PASS    "argbota"

#define WLED_VERSION 2.0_HSL_IPEX

#define WLED_REPO "HappySmartLight"