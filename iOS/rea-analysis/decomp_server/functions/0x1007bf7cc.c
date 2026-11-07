// rea decompile_all
// name: FUN_1007bf7cc
// address: 0x1007bf7cc
// body: available
// range: 0x1007bf7cc-0x1007bfd23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001007bfc24) */
/* WARNING: Removing unreachable block (ram,0x0001007bfb14) */
/* WARNING: Removing unreachable block (ram,0x0001007bfaa8) */
/* WARNING: Removing unreachable block (ram,0x0001007bfb64) */
/* WARNING: Removing unreachable block (ram,0x0001007bfb70) */
/* WARNING: Removing unreachable block (ram,0x0001007bfb78) */
/* WARNING: Removing unreachable block (ram,0x0001007bfc78) */
/* WARNING: Removing unreachable block (ram,0x0001007bfb8c) */
/* WARNING: Removing unreachable block (ram,0x0001007bf970) */

ID FUN_1007bf7cc(ID param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *puVar5;
  ID IVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  long unaff_x21;
  long lVar10;
  long lVar11;
  long local_e0;
  long local_d8;
  long local_d0;
  undefined *local_c8;
  long local_c0;
  ID local_b8;
  undefined8 *local_b0;
  long local_a8;
  undefined1 local_80 [8];
  undefined1 local_78 [24];
  undefined1 local_58;
  undefined7 uStack_57;
  
  lVar4 = 0;
  __s10Foundation4UUIDVMa();
  local_e0 = *(long *)(lVar4 + -8);
  lVar10 = (long)&local_e0 - (*(long *)(local_e0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100abccc0;
  local_d8 = lVar4;
  local_c0 = lVar10;
  FUN_1007b4550();
  lVar11 = *(long *)(puVar5 + -8);
  lVar10 = lVar10 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_b0 = (undefined8 *)(unaff_x20 + _TtC6Sentry13SentryMXFrame::binaryName);
  *local_b0 = 0;
  local_b0[1] = 0;
  local_a8 = _TtC6Sentry13SentryMXFrame::subFrames;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry13SentryMXFrame::subFrames) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC6Sentry13SentryMXFrame::sampleCount);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_c8 = puVar5;
  local_b8 = param_1;
  FUN_10003f030(param_1,uVar9);
  IVar6 = param_1;
  FUN_1007bfe4c();
  local_d0 = lVar10;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (lVar10,&DAT_1009eb5d8,&DAT_1009eb5d8,IVar6,uVar9,uVar2);
  lVar4 = local_a8;
  puVar3 = local_b0;
  if (unaff_x21 == 0) {
    local_78[0] = 0;
    puVar5 = &DAT_100abccd0;
    FUN_100240fdc(&DAT_100abccd0,0xff,PTR___s10Foundation4UUIDVMa_100996230,
                  PTR___s10Foundation4UUIDVSeAAMc_100996258);
    puVar8 = local_c8;
    lVar10 = local_d8;
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (local_c0,local_d8,local_78,local_c8,local_d8,puVar5);
    lVar4 = unaff_x20 + _TtC6Sentry13SentryMXFrame::binaryUUID;
    _swift_beginAccess(lVar4,local_78,1,0);
    (**(code **)(local_e0 + 0x20))(lVar4,local_c0,lVar10);
    local_58 = 1;
    puVar7 = &local_58;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF(puVar7,puVar8);
    *(undefined1 **)(unaff_x20 + _TtC6Sentry13SentryMXFrame::offsetIntoBinaryTextSegment) = puVar7;
    local_58 = 2;
    puVar7 = &local_58;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    lVar4 = local_a8;
    uVar9 = local_b0[1];
    *local_b0 = puVar7;
    local_b0[1] = puVar8;
    _swift_bridgeObjectRelease(uVar9);
    local_58 = 3;
    puVar7 = &local_58;
    __ss22KeyedDecodingContainerV6decode_6forKeys6UInt64VAFm_xtKF(puVar7,local_c8);
    *(undefined1 **)(unaff_x20 + _TtC6Sentry13SentryMXFrame::address) = puVar7;
    puVar5 = &DAT_100abcca8;
    FUN_1007b4550(&DAT_100abcca8);
    local_80[0] = 4;
    puVar8 = &DAT_100abccb0;
    FUN_1007bfe90(&DAT_100abccb0,&DAT_100abccb8,&DAT_100852180,PTR___sSayxGSesSeRzlMc_1009958a0);
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_58,puVar5,local_80,local_c8,puVar5,puVar8);
    uVar9 = *(undefined8 *)(unaff_x20 + lVar4);
    *(ulong *)(unaff_x20 + lVar4) = CONCAT71(uStack_57,local_58);
    _swift_bridgeObjectRelease(uVar9);
    local_58 = 5;
    puVar7 = &local_58;
    puVar5 = local_c8;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySiSgSim_xtKF();
    *puVar1 = puVar7;
    *(byte *)(puVar1 + 1) = (byte)puVar5 & 1;
    switchD_1007bf228::caseD_6d();
    param_1 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff70,"init");
    (**(code **)(lVar11 + 8))(local_d0,local_c8);
    FUN_10003f094(local_b8);
  }
  else {
    FUN_10003f094(local_b8);
    _swift_bridgeObjectRelease(puVar3[1]);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + lVar4));
    switchD_1007bf228::caseD_6d(0);
    _swift_deallocPartialClassInstance();
  }
  return param_1;
}

