// rea decompile_all
// name: FUN_1007d0cac
// address: 0x1007d0cac
// body: available
// range: 0x1007d0cac-0x1007d11b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1007d0cac(ID *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ID IVar3;
  undefined *puVar4;
  ID IVar5;
  long lVar6;
  ID *pIVar7;
  char *pcVar8;
  ID *pIVar9;
  ulong uVar10;
  ID unaff_x20;
  ID *pIVar11;
  ID local_b8 [6];
  ID *local_88;
  ID *pIStack_80;
  undefined *local_70;
  
  FUN_1007d12ac();
  IVar3 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff98,"serialize");
  puVar1 = PTR___sSSN_1009957f8;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (IVar3,PTR___sSSN_1009957f8,PTR___sypN_100995e88 + 8,PTR___sSSSHsWP_100995808);
  pIVar11 = *(ID **)(unaff_x20 + _TtC6Sentry17SentryReplayEvent::urls);
  if (pIVar11 == (ID *)0x0) {
    FUN_1007d3ebc(&local_88,0x736c7275,0xe400000000000000);
    FUN_1000c776c(&local_88);
  }
  else {
    puVar4 = &DAT_100abc7b8;
    FUN_1007b4550();
    local_88 = pIVar11;
    local_70 = puVar4;
    FUN_10007f3d4(&local_88,local_b8 + 2);
    _swift_bridgeObjectRetain(pIVar11);
    IVar5 = IVar3;
    _swift_isUniquelyReferenced_nonNull_native(IVar3);
    lVar6 = 0x736c7275;
    uVar10 = 0;
    local_b8[0] = IVar3;
    FUN_1007b853c(0x736c7275,0xe400000000000000,IVar5);
    IVar3 = local_b8[0];
    if ((uVar10 & 1) == 0) {
      FUN_100060330();
    }
    else {
      lVar6 = *(long *)(local_b8[0] + 0x38) + lVar6 * 0x20;
      FUN_10003f094(lVar6);
      FUN_10007f3d4(local_b8 + 2,lVar6);
    }
    _swift_bridgeObjectRelease(0x8000000000000000);
  }
  __s10Foundation4DateV21timeIntervalSince1970Sdvg
            (_TtC6Sentry17SentryReplayEvent::replayStartTimestamp);
  local_70 = PTR___sSdN_1009958f0;
  local_88 = param_1;
  FUN_10007f3d4(&local_88,local_b8 + 2);
  IVar5 = IVar3;
  _swift_isUniquelyReferenced_nonNull_native(IVar3);
  uVar10 = 0;
  lVar6 = -0x2fffffffffffffea;
  local_b8[0] = IVar3;
  FUN_1007b853c(0xd000000000000016,0x80000001008dba70,IVar5);
  IVar3 = local_b8[0];
  if ((uVar10 & 1) == 0) {
    FUN_100060330();
  }
  else {
    lVar6 = *(long *)(local_b8[0] + 0x38) + lVar6 * 0x20;
    FUN_10003f094(lVar6);
    FUN_10007f3d4(local_b8 + 2,lVar6);
  }
  _swift_bridgeObjectRelease(0x8000000000000000);
  pcVar8 = "eventId";
  pIVar7 = (ID *)_objc_msgSend(unaff_x20,"eventId");
  __s10Foundation4UUIDV10uuidStringSSvg(_TtC6Sentry8SentryId::id);
  local_b8[2] = 0x2d;
  local_b8[3] = 0xe100000000000000;
  local_b8[0] = 0;
  local_b8[1] = 0xe000000000000000;
  local_88 = pIVar7;
  pIStack_80 = (ID *)pcVar8;
  FUN_10009ff0c();
  pIVar11 = local_b8 + 2;
  pIVar9 = local_b8;
  __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
            (pIVar11,pIVar9,0,0,0,1,puVar1,puVar1,puVar1,pIVar7,pIVar7,pIVar7);
  _swift_bridgeObjectRelease(pcVar8);
  pIVar7 = pIVar9;
  __sSS10lowercasedSSyF();
  _swift_bridgeObjectRelease(pIVar9);
  local_70 = puVar1;
  local_88 = pIVar11;
  pIStack_80 = pIVar7;
  FUN_10007f3d4(&local_88,local_b8 + 2);
  IVar5 = IVar3;
  _swift_isUniquelyReferenced_nonNull_native(IVar3);
  lVar6 = 0x695f79616c706572;
  uVar10 = 0;
  local_b8[0] = IVar3;
  FUN_1007b853c(0x695f79616c706572,0xe900000000000064,IVar5);
  IVar3 = local_b8[0];
  if ((uVar10 & 1) == 0) {
    FUN_100060330();
  }
  else {
    lVar6 = *(long *)(local_b8[0] + 0x38) + lVar6 * 0x20;
    FUN_10003f094(lVar6);
    FUN_10007f3d4(local_b8 + 2,lVar6);
  }
  _swift_bridgeObjectRelease(0x8000000000000000);
  local_88 = *(ID **)(unaff_x20 + _TtC6Sentry17SentryReplayEvent::segmentId);
  local_70 = PTR___sSiN_100995968;
  FUN_10007f3d4(&local_88,local_b8 + 2);
  IVar5 = IVar3;
  _swift_isUniquelyReferenced_nonNull_native(IVar3);
  lVar6 = 0x5f746e656d676573;
  uVar10 = 0xea00000000006469;
  local_b8[0] = IVar3;
  FUN_1007b853c(0x5f746e656d676573,0xea00000000006469,IVar5);
  IVar3 = local_b8[0];
  if ((uVar10 & 1) == 0) {
    FUN_100060330();
  }
  else {
    lVar6 = *(long *)(local_b8[0] + 0x38) + lVar6 * 0x20;
    FUN_10003f094(lVar6);
    FUN_10007f3d4(local_b8 + 2,lVar6);
  }
  _swift_bridgeObjectRelease(0x8000000000000000);
  local_88 = *(ID **)(unaff_x20 + _TtC6Sentry17SentryReplayEvent::replayType);
  if (local_88 == (ID *)0x0) {
    pIStack_80 = (ID *)0xe700000000000000;
    local_88 = (ID *)0x6e6f6973736573;
  }
  else {
    if (local_88 != (ID *)0x1) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (&DAT_1009eac60,&local_88,&DAT_1009eac60,PTR___sSiN_100995968);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007d11b8);
      (*pcVar2)();
    }
    pIStack_80 = (ID *)0xe600000000000000;
    local_88 = (ID *)0x726566667562;
  }
  local_70 = puVar1;
  FUN_10007f3d4(&local_88,local_b8 + 2);
  IVar5 = IVar3;
  _swift_isUniquelyReferenced_nonNull_native(IVar3);
  lVar6 = 0x745f79616c706572;
  uVar10 = 0xeb00000000657079;
  local_b8[0] = IVar3;
  FUN_1007b853c(0x745f79616c706572,0xeb00000000657079,IVar5);
  IVar3 = local_b8[0];
  if ((uVar10 & 1) == 0) {
    FUN_100060330();
  }
  else {
    lVar6 = *(long *)(local_b8[0] + 0x38) + lVar6 * 0x20;
    FUN_10003f094(lVar6);
    FUN_10007f3d4(local_b8 + 2,lVar6);
  }
  _swift_bridgeObjectRelease(0x8000000000000000);
  return IVar3;
}

