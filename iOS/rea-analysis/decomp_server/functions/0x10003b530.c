// rea decompile_all
// name: FUN_10003b530
// address: 0x10003b530
// body: available
// range: 0x10003b530-0x10003b883 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10003b880 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_10003b530(ulong param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ID self;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ushort uVar12;
  undefined1 auStack_100 [16];
  undefined4 local_f0;
  uint local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_a4;
  undefined4 local_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar3 = param_1;
  FUN_100002a9c();
  if (uVar3 == 0) {
    FUN_100401b14();
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_f0 = (int)param_1;
    FUN_1003fb4ec(FUN_10003b884,auStack_100,0xd0000000000000a9,0x8000000100877660,0xd00000000000001a
                  ,0x80000001008777d0,0x85,0);
    puVar7 = (undefined *)0x0;
  }
  else {
    uVar4 = 0;
    local_a4 = (int)param_1;
    FUN_10004003c(0,&DAT_100a75958,&PTR__OBJC_CLASS___NSValue_100a657a0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar3,uVar4);
    uVar10 = uVar3 & 0xffffffffffffff8;
    if (uVar3 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar10 + 0x10);
      puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    else {
      uVar8 = uVar10;
      if ((long)uVar3 < 0) {
        uVar8 = uVar3;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    PTR___swiftEmptyArrayStorage_100995ea0 = puVar7;
    if (uVar8 != 0) {
      uVar9 = 0;
      do {
        while( true ) {
          if ((uVar3 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uVar10 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10003b78c);
              (*pcVar2)();
            }
            self = *(ID *)(uVar3 + uVar9 * 8 + 0x20);
          }
          else {
            self = uVar9;
            FUN_100169fbc(uVar9,uVar3);
          }
          if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10003b788);
            (*pcVar2)();
          }
          uVar11 = uVar9 + 1;
          uStack_88 = 0;
          local_90 = 0;
          uStack_8c = 0;
          local_78 = 0;
          uStack_80 = 0;
          iStack_98 = 0;
          iStack_94 = 0;
          local_a0 = 0;
          iStack_9c = 0;
          _objc_msgSend(self,"getValue:",&local_a0);
          uVar1 = local_a0;
          uVar12 = NEON_umaxv(CONCAT26(-(ushort)(local_90 < 1),
                                       CONCAT24(-(ushort)(iStack_94 < 1),
                                                CONCAT22(-(ushort)(iStack_98 < 1),
                                                         -(ushort)(iStack_9c < 1)))),2);
          if ((uVar12 & 1) != 0) break;
          uStack_c8 = uStack_80;
          local_d0 = uStack_88;
          local_d4 = (uint)(byte)local_78;
          puVar5 = puVar7;
          local_c0 = CONCAT44(iStack_98,iStack_9c);
          uStack_b8 = CONCAT44(local_90,iStack_94);
          _swift_isUniquelyReferenced_nonNull_native();
          puVar6 = puVar7;
          if (((ulong)puVar5 & 1) == 0) {
            puVar6 = (undefined *)0x0;
            FUN_100033f3c(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
          }
          uVar9 = *(ulong *)(puVar6 + 0x10);
          puVar7 = puVar6;
          if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar9) {
            puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
            FUN_100033f3c(puVar7,uVar9 + 1,1,puVar6);
          }
          *(ulong *)(puVar7 + 0x10) = uVar9 + 1;
          *(undefined4 *)(puVar7 + uVar9 * 0x30 + 0x20) = uVar1;
          *(undefined8 *)(puVar7 + uVar9 * 0x30 + 0x2c) = uStack_b8;
          *(undefined8 *)(puVar7 + uVar9 * 0x30 + 0x24) = local_c0;
          *(undefined8 *)(puVar7 + uVar9 * 0x30 + 0x40) = uStack_c8;
          *(undefined8 *)(puVar7 + uVar9 * 0x30 + 0x38) = local_d0;
          puVar7[uVar9 * 0x30 + 0x48] = (char)local_d4;
          uVar9 = uVar11;
          if (uVar11 == uVar8) goto LAB_10003b7a8;
        }
        uVar9 = uVar9 + 1;
      } while (uVar11 != uVar8);
    }
LAB_10003b7a8:
    _swift_bridgeObjectRelease(uVar3);
    if (*(long *)(puVar7 + 0x10) == 0) {
      _swift_bridgeObjectRelease(puVar7);
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_f0 = local_a4;
      FUN_1003fb4ec(FUN_10003b88c,auStack_100,0xd0000000000000a9,0x8000000100877660,
                    0xd00000000000001a,0x80000001008777d0,0x8d,0);
      puVar7 = (undefined *)0x0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return puVar7;
}

