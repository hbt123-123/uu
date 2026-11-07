// rea decompile_all
// name: FUN_100227aac
// address: 0x100227aac
// body: available
// range: 0x100227aac-0x1002280b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100227c68) */

void FUN_100227aac(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [15];
  undefined1 local_51;
  
  puVar2 = &DAT_100a7ed08;
  FUN_100004bb4(&DAT_100a7ed08,&DAT_100813808);
  lVar5 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_60 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  FUN_100228c00();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar4,&DAT_1009a60e8,&DAT_1009a60e8,param_1,uVar1,uVar3);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  local_51 = 0;
  _swift_bridgeObjectRetain(uVar3);
  __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uVar1,uVar3,&local_51,puVar2);
  if (unaff_x21 == 0) {
    _swift_bridgeObjectRelease(uVar3);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
    local_51 = 1;
    _swift_bridgeObjectRetain(uVar3);
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uVar1,uVar3,&local_51,puVar2);
    _swift_bridgeObjectRelease(uVar3);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
    local_51 = 2;
    _swift_bridgeObjectRetain(uVar3);
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uVar1,uVar3,&local_51,puVar2);
    _swift_bridgeObjectRelease(uVar3);
    local_51 = 3;
    __ss22KeyedEncodingContainerV6encode_6forKeyys5Int64V_xtKF
              (*(undefined8 *)(unaff_x20 + 0x40),&local_51,puVar2);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
    local_51 = 4;
    _swift_bridgeObjectRetain(uVar3);
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uVar1,uVar3,&local_51,puVar2);
    _swift_bridgeObjectRelease(uVar3);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x60);
    local_51 = 5;
    _swift_bridgeObjectRetain(uVar3);
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uVar1,uVar3,&local_51,puVar2);
    _swift_bridgeObjectRelease(uVar3);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x68);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x70);
    local_51 = 6;
    _swift_bridgeObjectRetain(uVar3);
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uVar1,uVar3,&local_51,puVar2);
    _swift_bridgeObjectRelease(uVar3);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x78);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x80);
    local_51 = 7;
    _swift_bridgeObjectRetain(uVar3);
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uVar1,uVar3,&local_51,puVar2);
    _swift_bridgeObjectRelease(uVar3);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x88);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x90);
    local_51 = 8;
    _swift_bridgeObjectRetain(uVar3);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF(uVar1,uVar3,&local_51,puVar2);
    _swift_bridgeObjectRelease(uVar3);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x98);
    uVar3 = *(undefined8 *)(unaff_x20 + 0xa0);
    local_51 = 9;
    _swift_bridgeObjectRetain(uVar3);
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uVar1,uVar3,&local_51,puVar2);
    _swift_bridgeObjectRelease(uVar3);
    uVar1 = *(undefined8 *)(unaff_x20 + 0xa8);
    uVar3 = *(undefined8 *)(unaff_x20 + 0xb0);
    local_51 = 10;
    _swift_bridgeObjectRetain(uVar3);
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uVar1,uVar3,&local_51,puVar2);
    _swift_bridgeObjectRelease(uVar3);
    uVar1 = *(undefined8 *)(unaff_x20 + 0xb8);
    uVar3 = *(undefined8 *)(unaff_x20 + 0xc0);
    local_51 = 0xb;
    _swift_bridgeObjectRetain(uVar3);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF(uVar1,uVar3,&local_51,puVar2);
    _swift_bridgeObjectRelease(uVar3);
    uVar1 = *(undefined8 *)(unaff_x20 + 200);
    uVar3 = *(undefined8 *)(unaff_x20 + 0xd0);
    local_51 = 0xc;
    _swift_bridgeObjectRetain(uVar3);
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uVar1,uVar3,&local_51,puVar2);
    _swift_bridgeObjectRelease(uVar3);
    uVar1 = *(undefined8 *)(unaff_x20 + 0xd8);
    uVar3 = *(undefined8 *)(unaff_x20 + 0xe0);
    local_51 = 0xd;
    _swift_bridgeObjectRetain(uVar3);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF(uVar1,uVar3,&local_51,puVar2);
    _swift_bridgeObjectRelease(uVar3);
    uVar1 = *(undefined8 *)(unaff_x20 + 0xe8);
    uVar3 = *(undefined8 *)(unaff_x20 + 0xf0);
    local_51 = 0xe;
    _swift_bridgeObjectRetain(uVar3);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF(uVar1,uVar3,&local_51,puVar2);
    _swift_bridgeObjectRelease(uVar3);
    uVar1 = *(undefined8 *)(unaff_x20 + 0xf8);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x100);
    local_51 = 0xf;
    _swift_bridgeObjectRetain(uVar3);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF(uVar1,uVar3,&local_51,puVar2);
    _swift_bridgeObjectRelease(uVar3);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x108);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x110);
    local_51 = 0x10;
    _swift_bridgeObjectRetain(uVar3);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF(uVar1,uVar3,&local_51,puVar2);
    _swift_bridgeObjectRelease(uVar3);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x118);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x120);
    local_51 = 0x11;
    _swift_bridgeObjectRetain(uVar3);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF(uVar1,uVar3,&local_51,puVar2);
    _swift_bridgeObjectRelease(uVar3);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x128);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x130);
    local_51 = 0x12;
    _swift_bridgeObjectRetain(uVar3);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF(uVar1,uVar3,&local_51,puVar2);
    _swift_bridgeObjectRelease(uVar3);
    local_51 = 0x13;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyys5Int64VSg_xtKF
              (*(undefined8 *)(unaff_x20 + 0x138),*(undefined1 *)(unaff_x20 + 0x140),&local_51,
               puVar2);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x148);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x150);
    local_51 = 0x14;
    _swift_bridgeObjectRetain(uVar3);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF(uVar1,uVar3,&local_51,puVar2);
    (**(code **)(lVar5 + 8))(puVar4,puVar2);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar4,puVar2);
  }
  _swift_bridgeObjectRelease(uVar3);
  return;
}

