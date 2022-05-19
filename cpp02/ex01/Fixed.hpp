class Fixed
{
private:
    int mword_length;                        // 전체길이
    static const int mfractional_length = 8; // 8로 초기화한 상수.. 고정소수점 길이
public:
    // 기본생성자
    Fixed();

    Fixed(const int int_num);
    Fixed(const float float_num);
    Fixed(const Fixed &fixed);

    // 소멸자
    ~Fixed();
    // 복사 생성자
    Fixed(Fixed &fixed);

    // 대입 연산자 오버로딩
    Fixed &operator=(const Fixed &fixed);

    int toInt(void) const;
    float toFloat(void) const;

    //게터세터
    int getRawBits(void) const;
    void setRawBits(int const raw);
}; 
//입출력 연산자 오버로딩
std::ostream &operator<<(std::ostream &out, const Fixed &fixed);