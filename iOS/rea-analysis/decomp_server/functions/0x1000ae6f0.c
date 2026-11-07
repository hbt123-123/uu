// rea decompile_all
// name: FUN_1000ae6f0
// address: 0x1000ae6f0
// body: available
// range: 0x1000ae6f0-0x1000ae88f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000ae6f0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [13];
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar2 = &DAT_100a76c28;
  FUN_100004bb4(&DAT_100a76c28,&DAT_10080b790);
  lVar5 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_60 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  FUN_1000ae904();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar4,&DAT_10099a748,&DAT_10099a748,param_1,uVar1,uVar3);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  local_51 = 0;
  _swift_bridgeObjectRetain(uVar3);
  __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF(uVar1,uVar3,&local_51,puVar2);
  if (unaff_x21 == 0) {
    _swift_bridgeObjectRelease(uVar3);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
    local_52 = 1;
    _swift_bridgeObjectRetain(uVar3);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF(uVar1,uVar3,&local_52,puVar2);
    _swift_bridgeObjectRelease(uVar3);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
    local_53 = 2;
    _swift_bridgeObjectRetain(uVar3);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF(uVar1,uVar3,&local_53,puVar2);
    (**(code **)(lVar5 + 8))(puVar4,puVar2);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar4,puVar2);
  }
  _swift_bridgeObjectRelease(uVar3);
  return;
}

