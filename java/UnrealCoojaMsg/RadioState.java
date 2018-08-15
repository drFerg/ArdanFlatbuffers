// automatically generated by the FlatBuffers compiler, do not modify

package UnrealCoojaMsg;

import java.nio.*;
import java.lang.*;
import java.util.*;
import com.google.flatbuffers.*;

@SuppressWarnings("unused")
public final class RadioState extends Struct {
  public void __init(int _i, ByteBuffer _bb) { bb_pos = _i; bb = _bb; }
  public RadioState __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public boolean radioOn() { return 0!=bb.get(bb_pos + 0); }
  public double signalStrength() { return bb.getDouble(bb_pos + 8); }
  public double outputPower() { return bb.getDouble(bb_pos + 16); }

  public static int createRadioState(FlatBufferBuilder builder, boolean radioOn, double signalStrength, double outputPower) {
    builder.prep(8, 24);
    builder.putDouble(outputPower);
    builder.putDouble(signalStrength);
    builder.pad(7);
    builder.putBoolean(radioOn);
    return builder.offset();
  }
}

