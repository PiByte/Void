class v_ship
{
public:
  

  void setEngine(int type);
  void setWeapons(int type);
  void setStorage(int type);
  void setCabin(int type);
  
  void shipScreen();
  
  v_ship();
private:

  void getEngine();
  void getWeapons();
  void getStorage();
  void getCabin();

  int health;
  int cash;

  // Engines: Rollers Boosters 1.0...3.0, HyperY Quad Y/X
  // Weapon: None, Clock Beam 17, Barista 5000, SpaceLoop Extreme
  // Storage: None, Kwbbel Mini, Medium, Massive
  // Cabin: Basic, ICEA Friby, ICEA Extravik, ICEA Golvsida, Daminium Premium Suite

  int engine;
  int weapons;
  int storage;
  int cabin;
  

};
