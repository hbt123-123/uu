// rea decompile_all
// name: FUN_100014dfc
// address: 0x100014dfc
// body: available
// range: 0x100014dfc-0x10001527b inclusive
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

void FUN_100014dfc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined **ppuVar17;
  ulong uVar18;
  undefined *puVar19;
  ulong uVar20;
  undefined *puVar21;
  ulong uVar22;
  undefined1 auStack_1a0 [16];
  undefined8 local_190;
  undefined8 uStack_188;
  undefined *local_180;
  undefined *puStack_178;
  undefined *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined8 local_130;
  undefined *local_120;
  
  local_148 = &_OBJC_CLASS___NSScreen;
  local_160 = param_1;
  local_158 = param_2;
  uVar10 = NSScreen::screens((ID)&_OBJC_CLASS___NSScreen,"screens");
  uVar11 = 0;
  FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
  local_150 = uVar11;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
  uVar20 = uVar10 & 0xffffffffffffff8;
  if (uVar10 >> 0x3e == 0) {
    uVar22 = *(ulong *)(uVar20 + 0x10);
  }
  else {
    uVar22 = uVar20;
    if ((long)uVar10 < 0) {
      uVar22 = uVar10;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  local_140 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (uVar22 != 0) {
    uVar18 = 0;
    do {
      while( true ) {
        if ((uVar10 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar20 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x100014fc8);
            (*pcVar9)();
          }
          uVar12 = *(ulong *)(uVar10 + uVar18 * 8 + 0x20);
        }
        else {
          uVar12 = uVar18;
          FUN_100169c00(uVar18,uVar10);
        }
        uVar1 = uVar18 + 1;
        if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100014fc4);
          (*pcVar9)();
        }
        uVar13 = uVar12;
        FUN_1003d541c();
        FUN_10004ffa0();
        puVar21 = local_140;
        if ((uVar13 & 1) == 0) break;
        uVar18 = uVar18 + 1;
        if (uVar1 == uVar22) goto LAB_100014fec;
      }
      puVar14 = local_140;
      _swift_isUniquelyReferenced_nonNull_native();
      local_138 = puVar21;
      if (((ulong)puVar14 & 1) == 0) {
        FUN_10006fb44(0,*(long *)(puVar21 + 0x10) + 1,1);
      }
      uVar18 = *(ulong *)(local_138 + 0x10);
      if (*(ulong *)(local_138 + 0x18) >> 1 <= uVar18) {
        FUN_10006fb44(1 < *(ulong *)(local_138 + 0x18),uVar18 + 1,1);
      }
      *(ulong *)(local_138 + 0x10) = uVar18 + 1;
      *(ulong *)(local_138 + uVar18 * 8 + 0x20) = uVar12;
      uVar18 = uVar1;
      local_140 = local_138;
    } while (uVar1 != uVar22);
  }
LAB_100014fec:
  _swift_bridgeObjectRelease(uVar10);
  if (((long)local_140 < 0) || (((ulong)local_140 >> 0x3e & 1) != 0)) {
    puVar21 = local_140;
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  else {
    puVar21 = *(undefined **)(local_140 + 0x10);
  }
  puVar14 = local_148;
  uVar11 = local_150;
  _swift_release(local_140);
  puVar14 = (undefined *)_objc_msgSend((ID)puVar14,"screens");
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
  if ((ulong)puVar14 >> 0x3e == 0) {
    puVar19 = *(undefined **)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar19 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
    if ((long)puVar14 < 0) {
      puVar19 = puVar14;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  _swift_bridgeObjectRelease();
  if (!SBORROW8((long)puVar19,(long)puVar21)) {
    FUN_10003e7b0();
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    uVar8 = local_158;
    uVar7 = local_160;
    local_190 = local_160;
    uStack_188 = local_158;
    local_180 = puVar21;
    puStack_178 = puVar19 + -(long)puVar21;
    local_170 = puVar14;
    uStack_168 = uVar11;
    FUN_1003fb48c(FUN_10003e8ac,auStack_1a0,0xd0000000000000a9,0x8000000100877660,0xd00000000000001d
                  ,0x8000000100877870,0x24e,0);
    puVar15 = (undefined8 *)&DAT_100a75980;
    FUN_100004bb4(&DAT_100a75980,&DAT_100809a40);
    _swift_initStackObject();
    puVar15[3] = 6;
    puVar15[2] = 3;
    puVar16 = puVar15;
    FUN_1003a0f04();
    puVar6 = PTR___sSiN_100995968;
    uVar2 = *puVar16;
    uVar4 = puVar16[1];
    local_120 = PTR___sSiN_100995968;
    local_138 = puVar21;
    FUN_10003e8bc(&local_138,puVar15 + 6);
    puVar15[4] = uVar2;
    puVar15[5] = uVar4;
    _swift_bridgeObjectRetain(uVar4);
    ppuVar17 = &local_138;
    FUN_10003f094();
    FUN_1003a0f30();
    puVar3 = *ppuVar17;
    puVar5 = ppuVar17[1];
    local_120 = puVar6;
    local_138 = puVar19 + -(long)puVar21;
    FUN_10003e8bc(&local_138,puVar15 + 0xc);
    puVar15[10] = puVar3;
    puVar15[0xb] = puVar5;
    _swift_bridgeObjectRetain(puVar5);
    ppuVar17 = &local_138;
    FUN_10003f094();
    FUN_1003a0e84();
    puVar21 = *ppuVar17;
    puVar19 = ppuVar17[1];
    local_120 = PTR___sSSN_1009957f8;
    local_138 = puVar14;
    local_130 = uVar11;
    FUN_10003e8bc(&local_138,puVar15 + 0x12);
    puVar15[0x10] = puVar21;
    puVar15[0x11] = puVar19;
    _swift_bridgeObjectRetain(puVar19);
    FUN_10003f094(&local_138);
    FUN_1000f62a0(uVar7,uVar8,puVar15);
    _swift_setDeallocating(puVar15);
    _swift_arrayDestroy(puVar15 + 4,3,&DAT_1009b7a40);
    return;
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x100015268);
  (*pcVar9)();
}

