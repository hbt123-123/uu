// rea decompile_all
// name: FUN_10014932c
// address: 0x10014932c
// body: available
// range: 0x10014932c-0x1001494b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10014932c(undefined8 param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  
  FUN_100401b14(0);
  local_60 = param_1;
  FUN_1003fb45c(FUN_100149794,auStack_70,0xd0000000000000ab,0x8000000100891c00,0xd000000000000020,
                0x8000000100892290,0xc0,7);
  uVar2 = _objc_msgSend(*(ID *)(unaff_x20 + 0x18),"operations");
  uVar3 = 0;
  FUN_100148e14(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar2,uVar3);
  if (uVar2 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uVar2 & 0xffffffffffffff8;
    if ((long)uVar2 < 0) {
      uVar5 = uVar2;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar5 != 0) {
    if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1001494b4);
      (*pcVar1)();
    }
    uVar6 = 0;
    do {
      if ((uVar2 & 0xc000000000000001) == 0) {
        uVar4 = *(ulong *)(uVar2 + uVar6 * 8 + 0x20);
      }
      else {
        uVar4 = uVar6;
        FUN_10016a1d0(uVar6,uVar2);
      }
      uVar3 = 0;
      FUN_10015240c(0);
      _swift_dynamicCastClass(uVar4,uVar3);
      if (uVar4 != 0) {
        FUN_10014ff28(param_1);
      }
      uVar6 = uVar6 + 1;
    } while (uVar5 != uVar6);
  }
  _swift_bridgeObjectRelease(uVar2);
  return;
}

