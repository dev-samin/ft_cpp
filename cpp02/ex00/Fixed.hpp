#include <iostream>

class Fixed
{
private:
    int mword_length; // 전체길이
    static const int mfractional_length = 8; // 8로 초기화한 상수.. 고정소수점 길이
public:
    // 기본생성자
    Fixed();
    // 소멸자
    ~Fixed();
    // 복사 생성자
    Fixed(Fixed &fixed);
    // 연산자 오버로딩
    Fixed &operator=(Fixed &fixed);

    int getRawBits(void) const;
    void setRawBits(int const raw);
};
