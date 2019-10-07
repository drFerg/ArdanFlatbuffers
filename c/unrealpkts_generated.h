// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_UNREALPKTS_UNREALCOOJAMSG_H_
#define FLATBUFFERS_GENERATED_UNREALPKTS_UNREALCOOJAMSG_H_

#include "flatbuffers/flatbuffers.h"

namespace UnrealCoojaMsg {

struct Vec3;

struct RadioDuty;

struct RadioState;

struct Message;

enum MsgType {
  MsgType_SIMSTATE = 1,
  MsgType_LED = 2,
  MsgType_BEEPER = 3,
  MsgType_LOCATION = 4,
  MsgType_RADIO = 5,
  MsgType_RADIO_STATE = 6,
  MsgType_RADIO_DUTY = 7,
  MsgType_BUTTON = 8,
  MsgType_PIR = 9,
  MsgType_FIRE = 10,
  MsgType_TEMP = 11,
  MsgType_SMOKE = 12,
  MsgType_TARGET = 13,
  MsgType_MIN = MsgType_SIMSTATE,
  MsgType_MAX = MsgType_TARGET
};

inline const char **EnumNamesMsgType() {
  static const char *names[] = {
    "SIMSTATE",
    "LED",
    "BEEPER",
    "LOCATION",
    "RADIO",
    "RADIO_STATE",
    "RADIO_DUTY",
    "BUTTON",
    "PIR",
    "FIRE",
    "TEMP",
    "SMOKE",
    "TARGET",
    nullptr
  };
  return names;
}

inline const char *EnumNameMsgType(MsgType e) {
  const size_t index = static_cast<int>(e) - static_cast<int>(MsgType_SIMSTATE);
  return EnumNamesMsgType()[index];
}

enum SimState {
  SimState_PAUSE = 0,
  SimState_RESUME = 1,
  SimState_NORMAL = 2,
  SimState_SLOW = 3,
  SimState_DOUBLE = 4,
  SimState_TRIPLE = 5,
  SimState_MIN = SimState_PAUSE,
  SimState_MAX = SimState_TRIPLE
};

inline const char **EnumNamesSimState() {
  static const char *names[] = {
    "PAUSE",
    "RESUME",
    "NORMAL",
    "SLOW",
    "DOUBLE",
    "TRIPLE",
    nullptr
  };
  return names;
}

inline const char *EnumNameSimState(SimState e) {
  const size_t index = static_cast<int>(e);
  return EnumNamesSimState()[index];
}

MANUALLY_ALIGNED_STRUCT(4) Vec3 FLATBUFFERS_FINAL_CLASS {
 private:
  float x_;
  float y_;
  float z_;

 public:
  Vec3() {
    memset(this, 0, sizeof(Vec3));
  }
  Vec3(const Vec3 &_o) {
    memcpy(this, &_o, sizeof(Vec3));
  }
  Vec3(float _x, float _y, float _z)
      : x_(flatbuffers::EndianScalar(_x)),
        y_(flatbuffers::EndianScalar(_y)),
        z_(flatbuffers::EndianScalar(_z)) {
  }
  float x() const {
    return flatbuffers::EndianScalar(x_);
  }
  float y() const {
    return flatbuffers::EndianScalar(y_);
  }
  float z() const {
    return flatbuffers::EndianScalar(z_);
  }
};
STRUCT_END(Vec3, 12);

MANUALLY_ALIGNED_STRUCT(8) RadioDuty FLATBUFFERS_FINAL_CLASS {
 private:
  double radioOnRatio_;
  double radioTxRatio_;
  double radioRxRatio_;
  double radioInterferedRatio_;

 public:
  RadioDuty() {
    memset(this, 0, sizeof(RadioDuty));
  }
  RadioDuty(const RadioDuty &_o) {
    memcpy(this, &_o, sizeof(RadioDuty));
  }
  RadioDuty(double _radioOnRatio, double _radioTxRatio, double _radioRxRatio, double _radioInterferedRatio)
      : radioOnRatio_(flatbuffers::EndianScalar(_radioOnRatio)),
        radioTxRatio_(flatbuffers::EndianScalar(_radioTxRatio)),
        radioRxRatio_(flatbuffers::EndianScalar(_radioRxRatio)),
        radioInterferedRatio_(flatbuffers::EndianScalar(_radioInterferedRatio)) {
  }
  double radioOnRatio() const {
    return flatbuffers::EndianScalar(radioOnRatio_);
  }
  double radioTxRatio() const {
    return flatbuffers::EndianScalar(radioTxRatio_);
  }
  double radioRxRatio() const {
    return flatbuffers::EndianScalar(radioRxRatio_);
  }
  double radioInterferedRatio() const {
    return flatbuffers::EndianScalar(radioInterferedRatio_);
  }
};
STRUCT_END(RadioDuty, 32);

MANUALLY_ALIGNED_STRUCT(8) RadioState FLATBUFFERS_FINAL_CLASS {
 private:
  uint8_t radioOn_;
  int8_t padding0__;  int16_t padding1__;  int32_t padding2__;
  double signalStrength_;
  double outputPower_;

 public:
  RadioState() {
    memset(this, 0, sizeof(RadioState));
  }
  RadioState(const RadioState &_o) {
    memcpy(this, &_o, sizeof(RadioState));
  }
  RadioState(bool _radioOn, double _signalStrength, double _outputPower)
      : radioOn_(flatbuffers::EndianScalar(static_cast<uint8_t>(_radioOn))),
        padding0__(0),
        padding1__(0),
        padding2__(0),
        signalStrength_(flatbuffers::EndianScalar(_signalStrength)),
        outputPower_(flatbuffers::EndianScalar(_outputPower)) {
    (void)padding0__;    (void)padding1__;    (void)padding2__;
  }
  bool radioOn() const {
    return flatbuffers::EndianScalar(radioOn_) != 0;
  }
  double signalStrength() const {
    return flatbuffers::EndianScalar(signalStrength_);
  }
  double outputPower() const {
    return flatbuffers::EndianScalar(outputPower_);
  }
};
STRUCT_END(RadioState, 24);

struct Message FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_TYPE = 4,
    VT_SIMSTATE = 6,
    VT_ID = 8,
    VT_LOCATION = 10,
    VT_NODE = 12,
    VT_RCVD = 14,
    VT_LED = 16,
    VT_RADIOSTATE = 18,
    VT_TARGET = 20
  };
  int32_t type() const {
    return GetField<int32_t>(VT_TYPE, 0);
  }
  int32_t simState() const {
    return GetField<int32_t>(VT_SIMSTATE, 0);
  }
  int32_t id() const {
    return GetField<int32_t>(VT_ID, 0);
  }
  const Vec3 *location() const {
    return GetStruct<const Vec3 *>(VT_LOCATION);
  }
  const flatbuffers::Vector<const RadioDuty *> *node() const {
    return GetPointer<const flatbuffers::Vector<const RadioDuty *> *>(VT_NODE);
  }
  const flatbuffers::Vector<int32_t> *rcvd() const {
    return GetPointer<const flatbuffers::Vector<int32_t> *>(VT_RCVD);
  }
  const flatbuffers::Vector<int32_t> *led() const {
    return GetPointer<const flatbuffers::Vector<int32_t> *>(VT_LED);
  }
  const RadioState *radioState() const {
    return GetStruct<const RadioState *>(VT_RADIOSTATE);
  }
  int32_t target() const {
    return GetField<int32_t>(VT_TARGET, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_TYPE) &&
           VerifyField<int32_t>(verifier, VT_SIMSTATE) &&
           VerifyField<int32_t>(verifier, VT_ID) &&
           VerifyField<Vec3>(verifier, VT_LOCATION) &&
           VerifyOffset(verifier, VT_NODE) &&
           verifier.Verify(node()) &&
           VerifyOffset(verifier, VT_RCVD) &&
           verifier.Verify(rcvd()) &&
           VerifyOffset(verifier, VT_LED) &&
           verifier.Verify(led()) &&
           VerifyField<RadioState>(verifier, VT_RADIOSTATE) &&
           VerifyField<int32_t>(verifier, VT_TARGET) &&
           verifier.EndTable();
  }
};

