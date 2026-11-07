// rea decompile_all
// name: FUN_100405c94
// address: 0x100405c94
// body: available
// range: 0x100405c94-0x1004060e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100405c94(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  ID IVar8;
  ID IVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  
  uVar6 = NSScreen::screens((ID)&_OBJC_CLASS___NSScreen,"screens");
  uVar7 = 0;
  FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar6,uVar7);
  IVar8 = NSScreen::mainScreen((ID)&_OBJC_CLASS___NSScreen,"mainScreen");
  if (IVar8 == 0) {
    uVar17 = 0;
  }
  else {
    IVar9 = IVar8;
    FUN_1003d541c();
    uVar17 = IVar9 & 0xffffffff;
  }
  uVar10 = 0;
  FUN_1003d7218();
  if (uVar10 == 0) {
    uVar18 = 0;
  }
  else {
    uVar18 = uVar10;
    FUN_1003d541c();
    uVar18 = uVar18 & 0xffffffff;
  }
  uVar17 = uVar17 | (ulong)(IVar8 == 0) << 0x20;
  uVar15 = uVar6;
  FUN_100405348();
  uVar18 = uVar18 | (ulong)(uVar10 == 0) << 0x20;
  uVar10 = uVar6;
  FUN_100405348();
  puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
  _swift_bridgeObjectRetain(uVar6);
  FUN_10006fae0(0,0,0);
  if (uVar6 >> 0x3e == 0) {
    uVar19 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar19 = uVar6 & 0xffffffffffffff8;
    if ((uVar6 & 0x8000000000000000) != 0) {
      uVar19 = uVar6;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar19 != 0) {
    uVar20 = 0;
    do {
      if ((uVar6 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1004060cc);
          (*pcVar5)();
        }
        uVar11 = *(ulong *)(uVar6 + uVar20 * 8 + 0x20);
      }
      else {
        uVar11 = uVar20;
        FUN_100169c00(uVar20,uVar6);
      }
      uVar1 = uVar20 + 1;
      if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1004060c8);
        (*pcVar5)();
      }
      uVar12 = uVar20;
      FUN_100405764();
      uVar2 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar2) {
        FUN_10006fae0(1 < *(ulong *)(puVar4 + 0x18),uVar2 + 1,1);
      }
      *(ulong *)(puVar4 + 0x10) = uVar2 + 1;
      *(ulong *)(puVar4 + uVar2 * 0x10 + 0x20) = uVar12;
      *(ulong *)(puVar4 + uVar2 * 0x10 + 0x28) = uVar11;
      uVar20 = uVar20 + 1;
    } while (uVar1 != uVar19);
  }
  _swift_bridgeObjectRelease(uVar6);
  __ss11_StringGutsV4growyySiF(0x31);
  _swift_bridgeObjectRelease(0xe000000000000000);
  if (uVar6 >> 0x3e != 0) {
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  _swift_bridgeObjectRelease(uVar6);
  puVar13 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar13);
  __sSS6appendyySSF(0x646e496e69616d20,0xeb000000003d7865);
  __sSS6appendyySSF(uVar17,uVar15);
  _swift_bridgeObjectRelease(uVar15);
  __sSS6appendyySSF(0x496e696769726f20,0xed00003d7865646e);
  __sSS6appendyySSF(uVar18,uVar10);
  _swift_bridgeObjectRelease(uVar10);
  __sSS6appendyySSF(0x736e656572637320,0xea00000000005b3d);
  puVar13 = &DAT_100a756e8;
  FUN_100004bb4(&DAT_100a756e8,&BYTE_100809720);
  puVar14 = &DAT_100a756f0;
  FUN_10003f840(&DAT_100a756f0,&DAT_100a756e8,&BYTE_100809720,PTR___sSayxGSKsMc_100995888);
  uVar7 = 0x203b;
  uVar16 = 0xe200000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x203b,0xe200000000000000,puVar13,puVar14);
  _swift_release(puVar4);
  __sSS6appendyySSF(uVar7,uVar16);
  _swift_bridgeObjectRelease(uVar16);
  __sSS6appendyySSF(0x5d,0xe100000000000000);
  auVar3._8_8_ = 0xe600000000000000;
  auVar3._0_8_ = 0x3d746e756f63;
  return auVar3;
}

