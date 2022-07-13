// Generated by gencpp from file panda_move/SyncRequest.msg
// DO NOT EDIT!


#ifndef PANDA_MOVE_MESSAGE_SYNCREQUEST_H
#define PANDA_MOVE_MESSAGE_SYNCREQUEST_H


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
struct SyncRequest_
{
  typedef SyncRequest_<ContainerAllocator> Type;

  SyncRequest_()
    : activated_object()  {
    }
  SyncRequest_(const ContainerAllocator& _alloc)
    : activated_object(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _activated_object_type;
  _activated_object_type activated_object;





  typedef boost::shared_ptr< ::panda_move::SyncRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::panda_move::SyncRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SyncRequest_

typedef ::panda_move::SyncRequest_<std::allocator<void> > SyncRequest;

typedef boost::shared_ptr< ::panda_move::SyncRequest > SyncRequestPtr;
typedef boost::shared_ptr< ::panda_move::SyncRequest const> SyncRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::panda_move::SyncRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::panda_move::SyncRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::panda_move::SyncRequest_<ContainerAllocator1> & lhs, const ::panda_move::SyncRequest_<ContainerAllocator2> & rhs)
{
  return lhs.activated_object == rhs.activated_object;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::panda_move::SyncRequest_<ContainerAllocator1> & lhs, const ::panda_move::SyncRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace panda_move

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::panda_move::SyncRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::panda_move::SyncRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::panda_move::SyncRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::panda_move::SyncRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::panda_move::SyncRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::panda_move::SyncRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::panda_move::SyncRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5ccce85bd5755620147c0f5ba89d5c03";
  }

  static const char* value(const ::panda_move::SyncRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5ccce85bd5755620ULL;
  static const uint64_t static_value2 = 0x147c0f5ba89d5c03ULL;
};

template<class ContainerAllocator>
struct DataType< ::panda_move::SyncRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "panda_move/SyncRequest";
  }

  static const char* value(const ::panda_move::SyncRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::panda_move::SyncRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] activated_object\n"
;
  }

  static const char* value(const ::panda_move::SyncRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::panda_move::SyncRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.activated_object);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SyncRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::panda_move::SyncRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::panda_move::SyncRequest_<ContainerAllocator>& v)
  {
    s << indent << "activated_object[]" << std::endl;
    for (size_t i = 0; i < v.activated_object.size(); ++i)
    {
      s << indent << "  activated_object[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.activated_object[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PANDA_MOVE_MESSAGE_SYNCREQUEST_H