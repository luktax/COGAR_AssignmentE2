// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from go2_stair_interfaces:msg/Go2SafetyState.idl
// generated code does not contain a copyright notice

#ifndef GO2_STAIR_INTERFACES__MSG__DETAIL__GO2_SAFETY_STATE__BUILDER_HPP_
#define GO2_STAIR_INTERFACES__MSG__DETAIL__GO2_SAFETY_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "go2_stair_interfaces/msg/detail/go2_safety_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace go2_stair_interfaces
{

namespace msg
{

namespace builder
{

class Init_Go2SafetyState_lowstate_age_s
{
public:
  explicit Init_Go2SafetyState_lowstate_age_s(::go2_stair_interfaces::msg::Go2SafetyState & msg)
  : msg_(msg)
  {}
  ::go2_stair_interfaces::msg::Go2SafetyState lowstate_age_s(::go2_stair_interfaces::msg::Go2SafetyState::_lowstate_age_s_type arg)
  {
    msg_.lowstate_age_s = std::move(arg);
    return std::move(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyState msg_;
};

class Init_Go2SafetyState_sport_age_s
{
public:
  explicit Init_Go2SafetyState_sport_age_s(::go2_stair_interfaces::msg::Go2SafetyState & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyState_lowstate_age_s sport_age_s(::go2_stair_interfaces::msg::Go2SafetyState::_sport_age_s_type arg)
  {
    msg_.sport_age_s = std::move(arg);
    return Init_Go2SafetyState_lowstate_age_s(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyState msg_;
};

class Init_Go2SafetyState_lowstate_received
{
public:
  explicit Init_Go2SafetyState_lowstate_received(::go2_stair_interfaces::msg::Go2SafetyState & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyState_sport_age_s lowstate_received(::go2_stair_interfaces::msg::Go2SafetyState::_lowstate_received_type arg)
  {
    msg_.lowstate_received = std::move(arg);
    return Init_Go2SafetyState_sport_age_s(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyState msg_;
};

class Init_Go2SafetyState_sport_received
{
public:
  explicit Init_Go2SafetyState_sport_received(::go2_stair_interfaces::msg::Go2SafetyState & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyState_lowstate_received sport_received(::go2_stair_interfaces::msg::Go2SafetyState::_sport_received_type arg)
  {
    msg_.sport_received = std::move(arg);
    return Init_Go2SafetyState_lowstate_received(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyState msg_;
};

class Init_Go2SafetyState_joint_tau_est
{
public:
  explicit Init_Go2SafetyState_joint_tau_est(::go2_stair_interfaces::msg::Go2SafetyState & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyState_sport_received joint_tau_est(::go2_stair_interfaces::msg::Go2SafetyState::_joint_tau_est_type arg)
  {
    msg_.joint_tau_est = std::move(arg);
    return Init_Go2SafetyState_sport_received(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyState msg_;
};

class Init_Go2SafetyState_joint_velocity
{
public:
  explicit Init_Go2SafetyState_joint_velocity(::go2_stair_interfaces::msg::Go2SafetyState & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyState_joint_tau_est joint_velocity(::go2_stair_interfaces::msg::Go2SafetyState::_joint_velocity_type arg)
  {
    msg_.joint_velocity = std::move(arg);
    return Init_Go2SafetyState_joint_tau_est(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyState msg_;
};

class Init_Go2SafetyState_joint_position
{
public:
  explicit Init_Go2SafetyState_joint_position(::go2_stair_interfaces::msg::Go2SafetyState & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyState_joint_velocity joint_position(::go2_stair_interfaces::msg::Go2SafetyState::_joint_position_type arg)
  {
    msg_.joint_position = std::move(arg);
    return Init_Go2SafetyState_joint_velocity(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyState msg_;
};

class Init_Go2SafetyState_foot_speed_body
{
public:
  explicit Init_Go2SafetyState_foot_speed_body(::go2_stair_interfaces::msg::Go2SafetyState & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyState_joint_position foot_speed_body(::go2_stair_interfaces::msg::Go2SafetyState::_foot_speed_body_type arg)
  {
    msg_.foot_speed_body = std::move(arg);
    return Init_Go2SafetyState_joint_position(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyState msg_;
};

class Init_Go2SafetyState_foot_position_body
{
public:
  explicit Init_Go2SafetyState_foot_position_body(::go2_stair_interfaces::msg::Go2SafetyState & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyState_foot_speed_body foot_position_body(::go2_stair_interfaces::msg::Go2SafetyState::_foot_position_body_type arg)
  {
    msg_.foot_position_body = std::move(arg);
    return Init_Go2SafetyState_foot_speed_body(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyState msg_;
};

class Init_Go2SafetyState_foot_contact
{
public:
  explicit Init_Go2SafetyState_foot_contact(::go2_stair_interfaces::msg::Go2SafetyState & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyState_foot_position_body foot_contact(::go2_stair_interfaces::msg::Go2SafetyState::_foot_contact_type arg)
  {
    msg_.foot_contact = std::move(arg);
    return Init_Go2SafetyState_foot_position_body(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyState msg_;
};

class Init_Go2SafetyState_foot_force
{
public:
  explicit Init_Go2SafetyState_foot_force(::go2_stair_interfaces::msg::Go2SafetyState & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyState_foot_contact foot_force(::go2_stair_interfaces::msg::Go2SafetyState::_foot_force_type arg)
  {
    msg_.foot_force = std::move(arg);
    return Init_Go2SafetyState_foot_contact(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyState msg_;
};

class Init_Go2SafetyState_sport_error_code
{
public:
  explicit Init_Go2SafetyState_sport_error_code(::go2_stair_interfaces::msg::Go2SafetyState & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyState_foot_force sport_error_code(::go2_stair_interfaces::msg::Go2SafetyState::_sport_error_code_type arg)
  {
    msg_.sport_error_code = std::move(arg);
    return Init_Go2SafetyState_foot_force(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyState msg_;
};

class Init_Go2SafetyState_foot_raise_height
{
public:
  explicit Init_Go2SafetyState_foot_raise_height(::go2_stair_interfaces::msg::Go2SafetyState & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyState_sport_error_code foot_raise_height(::go2_stair_interfaces::msg::Go2SafetyState::_foot_raise_height_type arg)
  {
    msg_.foot_raise_height = std::move(arg);
    return Init_Go2SafetyState_sport_error_code(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyState msg_;
};

class Init_Go2SafetyState_gait_type
{
public:
  explicit Init_Go2SafetyState_gait_type(::go2_stair_interfaces::msg::Go2SafetyState & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyState_foot_raise_height gait_type(::go2_stair_interfaces::msg::Go2SafetyState::_gait_type_type arg)
  {
    msg_.gait_type = std::move(arg);
    return Init_Go2SafetyState_foot_raise_height(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyState msg_;
};

class Init_Go2SafetyState_mode
{
public:
  explicit Init_Go2SafetyState_mode(::go2_stair_interfaces::msg::Go2SafetyState & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyState_gait_type mode(::go2_stair_interfaces::msg::Go2SafetyState::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_Go2SafetyState_gait_type(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyState msg_;
};

class Init_Go2SafetyState_body_height
{
public:
  explicit Init_Go2SafetyState_body_height(::go2_stair_interfaces::msg::Go2SafetyState & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyState_mode body_height(::go2_stair_interfaces::msg::Go2SafetyState::_body_height_type arg)
  {
    msg_.body_height = std::move(arg);
    return Init_Go2SafetyState_mode(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyState msg_;
};

class Init_Go2SafetyState_vz
{
public:
  explicit Init_Go2SafetyState_vz(::go2_stair_interfaces::msg::Go2SafetyState & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyState_body_height vz(::go2_stair_interfaces::msg::Go2SafetyState::_vz_type arg)
  {
    msg_.vz = std::move(arg);
    return Init_Go2SafetyState_body_height(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyState msg_;
};

class Init_Go2SafetyState_vy
{
public:
  explicit Init_Go2SafetyState_vy(::go2_stair_interfaces::msg::Go2SafetyState & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyState_vz vy(::go2_stair_interfaces::msg::Go2SafetyState::_vy_type arg)
  {
    msg_.vy = std::move(arg);
    return Init_Go2SafetyState_vz(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyState msg_;
};

class Init_Go2SafetyState_vx
{
public:
  explicit Init_Go2SafetyState_vx(::go2_stair_interfaces::msg::Go2SafetyState & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyState_vy vx(::go2_stair_interfaces::msg::Go2SafetyState::_vx_type arg)
  {
    msg_.vx = std::move(arg);
    return Init_Go2SafetyState_vy(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyState msg_;
};

class Init_Go2SafetyState_az
{
public:
  explicit Init_Go2SafetyState_az(::go2_stair_interfaces::msg::Go2SafetyState & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyState_vx az(::go2_stair_interfaces::msg::Go2SafetyState::_az_type arg)
  {
    msg_.az = std::move(arg);
    return Init_Go2SafetyState_vx(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyState msg_;
};

class Init_Go2SafetyState_ay
{
public:
  explicit Init_Go2SafetyState_ay(::go2_stair_interfaces::msg::Go2SafetyState & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyState_az ay(::go2_stair_interfaces::msg::Go2SafetyState::_ay_type arg)
  {
    msg_.ay = std::move(arg);
    return Init_Go2SafetyState_az(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyState msg_;
};

class Init_Go2SafetyState_ax
{
public:
  explicit Init_Go2SafetyState_ax(::go2_stair_interfaces::msg::Go2SafetyState & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyState_ay ax(::go2_stair_interfaces::msg::Go2SafetyState::_ax_type arg)
  {
    msg_.ax = std::move(arg);
    return Init_Go2SafetyState_ay(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyState msg_;
};

class Init_Go2SafetyState_yaw_rate
{
public:
  explicit Init_Go2SafetyState_yaw_rate(::go2_stair_interfaces::msg::Go2SafetyState & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyState_ax yaw_rate(::go2_stair_interfaces::msg::Go2SafetyState::_yaw_rate_type arg)
  {
    msg_.yaw_rate = std::move(arg);
    return Init_Go2SafetyState_ax(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyState msg_;
};

class Init_Go2SafetyState_pitch_rate
{
public:
  explicit Init_Go2SafetyState_pitch_rate(::go2_stair_interfaces::msg::Go2SafetyState & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyState_yaw_rate pitch_rate(::go2_stair_interfaces::msg::Go2SafetyState::_pitch_rate_type arg)
  {
    msg_.pitch_rate = std::move(arg);
    return Init_Go2SafetyState_yaw_rate(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyState msg_;
};

class Init_Go2SafetyState_roll_rate
{
public:
  explicit Init_Go2SafetyState_roll_rate(::go2_stair_interfaces::msg::Go2SafetyState & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyState_pitch_rate roll_rate(::go2_stair_interfaces::msg::Go2SafetyState::_roll_rate_type arg)
  {
    msg_.roll_rate = std::move(arg);
    return Init_Go2SafetyState_pitch_rate(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyState msg_;
};

class Init_Go2SafetyState_yaw
{
public:
  explicit Init_Go2SafetyState_yaw(::go2_stair_interfaces::msg::Go2SafetyState & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyState_roll_rate yaw(::go2_stair_interfaces::msg::Go2SafetyState::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_Go2SafetyState_roll_rate(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyState msg_;
};

class Init_Go2SafetyState_pitch
{
public:
  explicit Init_Go2SafetyState_pitch(::go2_stair_interfaces::msg::Go2SafetyState & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyState_yaw pitch(::go2_stair_interfaces::msg::Go2SafetyState::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_Go2SafetyState_yaw(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyState msg_;
};

class Init_Go2SafetyState_roll
{
public:
  explicit Init_Go2SafetyState_roll(::go2_stair_interfaces::msg::Go2SafetyState & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyState_pitch roll(::go2_stair_interfaces::msg::Go2SafetyState::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_Go2SafetyState_pitch(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyState msg_;
};

class Init_Go2SafetyState_header
{
public:
  Init_Go2SafetyState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Go2SafetyState_roll header(::go2_stair_interfaces::msg::Go2SafetyState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Go2SafetyState_roll(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::go2_stair_interfaces::msg::Go2SafetyState>()
{
  return go2_stair_interfaces::msg::builder::Init_Go2SafetyState_header();
}

}  // namespace go2_stair_interfaces

#endif  // GO2_STAIR_INTERFACES__MSG__DETAIL__GO2_SAFETY_STATE__BUILDER_HPP_
