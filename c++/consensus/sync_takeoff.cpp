#include<iostream>
#include<array>
// GPS message
#include<sensor_msgs/NavSatFix.h>
using namespace std;
/* #include<ros/ros.h> */
/* using namespace std_msgs; */
using namespace sensor_msgs;
#define float64 double
namespace sync_takeoff{
  float64 gps_position_local[3];
  // latitude, longtitude, altitude
  //
  //
  void get_gps_local_position(sensor_msgs::NavSatFix home_gps, sensor_msgs::NavSatFix current_gps){
        float64 local_position[3];
        local_position[0] = current_gps.latitude - home_gps.latitude;
        local_position[1] = current_gps.longitude - home_gps.longitude;
        local_position[2] = current_gps.altitude - home_gps.altitude;
  }
  /* get_gps_local_position(home_gps, current_gps) */

  void get_current_position(float64  (&desired_pos)[3], float64 gps_position_local[3]){
      for(int i=0; i< 3; i++){
          desired_pos[i] = gps_position_local[i];
      }
  }
  bool reached_to_height(float64 desired_pos[3], float64 current_pos[3], float64 threshhold=0.5){
    float64 distance = 0;

     distance = desired_pos[2] - current_pos[2];
     if(distance<=threshhold){
       cout<<"reached"<<endl;
       return 1;
     }
     return 0;
  }


}
using namespace sync_takeoff;

int main(int argc, char** argv){
  float64 a[3] = {1.0, 2.0, 3.3};
  float64 b[3] = {1.0, 2.0, 3.3};
  float64 c[3];
  get_current_position(c, b);
  for(int i=0; i<3; i++){
    cout<<c[i]<<endl;
  }
  bool reached = false;
  reached_to_height(a,b);
  reached = sync_takeoff::reached_to_height(a,b);
  cout<<"reached="<<reached<<endl;
  return 0;
}


// why cannot find the library
