// rea decompile_all
// name: FUN_10036ec34
// address: 0x10036ec34
// body: available
// range: 0x10036ec34-0x10036f033 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010036eeb8) */
/* WARNING: Removing unreachable block (ram,0x00010036ef64) */

void FUN_10036ec34(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  code *pcVar11;
  long unaff_x20;
  long unaff_x21;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_120 [8];
  undefined1 *local_118;
  long local_110;
  undefined1 local_f8 [24];
  undefined8 local_e0 [3];
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  undefined1 local_98 [24];
  undefined1 auStack_80 [32];
  undefined1 local_51;
  
  puVar5 = &DAT_100a888b8;
  FUN_100004bb4(&DAT_100a888b8,&DAT_10081cb00);
  lVar10 = *(long *)(*(long *)(puVar5 + -8) + 0x40);
  lVar6 = 0;
  local_118 = auStack_120 + -(lVar10 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLVMa();
  lVar13 = *(long *)(lVar6 + -8);
  lVar14 = (long)(auStack_120 + -(lVar10 + 0xfU & 0xfffffffffffffff0)) -
           (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100a88ea0;
  FUN_100004bb4(&DAT_100a88ea0,&DAT_10081d028);
  local_110 = *(long *)(puVar5 + -8);
  lVar12 = lVar14 - (*(long *)(local_110 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar2);
  FUN_10036f034();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (lVar12,&DAT_1009b5278,&DAT_1009b5278,param_1,uVar2,uVar3);
  lVar10 = _TtC10Filepicker26FilePickerTaskResponseBody::url;
  _swift_beginAccess(unaff_x20 + _TtC10Filepicker26FilePickerTaskResponseBody::url,auStack_80,0,0);
  (**(code **)(lVar13 + 0x10))(lVar14,unaff_x20 + lVar10,lVar6);
  local_98[0] = 0;
  puVar7 = &DAT_100a88eb0;
  FUN_100144654(&DAT_100a88eb0,PTR___s10Foundation3URLVSEAAMc_100996198);
  __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF(lVar14,local_98,puVar5,lVar6,puVar7)
  ;
  lVar10 = local_110;
  if (unaff_x21 == 0) {
    (**(code **)(lVar13 + 8))(lVar14,lVar6);
    lVar13 = _TtC10Filepicker26FilePickerTaskResponseBody::fileSize;
    _swift_beginAccess(unaff_x20 + _TtC10Filepicker26FilePickerTaskResponseBody::fileSize,local_98,0
                       ,0);
    local_b0[0] = 1;
    __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF
              (*(undefined8 *)(unaff_x20 + lVar13),local_b0,puVar5);
    puVar1 = (undefined8 *)(unaff_x20 + _TtC10Filepicker26FilePickerTaskResponseBody::mimeType);
    _swift_beginAccess(puVar1,local_b0,0,0);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    local_c8[0] = 2;
    _swift_bridgeObjectRetain(uVar3);
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uVar2,uVar3,local_c8,puVar5);
    _swift_bridgeObjectRelease(uVar3);
    lVar13 = _TtC10Filepicker26FilePickerTaskResponseBody::resolution;
    _swift_beginAccess(unaff_x20 + _TtC10Filepicker26FilePickerTaskResponseBody::resolution,local_c8
                       ,0,0);
    local_e0[0] = *(undefined8 *)(unaff_x20 + lVar13);
    local_f8[0] = 3;
    puVar8 = &DAT_100a88eb8;
    FUN_100004bb4(&DAT_100a88eb8,&DAT_10081d030);
    puVar9 = &DAT_100a88ec0;
    FUN_10036f5a8(&DAT_100a88ec0,PTR___sSiSEsWP_100995970,PTR___sSayxGSEsSERzlMc_100995880);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (local_e0,local_f8,puVar5,puVar8,puVar9);
    puVar1 = (undefined8 *)(unaff_x20 + _TtC10Filepicker26FilePickerTaskResponseBody::md5);
    _swift_beginAccess(puVar1,local_e0,0,0);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    local_f8[0] = 4;
    _swift_bridgeObjectRetain(uVar3);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF(uVar2,uVar3,local_f8,puVar5);
    _swift_bridgeObjectRelease(uVar3);
    lVar13 = _TtC10Filepicker26FilePickerTaskResponseBody::videoCoverURL;
    _swift_beginAccess(unaff_x20 + _TtC10Filepicker26FilePickerTaskResponseBody::videoCoverURL,
                       local_f8,0,0);
    puVar4 = local_118;
    FUN_10036dd3c(unaff_x20 + lVar13,local_118);
    local_51 = 5;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (puVar4,&local_51,puVar5,lVar6,puVar7);
    FUN_10036e94c(puVar4);
    pcVar11 = *(code **)(lVar10 + 8);
  }
  else {
    (**(code **)(lVar13 + 8))(lVar14,lVar6);
    pcVar11 = *(code **)(local_110 + 8);
  }
  (*pcVar11)(lVar12,puVar5);
  return;
}

