#include <iostream>
#include <cmath>

int main() {
    // Duyệt qua các tọa độ (x, y) trên mặt phẳng
    for (float y = 1.5f; y > -1.5f; y -= 0.1f) {
        for (float x = -1.5f; x < 1.5f; x += 0.05f) {
            
            float a = x * x + y * y - 1;
            
            // Kiểm tra xem điểm (x, y) có thỏa mãn bất phương trình trái tim hay không
            if ((a * a * a - x * x * y * y * y) <= 0.0f) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << '\n'; // Xuống dòng sau khi vẽ xong một hàng
    }
    
    return 0;
}