// rea decompile_all
// name: FUN_1003f5ef0
// address: 0x1003f5ef0
// body: available
// range: 0x1003f5ef0-0x1003f6077 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003f5ef0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_90 [15];
  undefined1 local_81;
  undefined1 local_80 [24];
  undefined1 auStack_68 [24];
  
  puVar2 = &DAT_100a8d960;
  FUN_100004bb4(&DAT_100a8d960,&DAT_100823e00);
  lVar5 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_90 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  FUN_1003f6078();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar4,&DAT_1009bbe60,&DAT_1009bbe60,param_1,uVar1,uVar3);
  _swift_beginAccess(unaff_x20 + 0x10,auStack_68,0,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  local_80[0] = 0;
  _swift_bridgeObjectRetain(uVar3);
  __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uVar1,uVar3,local_80,puVar2);
  if (unaff_x21 == 0) {
    _swift_bridgeObjectRelease(uVar3);
    _swift_beginAccess(unaff_x20 + 0x20,local_80,0,0);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
    local_81 = 1;
    _swift_bridgeObjectRetain(uVar3);
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uVar1,uVar3,&local_81,puVar2);
    (**(code **)(lVar5 + 8))(puVar4,puVar2);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar4,puVar2);
  }
  _swift_bridgeObjectRelease(uVar3);
  return;
}

