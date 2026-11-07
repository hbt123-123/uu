// rea decompile_all
// name: FUN_1000b507c
// address: 0x1000b507c
// body: available
// range: 0x1000b507c-0x1000b5337 inclusive
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

ulong FUN_1000b507c(void)

{
  char *pcVar1;
  code *pcVar2;
  ID IVar3;
  char *pcVar4;
  undefined8 uVar5;
  ulong self;
  ulong uVar6;
  char *pcVar7;
  byte bVar8;
  char *pcVar9;
  ulong uVar10;
  
  IVar3 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace,"sharedWorkspace");
  pcVar4 = (char *)NSWorkspace::runningApplications(IVar3,"runningApplications");
  uVar5 = 0;
  FUN_1000b654c(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(pcVar4,uVar5);
  if ((ulong)pcVar4 >> 0x3e == 0) {
    pcVar9 = *(char **)(((ulong)pcVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    pcVar9 = (char *)((ulong)pcVar4 & 0xffffffffffffff8);
    if ((long)pcVar4 < 0) {
      pcVar9 = pcVar4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (pcVar9 != (char *)0x0) {
    uVar10 = 0;
    do {
      if (((ulong)pcVar4 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)pcVar4 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1000b52e4);
          (*pcVar2)();
        }
        self = *(ulong *)(pcVar4 + uVar10 * 8 + 0x20);
      }
      else {
        self = uVar10;
        FUN_100169ff8(uVar10,pcVar4);
      }
      pcVar1 = (char *)(uVar10 + 1);
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000b52e0);
        (*pcVar2)();
      }
      pcVar7 = "bundleIdentifier";
      uVar6 = _objc_msgSend(self,"bundleIdentifier");
      if (uVar6 != 0) {
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        if (uVar6 == 0xd000000000000015 && pcVar7 == (char *)0x8000000100882540) {
LAB_1000b529c:
          _swift_bridgeObjectRelease(pcVar4);
          pcVar4 = pcVar7;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar6,pcVar7,0xd000000000000015,0x8000000100882540,0);
          _swift_bridgeObjectRelease(pcVar7);
          if ((uVar6 & 1) == 0) goto LAB_1000b5228;
        }
LAB_1000b52b0:
        _swift_bridgeObjectRelease(pcVar4);
        IVar3 = _objc_msgSend(self,"processIdentifier");
        bVar8 = 0;
        uVar10 = IVar3 & 0xffffffff;
        goto LAB_1000b530c;
      }
LAB_1000b5228:
      pcVar7 = "localizedName";
      uVar6 = _objc_msgSend(self,"localizedName");
      if (uVar6 != 0) {
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        if ((uVar6 == 0x6e69776e69676f6c) && (pcVar7 == (char *)0xeb00000000776f64)) {
          pcVar7 = (char *)0xeb00000000776f64;
          goto LAB_1000b529c;
        }
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar6,pcVar7,0x6e69776e69676f6c,0xeb00000000776f64,0);
        _swift_bridgeObjectRelease(pcVar7);
        if ((uVar6 & 1) != 0) goto LAB_1000b52b0;
      }
      uVar10 = uVar10 + 1;
    } while (pcVar1 != pcVar9);
  }
  _swift_bridgeObjectRelease(pcVar4);
  uVar10 = 0;
  bVar8 = 1;
LAB_1000b530c:
  return uVar10 | (ulong)bVar8 << 0x20;
}

