// rea decompile_all
// name: FUN_10034b850
// address: 0x10034b850
// body: available
// range: 0x10034b850-0x10034b987 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_10034b850(ulong param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_90 [16];
  ulong *local_80;
  ulong local_68;
  
  FUN_10034b05c();
  uVar2 = param_1;
  FUN_10034c39c();
  _swift_bridgeObjectRelease(param_1);
  uVar7 = uVar2 & 0xffffffffffffff8;
  if (uVar2 >> 0x3e == 0) {
    uVar6 = *(ulong *)(uVar7 + 0x10);
  }
  else {
    uVar6 = uVar7;
    if ((long)uVar2 < 0) {
      uVar6 = uVar2;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar3 = 0;
  do {
    uVar5 = uVar3;
    if (uVar6 == uVar5) break;
    if ((uVar2 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar7 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10034b974);
        (*pcVar1)();
      }
      uVar3 = *(ulong *)(uVar2 + uVar5 * 8 + 0x20);
    }
    else {
      uVar3 = uVar5;
      FUN_1002d3adc(uVar5,uVar2);
    }
    if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10034b93c);
      (*pcVar1)();
    }
    local_80 = &local_68;
    uVar4 = 0;
    local_68 = uVar3;
    FUN_1002c39b8(FUN_10034fe44,auStack_90,*(undefined8 *)(param_2 + 0x10));
    uVar3 = uVar5 + 1;
  } while ((uVar4 & 1) == 0);
  _swift_bridgeObjectRelease(uVar2);
  return uVar6 != uVar5;
}

