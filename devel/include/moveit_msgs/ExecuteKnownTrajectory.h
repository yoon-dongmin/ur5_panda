// Generated by gencpp from file moveit_msgs/ExecuteKnownTrajectory.msg
// DO NOT EDIT!


#ifndef MOVEIT_MSGS_MESSAGE_EXECUTEKNOWNTRAJECTORY_H
#define MOVEIT_MSGS_MESSAGE_EXECUTEKNOWNTRAJECTORY_H

#include <ros/service_traits.h>


#include <moveit_msgs/ExecuteKnownTrajectoryRequest.h>
#include <moveit_msgs/ExecuteKnownTrajectoryResponse.h>


namespace moveit_msgs
{

struct ExecuteKnownTrajectory
{

typedef ExecuteKnownTrajectoryRequest Request;
typedef ExecuteKnownTrajectoryResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ExecuteKnownTrajectory
} // namespace moveit_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::moveit_msgs::ExecuteKnownTrajectory > {
  static const char* value()
  {
    return "e30b86cbd13304832e894dc994795e33";
  }

  static const char* value(const ::moveit_msgs::ExecuteKnownTrajectory&) { return value(); }
};

template<>
struct DataType< ::moveit_msgs::ExecuteKnownTrajectory > {
  static const char* value()
  {
    return "moveit_msgs/ExecuteKnownTrajectory";
  }

  static const char* value(const ::moveit_msgs::ExecuteKnownTrajectory&) { return value(); }
};


// service_traits::MD5Sum< ::moveit_msgs::ExecuteKnownTrajectoryRequest> should match
// service_traits::MD5Sum< ::moveit_msgs::ExecuteKnownTrajectory >
template<>
struct MD5Sum< ::moveit_msgs::ExecuteKnownTrajectoryRequest>
{
  static const char* value()
  {
    return MD5Sum< ::moveit_msgs::ExecuteKnownTrajectory >::value();
  }
  static const char* value(const ::moveit_msgs::ExecuteKnownTrajectoryRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::moveit_msgs::ExecuteKnownTrajectoryRequest> should match
// service_traits::DataType< ::moveit_msgs::ExecuteKnownTrajectory >
template<>
struct DataType< ::moveit_msgs::ExecuteKnownTrajectoryRequest>
{
  static const char* value()
  {
    return DataType< ::moveit_msgs::ExecuteKnownTrajectory >::value();
  }
  static const char* value(const ::moveit_msgs::ExecuteKnownTrajectoryRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::moveit_msgs::ExecuteKnownTrajectoryResponse> should match
// service_traits::MD5Sum< ::moveit_msgs::ExecuteKnownTrajectory >
template<>
struct MD5Sum< ::moveit_msgs::ExecuteKnownTrajectoryResponse>
{
  static const char* value()
  {
    return MD5Sum< ::moveit_msgs::ExecuteKnownTrajectory >::value();
  }
  static const char* value(const ::moveit_msgs::ExecuteKnownTrajectoryResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::moveit_msgs::ExecuteKnownTrajectoryResponse> should match
// service_traits::DataType< ::moveit_msgs::ExecuteKnownTrajectory >
template<>
struct DataType< ::moveit_msgs::ExecuteKnownTrajectoryResponse>
{
  static const char* value()
  {
    return DataType< ::moveit_msgs::ExecuteKnownTrajectory >::value();
  }
  static const char* value(const ::moveit_msgs::ExecuteKnownTrajectoryResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MOVEIT_MSGS_MESSAGE_EXECUTEKNOWNTRAJECTORY_H
