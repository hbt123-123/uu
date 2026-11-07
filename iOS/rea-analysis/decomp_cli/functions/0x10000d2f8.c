// rea decompile_all
// name: FUN_10000d2f8
// address: 0x10000d2f8
// body: available
// range: 0x10000d2f8-0x10000d3ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000d2f8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,code *param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long extraout_x8;
  long lVar3;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  local_68 = param_3;
  FUN_10000eb08(param_4,param_5);
  lVar3 = *(long *)(param_4 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10000eba0(param_1,uVar1);
  (*param_6)();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (auStack_70 + -extraout_x8,param_7,param_7,param_1,uVar1,uVar2);
  __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(param_2,local_68);
  (**(code **)(lVar3 + 8))(auStack_70 + -extraout_x8,param_4);
  return;
}

