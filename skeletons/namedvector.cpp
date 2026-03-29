
namespace geo{
  template<typename T>
  class namedvector
    : public std::vector<int> {
  private:
    std::string _name;
  public:
    namedvector
      ( std::string n,int s )
      : _name(n)
      ,std::vector<int>(s) {};
    auto name() {
      return _name; };
  };
}