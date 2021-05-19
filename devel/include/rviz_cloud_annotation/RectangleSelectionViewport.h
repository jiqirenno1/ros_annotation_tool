// Generated by gencpp from file rviz_cloud_annotation/RectangleSelectionViewport.msg
// DO NOT EDIT!


#ifndef RVIZ_CLOUD_ANNOTATION_MESSAGE_RECTANGLESELECTIONVIEWPORT_H
#define RVIZ_CLOUD_ANNOTATION_MESSAGE_RECTANGLESELECTIONVIEWPORT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace rviz_cloud_annotation
{
template <class ContainerAllocator>
struct RectangleSelectionViewport_
{
  typedef RectangleSelectionViewport_<ContainerAllocator> Type;

  RectangleSelectionViewport_()
    : start_x(0)
    , start_y(0)
    , end_x(0)
    , end_y(0)
    , viewport_height(0)
    , viewport_width(0)
    , focal_length(0.0)
    , projection_matrix()
    , camera_pose()
    , is_deep_selection(false)
    , polyline_x()
    , polyline_y()  {
      projection_matrix.assign(0.0);
  }
  RectangleSelectionViewport_(const ContainerAllocator& _alloc)
    : start_x(0)
    , start_y(0)
    , end_x(0)
    , end_y(0)
    , viewport_height(0)
    , viewport_width(0)
    , focal_length(0.0)
    , projection_matrix()
    , camera_pose(_alloc)
    , is_deep_selection(false)
    , polyline_x(_alloc)
    , polyline_y(_alloc)  {
  (void)_alloc;
      projection_matrix.assign(0.0);
  }



   typedef uint32_t _start_x_type;
  _start_x_type start_x;

   typedef uint32_t _start_y_type;
  _start_y_type start_y;

   typedef uint32_t _end_x_type;
  _end_x_type end_x;

   typedef uint32_t _end_y_type;
  _end_y_type end_y;

   typedef uint32_t _viewport_height_type;
  _viewport_height_type viewport_height;

   typedef uint32_t _viewport_width_type;
  _viewport_width_type viewport_width;

   typedef float _focal_length_type;
  _focal_length_type focal_length;

   typedef boost::array<float, 16>  _projection_matrix_type;
  _projection_matrix_type projection_matrix;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _camera_pose_type;
  _camera_pose_type camera_pose;

   typedef uint8_t _is_deep_selection_type;
  _is_deep_selection_type is_deep_selection;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _polyline_x_type;
  _polyline_x_type polyline_x;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _polyline_y_type;
  _polyline_y_type polyline_y;





  typedef boost::shared_ptr< ::rviz_cloud_annotation::RectangleSelectionViewport_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rviz_cloud_annotation::RectangleSelectionViewport_<ContainerAllocator> const> ConstPtr;

}; // struct RectangleSelectionViewport_

typedef ::rviz_cloud_annotation::RectangleSelectionViewport_<std::allocator<void> > RectangleSelectionViewport;

typedef boost::shared_ptr< ::rviz_cloud_annotation::RectangleSelectionViewport > RectangleSelectionViewportPtr;
typedef boost::shared_ptr< ::rviz_cloud_annotation::RectangleSelectionViewport const> RectangleSelectionViewportConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rviz_cloud_annotation::RectangleSelectionViewport_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rviz_cloud_annotation::RectangleSelectionViewport_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rviz_cloud_annotation::RectangleSelectionViewport_<ContainerAllocator1> & lhs, const ::rviz_cloud_annotation::RectangleSelectionViewport_<ContainerAllocator2> & rhs)
{
  return lhs.start_x == rhs.start_x &&
    lhs.start_y == rhs.start_y &&
    lhs.end_x == rhs.end_x &&
    lhs.end_y == rhs.end_y &&
    lhs.viewport_height == rhs.viewport_height &&
    lhs.viewport_width == rhs.viewport_width &&
    lhs.focal_length == rhs.focal_length &&
    lhs.projection_matrix == rhs.projection_matrix &&
    lhs.camera_pose == rhs.camera_pose &&
    lhs.is_deep_selection == rhs.is_deep_selection &&
    lhs.polyline_x == rhs.polyline_x &&
    lhs.polyline_y == rhs.polyline_y;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rviz_cloud_annotation::RectangleSelectionViewport_<ContainerAllocator1> & lhs, const ::rviz_cloud_annotation::RectangleSelectionViewport_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rviz_cloud_annotation

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::rviz_cloud_annotation::RectangleSelectionViewport_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rviz_cloud_annotation::RectangleSelectionViewport_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rviz_cloud_annotation::RectangleSelectionViewport_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rviz_cloud_annotation::RectangleSelectionViewport_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rviz_cloud_annotation::RectangleSelectionViewport_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rviz_cloud_annotation::RectangleSelectionViewport_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rviz_cloud_annotation::RectangleSelectionViewport_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6a3c9a6075ac79ec934409411b5e99c9";
  }

  static const char* value(const ::rviz_cloud_annotation::RectangleSelectionViewport_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6a3c9a6075ac79ecULL;
  static const uint64_t static_value2 = 0x934409411b5e99c9ULL;
};

