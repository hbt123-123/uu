// rea decompile_all
// name: FUN_10000c538
// address: 0x10000c538
// body: available
// range: 0x10000c538-0x10000c687 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000c538(long param_1,long param_2,undefined8 param_3,code *param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_70 [8];
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  FUN_10000eb08(param_2,param_3);
  lVar4 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_70 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10000eba0(param_1,uVar1);
  (*param_4)();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar3,param_5,param_5,param_1,uVar1,uVar2);
  local_51 = 0;
  __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(*unaff_x20,unaff_x20[1],&local_51,param_2);
  if (unaff_x21 == 0) {
    local_52 = 1;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF
              (unaff_x20[2],unaff_x20[3],&local_52,param_2);
    local_53 = 2;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF
              (unaff_x20[4],unaff_x20[5],&local_53,param_2);
    (**(code **)(lVar4 + 8))(puVar3,param_2);
  }
  else {
    (**(code **)(lVar4 + 8))(puVar3,param_2);
  }
  return;
}