struct MessageBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_type(int32_t type) {
    fbb_.AddElement<int32_t>(Message::VT_TYPE, type, 0);
  }
  void add_simState(int32_t simState) {
    fbb_.AddElement<int32_t>(Message::VT_SIMSTATE, simState, 0);
  }
  void add_id(int32_t id) {
    fbb_.AddElement<int32_t>(Message::VT_ID, id, 0);
  }
  void add_location(const Vec3 *location) {
    fbb_.AddStruct(Message::VT_LOCATION, location);
  }
  void add_node(flatbuffers::Offset<flatbuffers::Vector<const RadioDuty *>> node) {
    fbb_.AddOffset(Message::VT_NODE, node);
  }
  void add_rcvd(flatbuffers::Offset<flatbuffers::Vector<int32_t>> rcvd) {
    fbb_.AddOffset(Message::VT_RCVD, rcvd);
  }
  void add_led(flatbuffers::Offset<flatbuffers::Vector<int32_t>> led) {
    fbb_.AddOffset(Message::VT_LED, led);
  }
  void add_radioState(const RadioState *radioState) {
    fbb_.AddStruct(Message::VT_RADIOSTATE, radioState);
  }
  void add_target(int32_t target) {
    fbb_.AddElement<int32_t>(Message::VT_TARGET, target, 0);
  }
  MessageBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  MessageBuilder &operator=(const MessageBuilder &);
  flatbuffers::Offset<Message> Finish() {
    const auto end = fbb_.EndTable(start_, 9);
    auto o = flatbuffers::Offset<Message>(end);
    return o;
  }
};

