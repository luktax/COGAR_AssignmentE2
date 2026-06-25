// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from go2_stair_interfaces:msg/Go2SafetyStatus.idl
// generated code does not contain a copyright notice

#ifndef GO2_STAIR_INTERFACES__MSG__DETAIL__GO2_SAFETY_STATUS__STRUCT_HPP_
#define GO2_STAIR_INTERFACES__MSG__DETAIL__GO2_SAFETY_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__go2_stair_interfaces__msg__Go2SafetyStatus __attribute__((deprecated))
#else
# define DEPRECATED__go2_stair_interfaces__msg__Go2SafetyStatus __declspec(deprecated)
#endif

namespace go2_stair_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Go2SafetyStatus_
{
  using Type = Go2SafetyStatus_<ContainerAllocator>;

  explicit Go2SafetyStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
      this->reason = "";
      this->roll_error = 0.0f;
      this->pitch_error = 0.0f;
      this->roll_rate = 0.0f;
      this->pitch_rate = 0.0f;
      this->contact_count = 0;
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->foot_contact.begin(), this->foot_contact.end(), false);
      this->state_timeout = false;
      this->attitude_warning = false;
      this->attitude_stop = false;
      this->rate_warning = false;
      this->rate_stop = false;
      this->contact_warning = false;
      this->contact_stop = false;
      this->sport_age_s = 0.0f;
      this->lowstate_age_s = 0.0f;
    }
  }

  explicit Go2SafetyStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    reason(_alloc),
    foot_contact(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
      this->reason = "";
      this->roll_error = 0.0f;
      this->pitch_error = 0.0f;
      this->roll_rate = 0.0f;
      this->pitch_rate = 0.0f;
      this->contact_count = 0;
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->foot_contact.begin(), this->foot_contact.end(), false);
      this->state_timeout = false;
      this->attitude_warning = false;
      this->attitude_stop = false;
      this->rate_warning = false;
      this->rate_stop = false;
      this->contact_warning = false;
      this->contact_stop = false;
      this->sport_age_s = 0.0f;
      this->lowstate_age_s = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _status_type =
    uint8_t;
  _status_type status;
  using _reason_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _reason_type reason;
  using _roll_error_type =
    float;
  _roll_error_type roll_error;
  using _pitch_error_type =
    float;
  _pitch_error_type pitch_error;
  using _roll_rate_type =
    float;
  _roll_rate_type roll_rate;
  using _pitch_rate_type =
    float;
  _pitch_rate_type pitch_rate;
  using _contact_count_type =
    uint8_t;
  _contact_count_type contact_count;
  using _foot_contact_type =
    std::array<bool, 4>;
  _foot_contact_type foot_contact;
  using _state_timeout_type =
    bool;
  _state_timeout_type state_timeout;
  using _attitude_warning_type =
    bool;
  _attitude_warning_type attitude_warning;
  using _attitude_stop_type =
    bool;
  _attitude_stop_type attitude_stop;
  using _rate_warning_type =
    bool;
  _rate_warning_type rate_warning;
  using _rate_stop_type =
    bool;
  _rate_stop_type rate_stop;
  using _contact_warning_type =
    bool;
  _contact_warning_type contact_warning;
  using _contact_stop_type =
    bool;
  _contact_stop_type contact_stop;
  using _sport_age_s_type =
    float;
  _sport_age_s_type sport_age_s;
  using _lowstate_age_s_type =
    float;
  _lowstate_age_s_type lowstate_age_s;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__reason(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->reason = _arg;
    return *this;
  }
  Type & set__roll_error(
    const float & _arg)
  {
    this->roll_error = _arg;
    return *this;
  }
  Type & set__pitch_error(
    const float & _arg)
  {
    this->pitch_error = _arg;
    return *this;
  }
  Type & set__roll_rate(
    const float & _arg)
  {
    this->roll_rate = _arg;
    return *this;
  }
  Type & set__pitch_rate(
    const float & _arg)
  {
    this->pitch_rate = _arg;
    return *this;
  }
  Type & set__contact_count(
    const uint8_t & _arg)
  {
    this->contact_count = _arg;
    return *this;
  }
  Type & set__foot_contact(
    const std::array<bool, 4> & _arg)
  {
    this->foot_contact = _arg;
    return *this;
  }
  Type & set__state_timeout(
    const bool & _arg)
  {
    this->state_timeout = _arg;
    return *this;
  }
  Type & set__attitude_warning(
    const bool & _arg)
  {
    this->attitude_warning = _arg;
    return *this;
  }
  Type & set__attitude_stop(
    const bool & _arg)
  {
    this->attitude_stop = _arg;
    return *this;
  }
  Type & set__rate_warning(
    const bool & _arg)
  {
    this->rate_warning = _arg;
    return *this;
  }
  Type & set__rate_stop(
    const bool & _arg)
  {
    this->rate_stop = _arg;
    return *this;
  }
  Type & set__contact_warning(
    const bool & _arg)
  {
    this->contact_warning = _arg;
    return *this;
  }
  Type & set__contact_stop(
    const bool & _arg)
  {
    this->contact_stop = _arg;
    return *this;
  }
  Type & set__sport_age_s(
    const float & _arg)
  {
    this->sport_age_s = _arg;
    return *this;
  }
  Type & set__lowstate_age_s(
    const float & _arg)
  {
    this->lowstate_age_s = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SAFE =
    0u;
  static constexpr uint8_t WARNING =
    1u;
  static constexpr uint8_t STOP_REQUIRED =
    2u;
  static constexpr uint8_t RECOVERY_REQUIRED =
    3u;

  // pointer types
  using RawPtr =
    go2_stair_interfaces::msg::Go2SafetyStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const go2_stair_interfaces::msg::Go2SafetyStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<go2_stair_interfaces::msg::Go2SafetyStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<go2_stair_interfaces::msg::Go2SafetyStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      go2_stair_interfaces::msg::Go2SafetyStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<go2_stair_interfaces::msg::Go2SafetyStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      go2_stair_interfaces::msg::Go2SafetyStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<go2_stair_interfaces::msg::Go2SafetyStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<go2_stair_interfaces::msg::Go2SafetyStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<go2_stair_interfaces::msg::Go2SafetyStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__go2_stair_interfaces__msg__Go2SafetyStatus
    std::shared_ptr<go2_stair_interfaces::msg::Go2SafetyStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__go2_stair_interfaces__msg__Go2SafetyStatus
    std::shared_ptr<go2_stair_interfaces::msg::Go2SafetyStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Go2SafetyStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->reason != other.reason) {
      return false;
    }
    if (this->roll_error != other.roll_error) {
      return false;
    }
    if (this->pitch_error != other.pitch_error) {
      return false;
    }
    if (this->roll_rate != other.roll_rate) {
      return false;
    }
    if (this->pitch_rate != other.pitch_rate) {
      return false;
    }
    if (this->contact_count != other.contact_count) {
      return false;
    }
    if (this->foot_contact != other.foot_contact) {
      return false;
    }
    if (this->state_timeout != other.state_timeout) {
      return false;
    }
    if (this->attitude_warning != other.attitude_warning) {
      return false;
    }
    if (this->attitude_stop != other.attitude_stop) {
      return false;
    }
    if (this->rate_warning != other.rate_warning) {
      return false;
    }
    if (this->rate_stop != other.rate_stop) {
      return false;
    }
    if (this->contact_warning != other.contact_warning) {
      return false;
    }
    if (this->contact_stop != other.contact_stop) {
      return false;
    }
    if (this->sport_age_s != other.sport_age_s) {
      return false;
    }
    if (this->lowstate_age_s != other.lowstate_age_s) {
      return false;
    }
    return true;
  }
  bool operator!=(const Go2SafetyStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Go2SafetyStatus_

// alias to use template instance with default allocator
using Go2SafetyStatus =
  go2_stair_interfaces::msg::Go2SafetyStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Go2SafetyStatus_<ContainerAllocator>::SAFE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Go2SafetyStatus_<ContainerAllocator>::WARNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Go2SafetyStatus_<ContainerAllocator>::STOP_REQUIRED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Go2SafetyStatus_<ContainerAllocator>::RECOVERY_REQUIRED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace go2_stair_interfaces

#endif  // GO2_STAIR_INTERFACES__MSG__DETAIL__GO2_SAFETY_STATUS__STRUCT_HPP_
