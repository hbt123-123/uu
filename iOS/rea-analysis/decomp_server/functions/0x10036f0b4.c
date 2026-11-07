// rea decompile_all
// name: FUN_10036f0b4
// address: 0x10036f0b4
// body: available
// range: 0x10036f0b4-0x10036f5a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010036f47c) */
/* WARNING: Removing unreachable block (ram,0x00010036f378) */
/* WARNING: Removing unreachable block (ram,0x00010036f328) */
/* WARNING: Removing unreachable block (ram,0x00010036f388) */
/* WARNING: Removing unreachable block (ram,0x00010036f420) */
/* WARNING: Removing unreachable block (ram,0x00010036f4f0) */
/* WARNING: Removing unreachable block (ram,0x00010036f504) */
/* WARNING: Removing unreachable block (ram,0x00010036f508) */
/* WARNING: Removing unreachable block (ram,0x00010036f24c) */

ID FUN_10036f0b4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  class_t *pcVar11;
  ID IVar12;
  long lVar13;
  ID IVar14;
  ulong *unaff_x20;
  long unaff_x21;
  long lVar15;
  long lVar16;
  undefined1 *puVar17;
  undefined1 auStack_100 [8];
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  objc_super local_b8;
  undefined1 local_a8 [24];
  undefined1 local_90;
  undefined7 uStack_8f;
  undefined1 local_78 [24];
  
  puVar5 = &DAT_100a888b8;
  FUN_100004bb4(&DAT_100a888b8,&DAT_10081cb00);
  puVar17 = auStack_100 + -(*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  __s10Foundation3URLVMa();
  lVar15 = *(long *)(lVar6 + -8);
  lVar13 = (long)puVar17 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100a88ec8;
  local_f0 = (undefined *)lVar13;
  FUN_100004bb4(&DAT_100a88ec8,&DAT_10081d038);
  lVar4 = _TtC10Filepicker26FilePickerTaskResponseBody::videoCoverURL;
  lVar16 = *(long *)(puVar5 + -8);
  IVar14 = lVar13 - (*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_e8 = puVar5;
  (**(code **)(lVar15 + 0x38))
            ((long)unaff_x20 + _TtC10Filepicker26FilePickerTaskResponseBody::videoCoverURL,1,1,lVar6
            );
  lVar13 = _TtC10Filepicker26FilePickerTaskResponseBody::resolution;
  *(undefined8 *)((long)unaff_x20 + _TtC10Filepicker26FilePickerTaskResponseBody::resolution) = 0;
  puVar1 = (undefined8 *)((long)unaff_x20 + _TtC10Filepicker26FilePickerTaskResponseBody::md5);
  *puVar1 = 0;
  puVar1[1] = 0;
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  lVar7 = param_1;
  FUN_10003f030(param_1,uVar8);
  FUN_10036f034();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (IVar14,&DAT_1009b5278,&DAT_1009b5278,lVar7,uVar8,uVar3);
  if (unaff_x21 == 0) {
    local_78[0] = 0;
    puVar5 = &DAT_100a88ed0;
    FUN_100144654(&DAT_100a88ed0,PTR___s10Foundation3URLVSeAAMc_1009961b0);
    puVar10 = local_e8;
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (local_f0,lVar6,local_78,local_e8,lVar6,puVar5);
    (**(code **)(lVar15 + 0x20))
              ((long)unaff_x20 + _TtC10Filepicker26FilePickerTaskResponseBody::url,local_f0,lVar6);
    local_78[0] = 1;
    puVar9 = local_78;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF(puVar9,puVar10);
    *(undefined1 **)((long)unaff_x20 + _TtC10Filepicker26FilePickerTaskResponseBody::fileSize) =
         puVar9;
    local_78[0] = 2;
    puVar9 = local_78;
    puVar10 = local_e8;
    local_f0 = puVar5;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    puVar2 = (undefined8 *)
             ((long)unaff_x20 + _TtC10Filepicker26FilePickerTaskResponseBody::mimeType);
    *puVar2 = puVar9;
    puVar2[1] = puVar10;
    puVar5 = &DAT_100a88eb8;
    FUN_100004bb4(&DAT_100a88eb8,&DAT_10081d030);
    local_78[0] = 3;
    puVar10 = &DAT_100a88ed8;
    local_f8 = puVar5;
    FUN_10036f5a8(&DAT_100a88ed8,PTR___sSiSesWP_100995998,PTR___sSayxGSesSeRzlMc_1009958a0);
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_90,local_f8,local_78,local_e8,local_f8,puVar10);
    _swift_beginAccess((long)unaff_x20 + lVar13,local_78,1,0);
    uVar8 = *(undefined8 *)((long)unaff_x20 + lVar13);
    *(ulong *)((long)unaff_x20 + lVar13) = CONCAT71(uStack_8f,local_90);
    _swift_bridgeObjectRelease(uVar8);
    local_90 = 4;
    puVar9 = &local_90;
    puVar5 = local_e8;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    local_f8 = puVar9;
    _swift_beginAccess(puVar1,&local_90,1,0);
    uVar8 = puVar1[1];
    *puVar1 = local_f8;
    puVar1[1] = puVar5;
    _swift_bridgeObjectRelease(uVar8);
    puVar5 = local_e8;
    local_a8[0] = 5;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (puVar17,lVar6,local_a8,local_e8,lVar6,local_f0);
    _swift_beginAccess((long)unaff_x20 + lVar4,local_a8,0x21,0);
    FUN_10036ded4(puVar17,(long)unaff_x20 + lVar4);
    _swift_endAccess(local_a8);
    pcVar11 = (class_t *)0x0;
    FUN_10036e994();
    local_b8.super_class = pcVar11;
    IVar12 = _objc_msgSendSuper2(&local_b8,"init");
    (**(code **)(lVar16 + 8))(IVar14,puVar5);
    FUN_10003f094(param_1);
  }
  else {
    FUN_10003f094(param_1);
    FUN_10036e94c((long)unaff_x20 + lVar4);
    _swift_bridgeObjectRelease(*(undefined8 *)((long)unaff_x20 + lVar13));
    _swift_bridgeObjectRelease(puVar1[1]);
    uVar8 = 0;
    FUN_10036e994(0);
    _swift_deallocPartialClassInstance
              (unaff_x20,uVar8,
               *(undefined4 *)((*(ulong *)PTR__swift_isaMask_100995ee0 & *unaff_x20) + 0x30),
               *(undefined2 *)((*(ulong *)PTR__swift_isaMask_100995ee0 & *unaff_x20) + 0x34));
    IVar12 = IVar14;
  }
  return IVar12;
}