template<class ContainerAllocator>
struct DataType< ::rviz_cloud_annotation::RectangleSelectionViewport_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rviz_cloud_annotation/RectangleSelectionViewport";
  }

  static const char* value(const ::rviz_cloud_annotation::RectangleSelectionViewport_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rviz_cloud_annotation::RectangleSelectionViewport_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 start_x\n"
"uint32 start_y\n"
"uint32 end_x\n"
"uint32 end_y\n"
"\n"
"uint32 viewport_height\n"
"uint32 viewport_width\n"
"\n"
"float32 focal_length\n"
"\n"
"float32[16] projection_matrix\n"
"geometry_msgs/Pose camera_pose\n"
"\n"
"bool is_deep_selection\n"
"\n"
"int32[] polyline_x\n"
"int32[] polyline_y\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::rviz_cloud_annotation::RectangleSelectionViewport_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rviz_cloud_annotation::RectangleSelectionViewport_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.start_x);
      stream.next(m.start_y);
      stream.next(m.end_x);
      stream.next(m.end_y);
      stream.next(m.viewport_height);
      stream.next(m.viewport_width);
      stream.next(m.focal_length);
      stream.next(m.projection_matrix);
      stream.next(m.camera_pose);
      stream.next(m.is_deep_selection);
      stream.next(m.polyline_x);
      stream.next(m.polyline_y);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RectangleSelectionViewport_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rviz_cloud_annotation::RectangleSelectionViewport_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rviz_cloud_annotation::RectangleSelectionViewport_<ContainerAllocator>& v)
  {
    s << indent << "start_x: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.start_x);
    s << indent << "start_y: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.start_y);
    s << indent << "end_x: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.end_x);
    s << indent << "end_y: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.end_y);
    s << indent << "viewport_height: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.viewport_height);
    s << indent << "viewport_width: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.viewport_width);
    s << indent << "focal_length: ";
    Printer<float>::stream(s, indent + "  ", v.focal_length);
    s << indent << "projection_matrix[]" << std::endl;
    for (size_t i = 0; i < v.projection_matrix.size(); ++i)
    {
      s << indent << "  projection_matrix[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.projection_matrix[i]);
    }
    s << indent << "camera_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.camera_pose);
    s << indent << "is_deep_selection: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_deep_selection);
    s << indent << "polyline_x[]" << std::endl;
    for (size_t i = 0; i < v.polyline_x.size(); ++i)
    {
      s << indent << "  polyline_x[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.polyline_x[i]);
    }
    s << indent << "polyline_y[]" << std::endl;
    for (size_t i = 0; i < v.polyline_y.size(); ++i)
    {
      s << indent << "  polyline_y[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.polyline_y[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // RVIZ_CLOUD_ANNOTATION_MESSAGE_RECTANGLESELECTIONVIEWPORT_H
