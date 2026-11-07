// rea decompile_all
// name: FUN_10062ce64
// address: 0x10062ce64
// body: available
// range: 0x10062ce64-0x10062cfd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10062ce64(ulong param_1)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x10) != 4) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10062cf90);
    (*pcVar4)();
  }
  bVar2 = *(byte *)(param_1 + 0x20);
  uVar5 = param_1;
  _swift_bridgeObjectRetain();
  FUN_10062bc00();
  if (*(ulong *)(uVar5 + 0x10) <= (ulong)bVar2) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10062cf94);
    (*pcVar4)();
  }
  uVar1 = *(uint *)(uVar5 + (ulong)bVar2 * 4 + 0x20);
  _swift_bridgeObjectRelease();
  if (0xff < uVar1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10062cf98);
    (*pcVar4)();
  }
  uVar5 = param_1;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar5 & 1) == 0) {
    uVar5 = param_1;
    FUN_1006541b8();
    lVar6 = *(long *)(uVar5 + 0x10);
    uVar3 = uVar5;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
    uVar3 = param_1;
  }
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10062cfb0);
    (*pcVar4)();
  }
  *(char *)(uVar3 + 0x20) = (char)uVar1;
  bVar2 = *(byte *)(param_1 + 0x21);
  FUN_10062bc00();
  if (*(ulong *)(uVar5 + 0x10) <= (ulong)bVar2) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10062cfb4);
    (*pcVar4)();
  }
  uVar1 = *(uint *)(uVar5 + (ulong)bVar2 * 4 + 0x20);
  _swift_bridgeObjectRelease();
  if (0xff < uVar1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10062cfb8);
    (*pcVar4)();
  }
  if (*(ulong *)(uVar3 + 0x10) < 2) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10062cfbc);
    (*pcVar4)();
  }
  *(char *)(uVar3 + 0x21) = (char)uVar1;
  bVar2 = *(byte *)(param_1 + 0x22);
  FUN_10062bc00();
  if ((ulong)bVar2 < *(ulong *)(uVar5 + 0x10)) {
    uVar1 = *(uint *)(uVar5 + (ulong)bVar2 * 4 + 0x20);
    _swift_bridgeObjectRelease();
    if (0xff < uVar1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10062cfc4);
      (*pcVar4)();
    }
    if (*(ulong *)(uVar3 + 0x10) < 3) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10062cfc8);
      (*pcVar4)();
    }
    *(char *)(uVar3 + 0x22) = (char)uVar1;
    bVar2 = *(byte *)(param_1 + 0x23);
    FUN_10062bc00();
    if (*(ulong *)(uVar5 + 0x10) <= (ulong)bVar2) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10062cfcc);
      (*pcVar4)();
    }
    uVar1 = *(uint *)(uVar5 + (ulong)bVar2 * 4 + 0x20);
    _swift_bridgeObjectRelease();
    if (0xff < uVar1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10062cfd0);
      (*pcVar4)();
    }
    if (*(ulong *)(uVar3 + 0x10) < 4) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10062cfd4);
      (*pcVar4)();
    }
    *(char *)(uVar3 + 0x23) = (char)uVar1;
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10062cfc0);
  (*pcVar4)();
}

