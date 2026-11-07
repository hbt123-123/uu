// rea decompile_all
// name: FUN_10011b7b4
// address: 0x10011b7b4
// body: available
// range: 0x10011b7b4-0x10011bbab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10011ba2c to 0x10011b624 FUN_10011b624 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_10011b7b4(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined1 *puVar13;
  ulong uVar14;
  undefined1 auStack_c0 [16];
  long local_b0;
  undefined8 uStack_a8;
  undefined1 *local_a0;
  ulong uStack_98;
  undefined1 auStack_88 [8];
  undefined8 local_80;
  
  lVar4 = param_1;
  __sSS5countSivg();
  if (0x3ff < lVar4) {
    FUN_10011b624(param_1,param_2);
    return param_1;
  }
  lVar4 = param_1;
  FUN_10011df00(param_1,param_2);
  uVar12 = *(ulong *)(lVar4 + 0x10);
  if (uVar12 == 0) {
    _swift_bridgeObjectRelease(lVar4);
    FUN_100401b14(0);
    FUN_1003fb4bc(FUN_100119380,0,0xd000000000000092,0x8000000100882970,0xd000000000000011,
                  0x800000010088d3d0,0x2b7,0);
  }
  else {
    if (uVar12 != 1) {
      uVar5 = 0;
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)(uVar5);
      local_b0 = param_1;
      uStack_a8 = param_2;
      local_a0 = (undefined1 *)lVar4;
      FUN_1003fb45c(FUN_10011cddc,auStack_c0,0xd000000000000092,0x8000000100882970,
                    0xd000000000000011,0x800000010088d3d0,700,0);
    }
    uVar14 = 0;
    puVar11 = (ulong *)(lVar4 + 0x28);
    do {
      if (*(ulong *)(lVar4 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10011bba8);
        (*pcVar3)();
      }
      puVar1 = (undefined1 *)puVar11[-1];
      uVar2 = *puVar11;
      _swift_bridgeObjectRetain(uVar2);
      lVar6 = 0;
      _CGEventCreateKeyboardEvent(0,0,1);
      if (lVar6 == 0) {
        FUN_100401b14();
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_a0 = puVar1;
        uStack_98 = uVar2;
        FUN_1003fb4ec(FUN_10011cdcc,&local_b0,0xd000000000000092,0x8000000100882970,
                      0xd000000000000016,0x800000010088d3b0,0x2cf,0);
        _swift_bridgeObjectRelease(uVar2);
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_a0 = (undefined1 *)uVar14;
        uStack_98 = lVar4;
        FUN_1003fb4ec(FUN_10011cdd4,&local_b0,0xd000000000000092,0x8000000100882970,
                      0xd000000000000011,0x800000010088d3d0,0x2c1,0);
        _swift_bridgeObjectRelease(lVar4);
        return 0;
      }
      if ((uVar2 >> 0x3c & 1) == 0) {
        puVar10 = puVar1;
        if ((uVar2 & 0x2000000000000000) != 0) {
          puVar10 = (undefined1 *)(uVar2 >> 0x38 & 0xf);
        }
        puVar13 = (undefined1 *)((long)puVar10 << 0x10 | 7);
        puVar10 = puVar13;
        __sSS9UTF16ViewV16_nativeGetOffset3forSiSS5IndexV_tF(puVar13,puVar1,uVar2);
        __sSS9UTF16ViewV16_nativeGetOffset3forSiSS5IndexV_tF(puVar13,puVar1,uVar2);
        puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
      }
      else {
        puVar10 = puVar1;
        __sSS9UTF16ViewV13_foreignCountSiyF(puVar1,uVar2);
        puVar13 = puVar1;
        __sSS9UTF16ViewV13_foreignCountSiyF(puVar1,uVar2);
        puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
      }
      PTR___swiftEmptyArrayStorage_100995ea0 = puVar7;
      if (puVar13 != (undefined1 *)0x0) {
        if (0 < (long)puVar13) {
          puVar7 = &DAT_100a794b0;
          FUN_100004bb4(&DAT_100a794b0,&DAT_10080dd68);
          _swift_allocObject();
          puVar8 = puVar7;
          _malloc_size();
          *(undefined1 **)(puVar7 + 0x10) = puVar13;
          *(ulong *)(puVar7 + 0x18) =
               (long)(puVar8 + -0x20) - ((long)(puVar8 + -0x20) >> 0x3f) & 0xfffffffffffffffe;
        }
        _swift_bridgeObjectRetain(uVar2);
        puVar9 = auStack_88;
        FUN_10011b350(puVar9,puVar7 + 0x20,puVar13,puVar1,uVar2);
        _swift_bridgeObjectRelease(local_80);
        if (puVar9 != puVar13) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10011bbac);
          (*pcVar3)();
        }
      }
      uVar14 = uVar14 + 1;
      _CGEventKeyboardSetUnicodeString(lVar6,puVar10,puVar7 + 0x20);
      _swift_release(puVar7);
      _CGEventPost(0,lVar6);
      _swift_bridgeObjectRelease(uVar2);
      puVar11 = puVar11 + 2;
    } while (uVar12 != uVar14);
    _swift_bridgeObjectRelease(lVar4);
  }
  return 1;
}

