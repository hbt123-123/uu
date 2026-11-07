// rea decompile_all
// name: FUN_1000130a4
// address: 0x1000130a4
// body: available
// range: 0x1000130a4-0x1000133f3 inclusive
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

void FUN_1000130a4(void)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_110 [16];
  undefined8 local_100;
  long lStack_f8;
  long *local_f0;
  undefined8 local_d8;
  long lStack_d0;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  uint uStack_9c;
  long local_98;
  undefined1 auStack_90 [4];
  undefined8 local_8c;
  undefined8 uStack_84;
  char local_68;
  
  lVar8 = *(long *)(unaff_x20 + 0x140);
  if (lVar8 == 0) {
    FUN_100401b14(0);
    FUN_1003fb4ec(FUN_100013fe8,0,0xd0000000000000a9,0x8000000100877660,0xd00000000000001d,
                  0x800000010087b2d0,0x197,0);
    return;
  }
  uVar10 = *(undefined8 *)(unaff_x20 + 0x138);
  local_98 = 0;
  _swift_bridgeObjectRetain(lVar8);
  uVar4 = NSScreen::screens((ID)&_OBJC_CLASS___NSScreen,"screens");
  uVar5 = 0;
  FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar4,uVar5);
  if (uVar4 >> 0x3e == 0) {
    uVar11 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar11 = uVar4 & 0xffffffffffffff8;
    if ((long)uVar4 < 0) {
      uVar11 = uVar4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar11 == 0) {
    _swift_bridgeObjectRelease(uVar4);
  }
  else {
    if ((long)uVar11 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000133f4);
      (*pcVar2)();
    }
    lVar9 = 0;
    uVar12 = 0;
    local_d8 = uVar10;
    lStack_d0 = lVar8;
    do {
      uVar1 = uStack_9c;
      if ((uVar4 & 0xc000000000000001) == 0) {
        uVar6 = *(ulong *)(uVar4 + uVar12 * 8 + 0x20);
      }
      else {
        uVar6 = uVar12;
        FUN_100169c00(uVar12,uVar4);
      }
      FUN_1003d541c();
      uVar7 = uVar6;
      FUN_10004ffa0();
      lVar8 = local_98;
      if ((uVar7 & 1) == 0) {
        FUN_10003990c(auStack_90,uVar6);
        if (local_68 == '\x02') {
          FUN_100401b14(0);
          (*(code *)PTR____chkstk_darwin_100995498)();
          local_f0 = (long *)CONCAT44(local_f0._4_4_,(int)uVar6);
          FUN_1003fb4ec(FUN_10003ffe0,&local_100,0xd0000000000000a9,0x8000000100877660,
                        0xd00000000000001d,0x800000010087b2d0,0x1a2,0);
          lVar8 = local_98;
        }
        else {
          local_b0 = CONCAT31(local_b0._1_3_,1);
          uStack_a4 = (undefined4)uStack_84;
          uStack_a0 = (undefined4)((ulong)uStack_84 >> 0x20);
          uStack_ac = (undefined4)local_8c;
          uStack_a8 = (undefined4)((ulong)local_8c >> 0x20);
          uStack_9c = uStack_9c & 0xffffff00;
          FUN_1000140c4(uVar6 & 0xffffffff,CONCAT44(uStack_ac,local_b0),
                        CONCAT44(uStack_a4,uStack_a8),CONCAT44(uVar1,uStack_a0) & 0xffffff00ffffffff
                       );
          bVar3 = SCARRY8(lVar9,1);
          lVar9 = lVar9 + 1;
          lVar8 = lVar9;
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100013324);
            (*pcVar2)();
          }
        }
      }
      local_98 = lVar8;
      uVar12 = uVar12 + 1;
    } while (uVar11 != uVar12);
    _swift_bridgeObjectRelease(uVar4);
    lVar8 = lStack_d0;
    uVar10 = local_d8;
  }
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_f0 = &local_98;
  local_100 = uVar10;
  lStack_f8 = lVar8;
  FUN_1003fb48c(FUN_10003ffe8,auStack_110,0xd0000000000000a9,0x8000000100877660,0xd00000000000001d,
                0x800000010087b2d0,0x1b4,0);
  _swift_bridgeObjectRelease(lVar8);
  return;
}

