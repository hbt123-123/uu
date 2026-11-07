// rea decompile_all
// name: FUN_10019cb78
// address: 0x10019cb78
// body: available
// range: 0x10019cb78-0x10019cd4f inclusive
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

undefined1  [16] FUN_10019cb78(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  ID IVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong self;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  IVar3 = NEMUKeyCodes::shared((ID)&objc::class_t::NEMUKeyCodes,"shared");
  if (IVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10019cd4c);
    (*pcVar2)();
  }
  uVar4 = NEMUKeyCodes::getKeyCodes(IVar3,"getKeyCodes");
  if (uVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10019cd50);
    (*pcVar2)();
  }
  uVar5 = 0;
  FUN_10004003c(0,&DAT_100a7a460,&PTR_NEMUKeyMapping_100a65938);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar4,uVar5);
  if (uVar4 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = uVar4 & 0xffffffffffffff8;
    if ((long)uVar4 < 0) {
      uVar7 = uVar4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar7 != 0) {
    uVar8 = 0;
    do {
      if ((uVar4 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10019cd04);
          (*pcVar2)();
        }
        self = *(ID *)(uVar4 + uVar8 * 8 + 0x20);
      }
      else {
        self = uVar8;
        FUN_100169fe4(uVar8,uVar4);
      }
      uVar1 = uVar8 + 1;
      if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10019cd00);
        (*pcVar2)();
      }
      IVar3 = _objc_msgSend(self,"keyCode");
      if (IVar3 == (param_1 & 0xffff)) {
        _swift_bridgeObjectRelease(uVar4);
        pcVar6 = "text";
        IVar3 = _objc_msgSend(self,"text");
        if (IVar3 == 0) goto LAB_10019cd24;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        goto LAB_10019cd2c;
      }
      uVar8 = uVar8 + 1;
    } while (uVar1 != uVar7);
  }
  _swift_bridgeObjectRelease(uVar4);
LAB_10019cd24:
  IVar3 = 0;
  pcVar6 = (char *)0x0;
LAB_10019cd2c:
  auVar9._8_8_ = pcVar6;
  auVar9._0_8_ = IVar3;
  return auVar9;
}

