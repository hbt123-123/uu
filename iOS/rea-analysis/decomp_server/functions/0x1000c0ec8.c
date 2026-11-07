// rea decompile_all
// name: FUN_1000c0ec8
// address: 0x1000c0ec8
// body: available
// range: 0x1000c0ec8-0x1000c111f inclusive
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
/* WARNING: Removing unreachable block (ram,0x0001000c110c) */

undefined1  [16] FUN_1000c0ec8(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined *local_68;
  
  uVar5 = NSScreen::screens((ID)&_OBJC_CLASS___NSScreen,"screens");
  uVar6 = 0;
  FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar5,uVar6);
  local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_10006fae0(0,0,0);
  puVar9 = local_68;
  if (uVar5 >> 0x3e == 0) {
    uVar13 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar13 = uVar5 & 0xffffffffffffff8;
    if ((long)uVar5 < 0) {
      uVar13 = uVar5;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar13 != 0) {
    uVar12 = 0;
    do {
      if ((uVar5 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1000c1034);
          (*pcVar4)();
        }
        uVar7 = *(ulong *)(uVar5 + uVar12 * 8 + 0x20);
      }
      else {
        uVar7 = uVar12;
        FUN_100169c00(uVar12,uVar5);
      }
      uVar1 = uVar12 + 1;
      if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000c1030);
        (*pcVar4)();
      }
      uVar8 = uVar12;
      FUN_1000c0c94();
      uVar2 = *(ulong *)(puVar9 + 0x10);
      local_68 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar2) {
        FUN_10006fae0(1 < *(ulong *)(puVar9 + 0x18),uVar2 + 1,1);
      }
      *(ulong *)(local_68 + 0x10) = uVar2 + 1;
      *(ulong *)(local_68 + uVar2 * 0x10 + 0x20) = uVar8;
      *(ulong *)(local_68 + uVar2 * 0x10 + 0x28) = uVar7;
      uVar12 = uVar12 + 1;
      puVar9 = local_68;
    } while (uVar1 != uVar13);
  }
  _swift_bridgeObjectRelease(uVar5);
  local_68 = puVar9;
  _swift_retain(puVar9);
  FUN_1000bfeb4(&local_68);
  _swift_release(puVar9);
  puVar3 = local_68;
  puVar9 = &DAT_100a756e8;
  FUN_100004bb4(&DAT_100a756e8,&BYTE_100809720);
  puVar10 = &DAT_100a756f0;
  FUN_10003f840(&DAT_100a756f0,&DAT_100a756e8,&BYTE_100809720,PTR___sSayxGSKsMc_100995888);
  uVar6 = 0x7c;
  uVar11 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x7c,0xe100000000000000,puVar9,puVar10);
  _swift_release(puVar3);
  auVar14._8_8_ = uVar11;
  auVar14._0_8_ = uVar6;
  return auVar14;
}

