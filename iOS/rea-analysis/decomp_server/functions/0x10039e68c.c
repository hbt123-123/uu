// rea decompile_all
// name: FUN_10039e68c
// address: 0x10039e68c
// body: available
// range: 0x10039e68c-0x10039e7df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10039e68c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = param_4 >> 0x3e;
  if (uVar5 == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10039e7e0);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (uVar5 == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_10040a168(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10039e7dc);
      (*pcVar1)();
    }
    if (uVar5 != 0) {
      uVar5 = param_4 & 0xffffffffffffff8;
      if ((param_4 & 0x8000000000000000) != 0) {
        uVar5 = param_4;
      }
      __ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF
                (0,uVar2,uVar3 + 0x20,uVar5);
      return uVar3;
    }
    _swift_arrayInitWithCopy
              (uVar3 + 0x20,(param_4 & 0xffffffffffffff8) + 0x20,uVar2,PTR___syXlN_100995e80 + 8);
  }
  else {
    uVar5 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar5) || ((void *)((long)(uVar5 + 0x20) + uVar2 * 8) <= (void *)(uVar3 + 0x20)))
    {
      _memmove((void *)(uVar3 + 0x20),(void *)(uVar5 + 0x20),uVar2 << 3);
    }
    *(undefined8 *)(uVar5 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return uVar3;
}

