// rea decompile_all
// name: FUN_10000a654
// address: 0x10000a654
// body: available
// range: 0x10000a654-0x10000a7bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000a654(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [12];
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar3 = &DAT_100101c88;
  FUN_10000eb08(&DAT_100101c88,&DAT_1000cb7c0);
  lVar5 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_60 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10000eba0(param_1,uVar1);
  FUN_100011b28();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar4,&DAT_1000f2460,&DAT_1000f2460,param_1,uVar1,uVar2);
  local_51 = 0;
  __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(*unaff_x20,unaff_x20[1],&local_51,puVar3);
  if (unaff_x21 == 0) {
    local_52 = 1;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(unaff_x20[2],unaff_x20[3],&local_52,puVar3)
    ;
    local_53 = 2;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(unaff_x20[4],unaff_x20[5],&local_53,puVar3)
    ;
    local_54 = 3;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(unaff_x20[6],unaff_x20[7],&local_54,puVar3)
    ;
    (**(code **)(lVar5 + 8))(puVar4,puVar3);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar4,puVar3);
  }
  return;
}

