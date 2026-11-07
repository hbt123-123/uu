// rea decompile_all
// name: FUN_1005f7a80
// address: 0x1005f7a80
// body: available
// range: 0x1005f7a80-0x1005f7d83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005f7d08) */

void FUN_1005f7a80(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  undefined1 auStack_100 [7];
  undefined1 local_f9;
  undefined1 local_f8 [24];
  undefined1 local_e0 [24];
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  undefined1 local_98 [24];
  undefined1 local_80 [24];
  undefined1 auStack_68 [24];
  
  puVar3 = &DAT_100aaf150;
  FUN_100004bb4(&DAT_100aaf150,&BYTE_1008450b8);
  lVar4 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  FUN_1005fa440();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (auStack_100 + -extraout_x8,&DAT_1009dc690,&DAT_1009dc690,param_1,uVar1,uVar2);
  _swift_beginAccess(unaff_x20 + 0x10,auStack_68,0,0);
  local_80[0] = 0;
  __ss22KeyedEncodingContainerV6encode_6forKeyys6UInt32V_xtKF
            (*(undefined4 *)(unaff_x20 + 0x10),local_80,puVar3);
  if (unaff_x21 == 0) {
    _swift_beginAccess(unaff_x20 + 0x18,local_80,0,0);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
    local_98[0] = 1;
    _swift_bridgeObjectRetain(uVar2);
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uVar1,uVar2,local_98,puVar3);
    _swift_bridgeObjectRelease(uVar2);
    _swift_beginAccess(unaff_x20 + 0x28,local_98,0,0);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
    local_b0[0] = 2;
    _swift_bridgeObjectRetain(uVar2);
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uVar1,uVar2,local_b0,puVar3);
    _swift_bridgeObjectRelease(uVar2);
    _swift_beginAccess(unaff_x20 + 0x38,local_b0,0,0);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
    local_c8[0] = 3;
    _swift_bridgeObjectRetain(uVar2);
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uVar1,uVar2,local_c8,puVar3);
    _swift_bridgeObjectRelease(uVar2);
    _swift_beginAccess(unaff_x20 + 0x48,local_c8,0,0);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
    local_e0[0] = 4;
    _swift_bridgeObjectRetain(uVar2);
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uVar1,uVar2,local_e0,puVar3);
    _swift_bridgeObjectRelease(uVar2);
    _swift_beginAccess(unaff_x20 + 0x58,local_e0,0,0);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x60);
    local_f8[0] = 5;
    _swift_bridgeObjectRetain(uVar2);
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uVar1,uVar2,local_f8,puVar3);
    _swift_bridgeObjectRelease(uVar2);
    _swift_beginAccess(unaff_x20 + 0x68,local_f8,0,0);
    local_f9 = 6;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF
              (*(undefined8 *)(unaff_x20 + 0x68),&local_f9,puVar3);
  }
  (**(code **)(lVar4 + 8))(auStack_100 + -extraout_x8,puVar3);
  return;
}

