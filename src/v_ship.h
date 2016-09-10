class v_ship
{
public:
  void getEngine();
  void getWeapons();
  void getStorage();
  void getCabin();

  void setEngine(int type);
  void setWeapons(int type);
  void setStorage(int type);
  void setCabin(int type);
private:
  int health = 100;
  int cash = 0;

  // Engines: Rollers Boosters 1.0...3.0, HyperY Quad Y/X
  // Weapon: None, Clock Beam 17, Barista 5000, SpaceLoop Extreme
  // Storage: None, Kwbbel Mini, Medium, Massive
  // Cabin: Basic, ICEA Friby, ICEA Extravik, ICEA Golvsida, Daminium Premium Suite

  int engine = 2;
  int weapons = 2;
  int storage = 1;
  int cabin = 3;
};
