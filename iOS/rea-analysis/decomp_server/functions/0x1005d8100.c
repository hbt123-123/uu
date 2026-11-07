// rea decompile_all
// name: FUN_1005d8100
// address: 0x1005d8100
// body: available
// range: 0x1005d8100-0x1005d869b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005d8698 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1005d8100(undefined8 param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long unaff_x20;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_c0 [24];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined *local_90;
  undefined1 auStack_88 [24];
  long local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar15 = *(long *)(unaff_x20 + 0x10);
  uVar13 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((long)uVar13 < 0x40) {
    uVar14 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(lVar15 + 0x38);
  _swift_bridgeObjectRetain(lVar15);
  lVar16 = 0;
  while( true ) {
    while (uVar14 != 0) {
      uVar2 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      puVar1 = (undefined8 *)
               (*(long *)(lVar15 + 0x30) +
               (lVar16 << 10 | LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) << 4));
      uVar11 = *puVar1;
      puVar6 = (undefined *)puVar1[1];
      uVar14 = uVar14 - 1 & uVar14;
      local_a8 = (undefined1 *)0x0;
      local_a0 = 0xe000000000000000;
      _swift_bridgeObjectRetain(puVar6);
      __ss11_StringGutsV4growyySiF(0x21);
      _swift_bridgeObjectRelease(local_a0);
      local_a8 = (undefined1 *)0xd00000000000001f;
      local_a0 = 0x80000001008be3a0;
      __sSS6appendyySSF(uVar11,puVar6);
      uVar9 = local_a0;
      puVar5 = local_a8;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(local_a8,local_a0);
      _swift_bridgeObjectRelease(uVar9);
      local_70 = 0;
      _SecRequirementCreateWithString(puVar5,0,&local_70);
      if ((int)puVar5 == 0) {
        uVar9 = param_1;
        _SecCodeCheckValidity(param_1,0,local_70);
        if ((int)uVar9 == 0) {
          _swift_beginAccess(&DAT_100b3a708,auStack_c0,0,0);
          uVar9 = DAT_100b3a710;
          pcVar3 = DAT_100b3a708;
          if (DAT_100b3a708 == (code *)0x0) {
            _swift_release(lVar15);
          }
          else {
            local_a8 = (undefined1 *)0x0;
            local_a0 = 0xe000000000000000;
            _swift_retain(DAT_100b3a710);
            __ss11_StringGutsV4growyySiF(0x2b);
            _swift_bridgeObjectRelease(local_a0);
            local_a8 = (undefined1 *)0xd000000000000029;
            local_a0 = 0x80000001008be420;
            __sSS6appendyySSF(uVar11,puVar6);
            _swift_bridgeObjectRelease(puVar6);
            local_90 = PTR___sSSN_1009957f8;
            ppuVar10 = &local_a8;
            puVar6 = PTR___sypN_100995e88 + 8;
            __sSS10describingSSx_tclufC(ppuVar10,puVar6);
            (*pcVar3)(1,ppuVar10,puVar6,
                      "/Users/game-netease/Library/Developer/Xcode/DerivedData/nrd-mac-server-bmdigyyhsonjagbeixjtsekhneee/SourcePackages/checkouts/nrd-mac-uuxpc/Sources/Security/XPCConnectionVerifier.swift"
                      ,0xb7,2,"verifyWithRequirementString(secCode:)",0x25,2);
            _swift_release(lVar15);
            FUN_10007ed2c(pcVar3,uVar9);
          }
          _swift_bridgeObjectRelease(puVar6);
          uVar11 = 1;
          goto LAB_1005d8528;
        }
        _swift_bridgeObjectRelease(puVar6);
      }
      else {
        _swift_beginAccess(&DAT_100b3a708,auStack_88,0,0);
        uVar9 = DAT_100b3a710;
        pcVar3 = DAT_100b3a708;
        if (DAT_100b3a708 != (code *)0x0) {
          local_a8 = (undefined1 *)0x0;
          local_a0 = 0xe000000000000000;
          _swift_retain(DAT_100b3a710);
          __ss11_StringGutsV4growyySiF(0x29);
          _swift_bridgeObjectRelease(local_a0);
          local_a8 = (undefined1 *)0xd000000000000027;
          local_a0 = 0x80000001008be3f0;
          __sSS6appendyySSF(uVar11,puVar6);
          _swift_bridgeObjectRelease(puVar6);
          local_90 = PTR___sSSN_1009957f8;
          ppuVar10 = &local_a8;
          puVar6 = PTR___sypN_100995e88 + 8;
          __sSS10describingSSx_tclufC(ppuVar10,puVar6);
          (*pcVar3)(3,ppuVar10,puVar6,
                    "/Users/game-netease/Library/Developer/Xcode/DerivedData/nrd-mac-server-bmdigyyhsonjagbeixjtsekhneee/SourcePackages/checkouts/nrd-mac-uuxpc/Sources/Security/XPCConnectionVerifier.swift"
                    ,0xb7,2,"verifyWithRequirementString(secCode:)",0x25,2);
          FUN_10007ed2c(pcVar3,uVar9);
        }
        _swift_bridgeObjectRelease(puVar6);
      }
    }
    bVar4 = SCARRY8(lVar16,1);
    lVar16 = lVar16 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1005d8698);
      (*pcVar3)();
    }
    if ((long)(uVar13 + 0x3f >> 6) <= lVar16) break;
    uVar14 = ((ulong *)(lVar15 + 0x38))[lVar16];
  }
  _swift_release(lVar15);
  _swift_beginAccess(&DAT_100b3a708,auStack_c0,0,0);
  uVar11 = DAT_100b3a710;
  pcVar3 = DAT_100b3a708;
  if (DAT_100b3a708 != (code *)0x0) {
    local_a8 = (undefined1 *)0x0;
    local_a0 = 0xe000000000000000;
    _swift_retain(DAT_100b3a710);
    __ss11_StringGutsV4growyySiF(0x32);
    _swift_bridgeObjectRelease(local_a0);
    local_a8 = &DAT_d000000000000030;
    local_a0 = 0x80000001008be450;
    local_70 = lVar15;
    _swift_bridgeObjectRetain(lVar15);
    puVar6 = &DAT_100aae038;
    FUN_100004bb4(&DAT_100aae038,&DAT_10083f4b0);
    puVar7 = puVar6;
    FUN_1005d9c88();
    puVar8 = puVar7;
    FUN_1005d91cc();
    uVar9 = 0x2c;
    uVar12 = 0xe100000000000000;
    __sSTsSy7ElementRpzrlE6joined9separatorS2S_tF(0x2c,0xe100000000000000,puVar6,puVar7,puVar8);
    _swift_bridgeObjectRelease(lVar15);
    __sSS6appendyySSF(uVar9,uVar12);
    _swift_bridgeObjectRelease(uVar12);
    local_90 = PTR___sSSN_1009957f8;
    ppuVar10 = &local_a8;
    puVar6 = PTR___sypN_100995e88 + 8;
    __sSS10describingSSx_tclufC(ppuVar10,puVar6);
    (*pcVar3)(3,ppuVar10,puVar6,
              "/Users/game-netease/Library/Developer/Xcode/DerivedData/nrd-mac-server-bmdigyyhsonjagbeixjtsekhneee/SourcePackages/checkouts/nrd-mac-uuxpc/Sources/Security/XPCConnectionVerifier.swift"
              ,0xb7,2,"verifyWithRequirementString(secCode:)",0x25,2);
    FUN_10007ed2c(pcVar3,uVar11);
    _swift_bridgeObjectRelease(puVar6);
  }
  uVar11 = 0;
LAB_1005d8528:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar11);
  }
  return;
}

