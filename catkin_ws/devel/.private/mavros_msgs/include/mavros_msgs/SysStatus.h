// Generated by gencpp from file mavros_msgs/SysStatus.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_SYSSTATUS_H
#define MAVROS_MSGS_MESSAGE_SYSSTATUS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace mavros_msgs
{
template <class ContainerAllocator>
struct SysStatus_
{
  typedef SysStatus_<ContainerAllocator> Type;

  SysStatus_()
    : header()
    , sensors_present(0)
    , sensors_enabled(0)
    , sensors_health(0)
    , load(0)
    , voltage_battery(0)
    , current_battery(0)
    , battery_remaining(0)
    , drop_rate_comm(0)
    , errors_comm(0)
    , errors_count1(0)
    , errors_count2(0)
    , errors_count3(0)
    , errors_count4(0)  {
    }
  SysStatus_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , sensors_present(0)
    , sensors_enabled(0)
    , sensors_health(0)
    , load(0)
    , voltage_battery(0)
    , current_battery(0)
    , battery_remaining(0)
    , drop_rate_comm(0)
    , errors_comm(0)
    , errors_count1(0)
    , errors_count2(0)
    , errors_count3(0)
    , errors_count4(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint32_t _sensors_present_type;
  _sensors_present_type sensors_present;

   typedef uint32_t _sensors_enabled_type;
  _sensors_enabled_type sensors_enabled;

   typedef uint32_t _sensors_health_type;
  _sensors_health_type sensors_health;

   typedef uint16_t _load_type;
  _load_type load;

   typedef uint16_t _voltage_battery_type;
  _voltage_battery_type voltage_battery;

   typedef int16_t _current_battery_type;
  _current_battery_type current_battery;

   typedef int8_t _battery_remaining_type;
  _battery_remaining_type battery_remaining;

   typedef uint16_t _drop_rate_comm_type;
  _drop_rate_comm_type drop_rate_comm;

   typedef uint16_t _errors_comm_type;
  _errors_comm_type errors_comm;

   typedef uint16_t _errors_count1_type;
  _errors_count1_type errors_count1;

   typedef uint16_t _errors_count2_type;
  _errors_count2_type errors_count2;

   typedef uint16_t _errors_count3_type;
  _errors_count3_type errors_count3;

   typedef uint16_t _errors_count4_type;
  _errors_count4_type errors_count4;





  typedef boost::shared_ptr< ::mavros_msgs::SysStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::SysStatus_<ContainerAllocator> const> ConstPtr;

}; // struct SysStatus_

typedef ::mavros_msgs::SysStatus_<std::allocator<void> > SysStatus;

typedef boost::shared_ptr< ::mavros_msgs::SysStatus > SysStatusPtr;
typedef boost::shared_ptr< ::mavros_msgs::SysStatus const> SysStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::SysStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::SysStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mavros_msgs::SysStatus_<ContainerAllocator1> & lhs, const ::mavros_msgs::SysStatus_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.sensors_present == rhs.sensors_present &&
    lhs.sensors_enabled == rhs.sensors_enabled &&
    lhs.sensors_health == rhs.sensors_health &&
    lhs.load == rhs.load &&
    lhs.voltage_battery == rhs.voltage_battery &&
    lhs.current_battery == rhs.current_battery &&
    lhs.battery_remaining == rhs.battery_remaining &&
    lhs.drop_rate_comm == rhs.drop_rate_comm &&
    lhs.errors_comm == rhs.errors_comm &&
    lhs.errors_count1 == rhs.errors_count1 &&
    lhs.errors_count2 == rhs.errors_count2 &&
    lhs.errors_count3 == rhs.errors_count3 &&
    lhs.errors_count4 == rhs.errors_count4;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mavros_msgs::SysStatus_<ContainerAllocator1> & lhs, const ::mavros_msgs::SysStatus_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::SysStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::SysStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::SysStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::SysStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::SysStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::SysStatus_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::SysStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4039be26d76b32d20c569c754da6e25c";
  }

  static const char* value(const ::mavros_msgs::SysStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4039be26d76b32d2ULL;
  static const uint64_t static_value2 = 0x0c569c754da6e25cULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::SysStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/SysStatus";
  }

  static const char* value(const ::mavros_msgs::SysStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::SysStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"\n"
"uint32 sensors_present\n"
"uint32 sensors_enabled\n"
"uint32 sensors_health\n"
"uint16 load\n"
"uint16 voltage_battery\n"
"int16 current_battery\n"
"int8 battery_remaining\n"
"uint16 drop_rate_comm\n"
"uint16 errors_comm\n"
"uint16 errors_count1\n"
"uint16 errors_count2\n"
"uint16 errors_count3\n"
"uint16 errors_count4\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::mavros_msgs::SysStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::SysStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.sensors_present);
      stream.next(m.sensors_enabled);
      stream.next(m.sensors_health);
      stream.next(m.load);
      stream.next(m.voltage_battery);
      stream.next(m.current_battery);
      stream.next(m.battery_remaining);
      stream.next(m.drop_rate_comm);
      stream.next(m.errors_comm);
      stream.next(m.errors_count1);
      stream.next(m.errors_count2);
      stream.next(m.errors_count3);
      stream.next(m.errors_count4);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SysStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::SysStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::SysStatus_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "sensors_present: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.sensors_present);
    s << indent << "sensors_enabled: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.sensors_enabled);
    s << indent << "sensors_health: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.sensors_health);
    s << indent << "load: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.load);
    s << indent << "voltage_battery: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.voltage_battery);
    s << indent << "current_battery: ";
    Printer<int16_t>::stream(s, indent + "  ", v.current_battery);
    s << indent << "battery_remaining: ";
    Printer<int8_t>::stream(s, indent + "  ", v.battery_remaining);
    s << indent << "drop_rate_comm: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.drop_rate_comm);
    s << indent << "errors_comm: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.errors_comm);
    s << indent << "errors_count1: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.errors_count1);
    s << indent << "errors_count2: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.errors_count2);
    s << indent << "errors_count3: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.errors_count3);
    s << indent << "errors_count4: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.errors_count4);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_SYSSTATUS_H