inline flatbuffers::Offset<Message> CreateMessage(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t type = 0,
    int32_t simState = 0,
    int32_t id = 0,
    const Vec3 *location = 0,
    flatbuffers::Offset<flatbuffers::Vector<const RadioDuty *>> node = 0,
    flatbuffers::Offset<flatbuffers::Vector<int32_t>> rcvd = 0,
    flatbuffers::Offset<flatbuffers::Vector<int32_t>> led = 0,
    const RadioState *radioState = 0,
    int32_t target = 0) {
  MessageBuilder builder_(_fbb);
  builder_.add_target(target);
  builder_.add_radioState(radioState);
  builder_.add_led(led);
  builder_.add_rcvd(rcvd);
  builder_.add_node(node);
  builder_.add_location(location);
  builder_.add_id(id);
  builder_.add_simState(simState);
  builder_.add_type(type);
  return builder_.Finish();
}

inline flatbuffers::Offset<Message> CreateMessageDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t type = 0,
    int32_t simState = 0,
    int32_t id = 0,
    const Vec3 *location = 0,
    const std::vector<const RadioDuty *> *node = nullptr,
    const std::vector<int32_t> *rcvd = nullptr,
    const std::vector<int32_t> *led = nullptr,
    const RadioState *radioState = 0,
    int32_t target = 0) {
  return UnrealCoojaMsg::CreateMessage(
      _fbb,
      type,
      simState,
      id,
      location,
      node ? _fbb.CreateVector<const RadioDuty *>(*node) : 0,
      rcvd ? _fbb.CreateVector<int32_t>(*rcvd) : 0,
      led ? _fbb.CreateVector<int32_t>(*led) : 0,
      radioState,
      target);
}

inline const UnrealCoojaMsg::Message *GetMessage(const void *buf) {
  return flatbuffers::GetRoot<UnrealCoojaMsg::Message>(buf);
}

inline bool VerifyMessageBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<UnrealCoojaMsg::Message>(nullptr);
}

inline void FinishMessageBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<UnrealCoojaMsg::Message> root) {
  fbb.Finish(root);
}

}  // namespace UnrealCoojaMsg

#endif  // FLATBUFFERS_GENERATED_UNREALPKTS_UNREALCOOJAMSG_H_
