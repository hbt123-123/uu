// rea decompile_all
// name: FUN_1007d1c24
// address: 0x1007d1c24
// body: available
// range: 0x1007d1c24-0x1007d1d93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1007d1c24(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   code *param_6)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar4 = param_4;
    }
    _swift_bridgeObjectRetain(param_4);
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    _swift_bridgeObjectRelease(param_4);
  }
  uVar3 = param_2;
  if (((param_3 & 1) != 0) && (uVar3 = uVar4, (long)uVar4 < (long)param_2)) {
    if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007d1d94);
      (*pcVar1)();
    }
    uVar3 = uVar4 * 2;
    if (uVar3 - param_2 == 0 || (long)uVar3 < (long)param_2) {
      uVar3 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar4 = param_4;
    }
    _swift_bridgeObjectRetain(param_4);
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    _swift_bridgeObjectRelease(param_4);
  }
  uVar2 = uVar4;
  FUN_1007d2200(uVar4,uVar3,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007d1d90);
      (*pcVar1)();
    }
    FUN_1007d1fe0(0,uVar4,uVar2 + 0x20,param_4,param_6);
  }
  else {
    uVar3 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar2) || ((void *)((long)(uVar3 + 0x20) + uVar4 * 8) <= (void *)(uVar2 + 0x20)))
    {
      (*param_6)(0);
      _memmove((void *)(uVar2 + 0x20),(void *)(uVar3 + 0x20),uVar4 << 3);
    }
    *(undefined8 *)(uVar3 + 0x10) = 0;
    _swift_bridgeObjectRelease(param_4);
  }
  return uVar2;
}

