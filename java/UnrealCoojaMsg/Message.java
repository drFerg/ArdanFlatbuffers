// automatically generated by the FlatBuffers compiler, do not modify

package UnrealCoojaMsg;

import java.nio.*;
import java.lang.*;
import java.util.*;
import com.google.flatbuffers.*;

@SuppressWarnings("unused")
public final class Message extends Table {
  public static Message getRootAsMessage(ByteBuffer _bb) { return getRootAsMessage(_bb, new Message()); }
  public static Message getRootAsMessage(ByteBuffer _bb, Message obj) { _bb.order(ByteOrder.LITTLE_ENDIAN); return (obj.__assign(_bb.getInt(_bb.position()) + _bb.position(), _bb)); }
  public void __init(int _i, ByteBuffer _bb) { bb_pos = _i; bb = _bb; }
  public Message __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public int type() { int o = __offset(4); return o != 0 ? bb.getInt(o + bb_pos) : 0; }
  public int simState() { int o = __offset(6); return o != 0 ? bb.getInt(o + bb_pos) : 0; }
  public int id() { int o = __offset(8); return o != 0 ? bb.getInt(o + bb_pos) : 0; }
  public Vec3 location() { return location(new Vec3()); }
  public Vec3 location(Vec3 obj) { int o = __offset(10); return o != 0 ? obj.__assign(o + bb_pos, bb) : null; }
  public RadioDuty node(int j) { return node(new RadioDuty(), j); }
  public RadioDuty node(RadioDuty obj, int j) { int o = __offset(12); return o != 0 ? obj.__assign(__vector(o) + j * 32, bb) : null; }
  public int nodeLength() { int o = __offset(12); return o != 0 ? __vector_len(o) : 0; }
  public int rcvd(int j) { int o = __offset(14); return o != 0 ? bb.getInt(__vector(o) + j * 4) : 0; }
  public int rcvdLength() { int o = __offset(14); return o != 0 ? __vector_len(o) : 0; }
  public ByteBuffer rcvdAsByteBuffer() { return __vector_as_bytebuffer(14, 4); }
  public int led(int j) { int o = __offset(16); return o != 0 ? bb.getInt(__vector(o) + j * 4) : 0; }
  public int ledLength() { int o = __offset(16); return o != 0 ? __vector_len(o) : 0; }
  public ByteBuffer ledAsByteBuffer() { return __vector_as_bytebuffer(16, 4); }
  public RadioState radioState() { return radioState(new RadioState()); }
  public RadioState radioState(RadioState obj) { int o = __offset(18); return o != 0 ? obj.__assign(o + bb_pos, bb) : null; }

  public static void startMessage(FlatBufferBuilder builder) { builder.startObject(8); }
  public static void addType(FlatBufferBuilder builder, int type) { builder.addInt(0, type, 0); }
  public static void addSimState(FlatBufferBuilder builder, int simState) { builder.addInt(1, simState, 0); }
  public static void addId(FlatBufferBuilder builder, int id) { builder.addInt(2, id, 0); }
  public static void addLocation(FlatBufferBuilder builder, int locationOffset) { builder.addStruct(3, locationOffset, 0); }
  public static void addNode(FlatBufferBuilder builder, int nodeOffset) { builder.addOffset(4, nodeOffset, 0); }
  public static void startNodeVector(FlatBufferBuilder builder, int numElems) { builder.startVector(32, numElems, 8); }
  public static void addRcvd(FlatBufferBuilder builder, int rcvdOffset) { builder.addOffset(5, rcvdOffset, 0); }
  public static int createRcvdVector(FlatBufferBuilder builder, int[] data) { builder.startVector(4, data.length, 4); for (int i = data.length - 1; i >= 0; i--) builder.addInt(data[i]); return builder.endVector(); }
  public static void startRcvdVector(FlatBufferBuilder builder, int numElems) { builder.startVector(4, numElems, 4); }
  public static void addLed(FlatBufferBuilder builder, int ledOffset) { builder.addOffset(6, ledOffset, 0); }
  public static int createLedVector(FlatBufferBuilder builder, int[] data) { builder.startVector(4, data.length, 4); for (int i = data.length - 1; i >= 0; i--) builder.addInt(data[i]); return builder.endVector(); }
  public static void startLedVector(FlatBufferBuilder builder, int numElems) { builder.startVector(4, numElems, 4); }
  public static void addRadioState(FlatBufferBuilder builder, int radioStateOffset) { builder.addStruct(7, radioStateOffset, 0); }
  public static int endMessage(FlatBufferBuilder builder) {
    int o = builder.endObject();
    return o;
  }
  public static void finishMessageBuffer(FlatBufferBuilder builder, int offset) { builder.finish(offset); }
}

