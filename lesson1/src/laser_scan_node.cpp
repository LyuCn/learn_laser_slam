#include <ros/ros.h>
#include <sensor_msgs/LaserScan.h>

// 声明一个类
class LaserScan
{
private:
    ros::NodeHandle node_handle_;	// ros中的句柄
    ros::NodeHandle private_node_;	// ros中的私有句柄
    ros::Subscriber laser_scan_subscriber_; //声明一个Subscriber

public:
    LaserScan();
    ~LaserScan();
    void ScanCallback(const sensor_msgs::LaserScan::ConstPtr &scan_msg);
}
