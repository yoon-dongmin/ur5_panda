// Generated by gencpp from file panda_move/ActionSequencesResponse.msg
// DO NOT EDIT!


#ifndef PANDA_MOVE_MESSAGE_ACTIONSEQUENCESRESPONSE_H
#define PANDA_MOVE_MESSAGE_ACTIONSEQUENCESRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace panda_move
{
template <class ContainerAllocator>
struct ActionSequencesResponse_
{
  typedef ActionSequencesResponse_<ContainerAllocator> Type;

  ActionSequencesResponse_()
    : result(false)  {
    }
  ActionSequencesResponse_(const ContainerAllocator& _alloc)
    : result(false)  {
  (void)_alloc;
    }



   typedef uint8_t _result_type;
  _result_type result;





  typedef boost::shared_ptr< ::panda_move::ActionSequencesResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::panda_move::ActionSequencesResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ActionSequencesResponse_

typedef ::panda_move::ActionSequencesResponse_<std::allocator<void> > ActionSequencesResponse;

typedef boost::shared_ptr< ::panda_move::ActionSequencesResponse > ActionSequencesResponsePtr;
typedef boost::shared_ptr< ::panda_move::ActionSequencesResponse const> ActionSequencesResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::panda_move::ActionSequencesResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::panda_move::ActionSequencesResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::panda_move::ActionSequencesResponse_<ContainerAllocator1> & lhs, const ::panda_move::ActionSequencesResponse_<ContainerAllocator2> & rhs)
{
  return lhs.result == rhs.result;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::panda_move::ActionSequencesResponse_<ContainerAllocator1> & lhs, const ::panda_move::ActionSequencesResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace panda_move

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::panda_move::ActionSequencesResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::panda_move::ActionSequencesResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::panda_move::ActionSequencesResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::panda_move::ActionSequencesResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::panda_move::ActionSequencesResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::panda_move::ActionSequencesResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::panda_move::ActionSequencesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eb13ac1f1354ccecb7941ee8fa2192e8";
  }

  static const char* value(const ::panda_move::ActionSequencesResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xeb13ac1f1354ccecULL;
  static const uint64_t static_value2 = 0xb7941ee8fa2192e8ULL;
};

template<class ContainerAllocator>
struct DataType< ::panda_move::ActionSequencesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "panda_move/ActionSequencesResponse";
  }

  static const char* value(const ::panda_move::ActionSequencesResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::panda_move::ActionSequencesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool result\n"
;
  }

  static const char* value(const ::panda_move::ActionSequencesResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::panda_move::ActionSequencesResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ActionSequencesResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::panda_move::ActionSequencesResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::panda_move::ActionSequencesResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PANDA_MOVE_MESSAGE_ACTIONSEQUENCESRESPONSE_H
