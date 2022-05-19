class Fixed
{
private:
    int mword_length;                        
    static const int mfractional_length = 8; 
public:
    Fixed();
    Fixed(const Fixed &fixed);
    Fixed(const int int_num);
    Fixed(const float float_num);
    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);
    Fixed &operator=(const Fixed &fixed);


    bool operator>(const Fixed &fixed) const;
    bool operator>=(const Fixed &fixed) const;
    bool operator<(const Fixed &fixed) const;
    bool operator<=(const Fixed &fixed) const;
    bool operator==(const Fixed &fixed) const;
    bool operator!=(const Fixed &fixed) const;

    Fixed operator+(const Fixed &fixed) const;
    Fixed operator-(const Fixed &fixed) const;
    Fixed operator*(const Fixed &fixed) const;
    Fixed operator/(const Fixed &fixed) const;

    Fixed &operator++();
    Fixed &operator--();
    Fixed operator++(int);
    Fixed operator--(int);

    int toInt(void) const;
    float toFloat(void) const;


    static Fixed &min(Fixed &u, Fixed &v);
    const static Fixed &min(const Fixed &u, const Fixed &v);
    static Fixed &max(Fixed &u, Fixed &v);
    const static Fixed &max(const Fixed &u, const Fixed &v);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);