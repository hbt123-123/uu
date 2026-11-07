// rea decompile_all
// name: FUN_1000d0548
// address: 0x1000d0548
// body: available
// range: 0x1000d0548-0x1000d0b37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000d0b34 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1000d0548(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ID *pIVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long extraout_x8;
  long lVar9;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar10;
  long unaff_x20;
  long lVar11;
  ID self;
  long lVar12;
  long lVar13;
  code *pcVar14;
  undefined1 auStack_110 [16];
  long alStack_100 [2];
  long local_f0;
  long local_e8;
  long local_e0;
  undefined8 local_c8;
  undefined *local_c0 [11];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  lVar11 = (long)&local_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar12 = lVar11 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar13 = lVar12 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar9 = lVar13 - extraout_x12_01;
  local_e0 = lVar9;
  __s10Foundation3URLV15fileURLWithPath11isDirectoryACSSh_SbtcfC
            (*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),1);
  puVar3 = &DAT_100a750f8;
  FUN_100004bb4(&DAT_100a750f8,&DAT_100809c20);
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x18) = 6;
  *(undefined8 *)(puVar3 + 0x10) = 3;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(puVar3 + 0x20) = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(puVar3 + 0x28) = uVar5;
  *(undefined8 *)(puVar3 + 0x30) = 0xd000000000000014;
  *(undefined8 *)(puVar3 + 0x38) = 0x8000000100886040;
  local_e8 = 0x8000000100886040;
  *(undefined8 *)(puVar3 + 0x40) = 0x6163696c7070412f;
  *(undefined8 *)(puVar3 + 0x48) = 0xed0000736e6f6974;
  local_c0[0] = PTR___swiftEmptyArrayStorage_100995ea0;
  _swift_bridgeObjectRetain();
  FUN_10006fae0(0,3,0);
  puVar7 = local_c0[0];
  uVar5 = *(undefined8 *)(puVar3 + 0x20);
  uVar6 = *(undefined8 *)(puVar3 + 0x28);
  _swift_bridgeObjectRetain(uVar6);
  __s10Foundation3URLV15fileURLWithPath11isDirectoryACSSh_SbtcfC(lVar13,uVar5,uVar6,1);
  __s10Foundation3URLV23resolvingSymlinksInPathACyF(lVar12);
  __s10Foundation3URLV016standardizedFileB0ACvg(lVar11);
  pcVar14 = *(code **)(lVar10 + 8);
  lVar10 = lVar12;
  lVar8 = lVar2;
  (*pcVar14)();
  __s10Foundation3URLV4pathSSvg();
  local_f0 = lVar8;
  _swift_bridgeObjectRelease(uVar6);
  (*pcVar14)(lVar11,lVar2);
  (*pcVar14)(lVar13,lVar2);
  uVar1 = *(ulong *)(puVar7 + 0x10);
  local_c0[0] = puVar7;
  if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
    FUN_10006fae0(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
  }
  puVar7 = local_c0[0];
  *(ulong *)(local_c0[0] + 0x10) = uVar1 + 1;
  *(long *)(local_c0[0] + uVar1 * 0x10 + 0x20) = lVar10;
  *(long *)(local_c0[0] + uVar1 * 0x10 + 0x28) = local_f0;
  __s10Foundation3URLV15fileURLWithPath11isDirectoryACSSh_SbtcfC
            (lVar13,0xd000000000000014,local_e8,1);
  __s10Foundation3URLV23resolvingSymlinksInPathACyF(lVar12);
  __s10Foundation3URLV016standardizedFileB0ACvg(lVar11);
  lVar10 = lVar12;
  lVar8 = lVar2;
  (*pcVar14)();
  __s10Foundation3URLV4pathSSvg();
  local_e8 = lVar8;
  (*pcVar14)(lVar11,lVar2);
  (*pcVar14)(lVar13,lVar2);
  uVar1 = *(ulong *)(puVar7 + 0x10);
  local_c0[0] = puVar7;
  if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
    FUN_10006fae0(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
  }
  puVar7 = local_c0[0];
  *(ulong *)(local_c0[0] + 0x10) = uVar1 + 1;
  *(long *)(local_c0[0] + uVar1 * 0x10 + 0x20) = lVar10;
  *(long *)(local_c0[0] + uVar1 * 0x10 + 0x28) = local_e8;
  __s10Foundation3URLV15fileURLWithPath11isDirectoryACSSh_SbtcfC
            (lVar13,0x6163696c7070412f,0xed0000736e6f6974,1);
  __s10Foundation3URLV23resolvingSymlinksInPathACyF(lVar12);
  __s10Foundation3URLV016standardizedFileB0ACvg(lVar11);
  lVar10 = lVar2;
  (*pcVar14)();
  __s10Foundation3URLV4pathSSvg();
  (*pcVar14)(lVar11,lVar2);
  (*pcVar14)(lVar13,lVar2);
  uVar1 = *(ulong *)(puVar7 + 0x10);
  local_c0[0] = puVar7;
  if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
    FUN_10006fae0(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
  }
  puVar7 = local_c0[0];
  *(ulong *)(local_c0[0] + 0x10) = uVar1 + 1;
  *(long *)(local_c0[0] + uVar1 * 0x10 + 0x20) = lVar12;
  *(long *)(local_c0[0] + uVar1 * 0x10 + 0x28) = lVar10;
  _swift_bridgeObjectRelease(puVar3);
  puVar3 = puVar7;
  FUN_100074e04();
  _swift_release(puVar7);
  pIVar4 = (ID *)(unaff_x20 + 0x10);
  local_c0[0] = puVar3;
  FUN_10003f030(pIVar4,*(undefined8 *)(unaff_x20 + 0x28));
  puVar3 = &DAT_100a76708;
  FUN_100004bb4(&DAT_100a76708,&DAT_10080c350);
  _swift_allocObject();
  lVar10 = local_e0;
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  uVar5 = *(undefined8 *)PTR__NSURLVolumeIsReadOnlyKey_100995390;
  *(undefined8 *)(puVar3 + 0x20) = uVar5;
  self = *pIVar4;
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(uVar5);
  uVar6 = 0;
  FUN_10000603c(0);
  puVar7 = puVar3;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar3,uVar6);
  local_c8 = 0;
  puVar7 = (undefined *)
           _objc_msgSend(self,"contentsOfDirectoryAtURL:includingPropertiesForKeys:options:error:",
                         uVar5,puVar7,0,&local_c8);
  if (puVar7 == (undefined *)0x0) {
    uVar5 = local_c8;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _swift_willThrow(0);
    _swift_bridgeObjectRelease(puVar3);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(long *)(lVar9 + -0x10) = unaff_x20;
    *(undefined8 *)(lVar9 + -8) = uVar5;
    FUN_1003fb4ec(FUN_1000d2a94,lVar9 + -0x20,0xd0000000000000af,0x8000000100885ec0,
                  0xd000000000000021,0x8000000100886060,0xc3,0);
    _swift_errorRelease(uVar5);
    puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(puVar7,lVar2);
    _swift_bridgeObjectRelease(puVar3);
    _swift_retain(unaff_x20);
    puVar3 = puVar7;
    FUN_1000d2818(puVar7,unaff_x20,local_c0);
    _swift_bridgeObjectRelease(puVar7);
    _swift_release(unaff_x20);
  }
  (*pcVar14)(lVar10,lVar2);
  _swift_bridgeObjectRelease(local_c0[0]);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

