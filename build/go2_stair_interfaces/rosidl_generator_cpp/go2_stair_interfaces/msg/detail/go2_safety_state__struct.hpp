// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from go2_stair_interfaces:msg/Go2SafetyState.idl
// generated code does not contain a copyright notice

#ifndef GO2_STAIR_INTERFACES__MSG__DETAIL__GO2_SAFETY_STATE__STRUCT_HPP_
#define GO2_STAIR_INTERFACES__MSG__DETAIL__GO2_SAFETY_STATE__STRUCT_HPP_

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
# define DEPRECATED__go2_stair_interfaces__msg__Go2SafetyState __attribute__((deprecated))
#else
# define DEPRECATED__go2_stair_interfaces__msg__Go2SafetyState __declspec(deprecated)
#endif

namespace go2_stair_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Go2SafetyState_
{
  using Type = Go2SafetyState_<ContainerAllocator>;

  explicit Go2SafetyState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->yaw = 0.0f;
      this->roll_rate = 0.0f;
      this->pitch_rate = 0.0f;
      this->yaw_rate = 0.0f;
      this->ax = 0.0f;
      this->ay = 0.0f;
      this->az = 0.0f;
      this->vx = 0.0f;
      this->vy = 0.0f;
      this->vz = 0.0f;
      this->body_height = 0.0f;
      this->mode = 0;
      this->gait_type = 0;
      this->foot_raise_height = 0.0f;
      this->sport_error_code = 0ul;
      std::fill<typename std::array<int16_t, 4>::iterator, int16_t>(this->foot_force.begin(), this->foot_force.end(), 0);
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->foot_contact.begin(), this->foot_contact.end(), false);
      std::fill<typename std::array<float, 12>::iterator, float>(this->foot_position_body.begin(), this->foot_position_body.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->foot_speed_body.begin(), this->foot_speed_body.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->joint_position.begin(), this->joint_position.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->joint_velocity.begin(), this->joint_velocity.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->joint_tau_est.begin(), this->joint_tau_est.end(), 0.0f);
      this->sport_received = false;
      this->lowstate_received = false;
      this->sport_age_s = 0.0f;
      this->lowstate_age_s = 0.0f;
    }
  }

  explicit Go2SafetyState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    foot_force(_alloc),
    foot_contact(_alloc),
    foot_position_body(_alloc),
    foot_speed_body(_alloc),
    joint_position(_alloc),
    joint_velocity(_alloc),
    joint_tau_est(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->yaw = 0.0f;
      this->roll_rate = 0.0f;
      this->pitch_rate = 0.0f;
      this->yaw_rate = 0.0f;
      this->ax = 0.0f;
      this->ay = 0.0f;
      this->az = 0.0f;
      this->vx = 0.0f;
      this->vy = 0.0f;
      this->vz = 0.0f;
      this->body_height = 0.0f;
      this->mode = 0;
      this->gait_type = 0;
      this->foot_raise_height = 0.0f;
      this->sport_error_code = 0ul;
      std::fill<typename std::array<int16_t, 4>::iterator, int16_t>(this->foot_force.begin(), this->foot_force.end(), 0);
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->foot_contact.begin(), this->foot_contact.end(), false);
      std::fill<typename std::array<float, 12>::iterator, float>(this->foot_position_body.begin(), this->foot_position_body.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->foot_speed_body.begin(), this->foot_speed_body.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->joint_position.begin(), this->joint_position.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->joint_velocity.begin(), this->joint_velocity.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->joint_tau_est.begin(), this->joint_tau_est.end(), 0.0f);
      this->sport_received = false;
      this->lowstate_received = false;
      this->sport_age_s = 0.0f;
      this->lowstate_age_s = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _roll_type =
    float;
  _roll_type roll;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _roll_rate_type =
    float;
  _roll_rate_type roll_rate;
  using _pitch_rate_type =
    float;
  _pitch_rate_type pitch_rate;
  using _yaw_rate_type =
    float;
  _yaw_rate_type yaw_rate;
  using _ax_type =
    float;
  _ax_type ax;
  using _ay_type =
    float;
  _ay_type ay;
  using _az_type =
    float;
  _az_type az;
  using _vx_type =
    float;
  _vx_type vx;
  using _vy_type =
    float;
  _vy_type vy;
  using _vz_type =
    float;
  _vz_type vz;
  using _body_height_type =
    float;
  _body_height_type body_height;
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _gait_type_type =
    uint8_t;
  _gait_type_type gait_type;
  using _foot_raise_height_type =
    float;
  _foot_raise_height_type foot_raise_height;
  using _sport_error_code_type =
    uint32_t;
  _sport_error_code_type sport_error_code;
  using _foot_force_type =
    std::array<int16_t, 4>;
  _foot_force_type foot_force;
  using _foot_contact_type =
    std::array<bool, 4>;
  _foot_contact_type foot_contact;
  using _foot_position_body_type =
    std::array<float, 12>;
  _foot_position_body_type foot_position_body;
  using _foot_speed_body_type =
    std::array<float, 12>;
  _foot_speed_body_type foot_speed_body;
  using _joint_position_type =
    std::array<float, 12>;
  _joint_position_type joint_position;
  using _joint_velocity_type =
    std::array<float, 12>;
  _joint_velocity_type joint_velocity;
  using _joint_tau_est_type =
    std::array<float, 12>;
  _joint_tau_est_type joint_tau_est;
  using _sport_received_type =
    bool;
  _sport_received_type sport_received;
  using _lowstate_received_type =
    bool;
  _lowstate_received_type lowstate_received;
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
  Type & set__roll(
    const float & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
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
  Type & set__yaw_rate(
    const float & _arg)
  {
    this->yaw_rate = _arg;
    return *this;
  }
  Type & set__ax(
    const float & _arg)
  {
    this->ax = _arg;
    return *this;
  }
  Type & set__ay(
    const float & _arg)
  {
    this->ay = _arg;
    return *this;
  }
  Type & set__az(
    const float & _arg)
  {
    this->az = _arg;
    return *this;
  }
  Type & set__vx(
    const float & _arg)
  {
    this->vx = _arg;
    return *this;
  }
  Type & set__vy(
    const float & _arg)
  {
    this->vy = _arg;
    return *this;
  }
  Type & set__vz(
    const float & _arg)
  {
    this->vz = _arg;
    return *this;
  }
  Type & set__body_height(
    const float & _arg)
  {
    this->body_height = _arg;
    return *this;
  }
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__gait_type(
    const uint8_t & _arg)
  {
    this->gait_type = _arg;
    return *this;
  }
  Type & set__foot_raise_height(
    const float & _arg)
  {
    this->foot_raise_height = _arg;
    return *this;
  }
  Type & set__sport_error_code(
    const uint32_t & _arg)
  {
    this->sport_error_code = _arg;
    return *this;
  }
  Type & set__foot_force(
    const std::array<int16_t, 4> & _arg)
  {
    this->foot_force = _arg;
    return *this;
  }
  Type & set__foot_contact(
    const std::array<bool, 4> & _arg)
  {
    this->foot_contact = _arg;
    return *this;
  }
  Type & set__foot_position_body(
    const std::array<float, 12> & _arg)
  {
    this->foot_position_body = _arg;
    return *this;
  }
  Type & set__foot_speed_body(
    const std::array<float, 12> & _arg)
  {
    this->foot_speed_body = _arg;
    return *this;
  }
  Type & set__joint_position(
    const std::array<float, 12> & _arg)
  {
    this->joint_position = _arg;
    return *this;
  }
  Type & set__joint_velocity(
    const std::array<float, 12> & _arg)
  {
    this->joint_velocity = _arg;
    return *this;
  }
  Type & set__joint_tau_est(
    const std::array<float, 12> & _arg)
  {
    this->joint_tau_est = _arg;
    return *this;
  }
  Type & set__sport_received(
    const bool & _arg)
  {
    this->sport_received = _arg;
    return *this;
  }
  Type & set__lowstate_received(
    const bool & _arg)
  {
    this->lowstate_received = _arg;
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

  // pointer types
  using RawPtr =
    go2_stair_interfaces::msg::Go2SafetyState_<ContainerAllocator> *;
  using ConstRawPtr =
    const go2_stair_interfaces::msg::Go2SafetyState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<go2_stair_interfaces::msg::Go2SafetyState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<go2_stair_interfaces::msg::Go2SafetyState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      go2_stair_interfaces::msg::Go2SafetyState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<go2_stair_interfaces::msg::Go2SafetyState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      go2_stair_interfaces::msg::Go2SafetyState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<go2_stair_interfaces::msg::Go2SafetyState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<go2_stair_interfaces::msg::Go2SafetyState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<go2_stair_interfaces::msg::Go2SafetyState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__go2_stair_interfaces__msg__Go2SafetyState
    std::shared_ptr<go2_stair_interfaces::msg::Go2SafetyState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__go2_stair_interfaces__msg__Go2SafetyState
    std::shared_ptr<go2_stair_interfaces::msg::Go2SafetyState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Go2SafetyState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->roll_rate != other.roll_rate) {
      return false;
    }
    if (this->pitch_rate != other.pitch_rate) {
      return false;
    }
    if (this->yaw_rate != other.yaw_rate) {
      return false;
    }
    if (this->ax != other.ax) {
      return false;
    }
    if (this->ay != other.ay) {
      return false;
    }
    if (this->az != other.az) {
      return false;
    }
    if (this->vx != other.vx) {
      return false;
    }
    if (this->vy != other.vy) {
      return false;
    }
    if (this->vz != other.vz) {
      return false;
    }
    if (this->body_height != other.body_height) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->gait_type != other.gait_type) {
      return false;
    }
    if (this->foot_raise_height != other.foot_raise_height) {
      return false;
    }
    if (this->sport_error_code != other.sport_error_code) {
      return false;
    }
    if (this->foot_force != other.foot_force) {
      return false;
    }
    if (this->foot_contact != other.foot_contact) {
      return false;
    }
    if (this->foot_position_body != other.foot_position_body) {
      return false;
    }
    if (this->foot_speed_body != other.foot_speed_body) {
      return false;
    }
    if (this->joint_position != other.joint_position) {
      return false;
    }
    if (this->joint_velocity != other.joint_velocity) {
      return false;
    }
    if (this->joint_tau_est != other.joint_tau_est) {
      return false;
    }
    if (this->sport_received != other.sport_received) {
      return false;
    }
    if (this->lowstate_received != other.lowstate_received) {
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
  bool operator!=(const Go2SafetyState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Go2SafetyState_

// alias to use template instance with default allocator
using Go2SafetyState =
  go2_stair_interfaces::msg::Go2SafetyState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace go2_stair_interfaces

#endif  // GO2_STAIR_INTERFACES__MSG__DETAIL__GO2_SAFETY_STATE__STRUCT_HPP_
