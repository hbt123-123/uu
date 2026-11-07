// rea decompile_all
// name: FUN_100685bdc
// address: 0x100685bdc
// body: available
// range: 0x100685bdc-0x100685c73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100685bdc(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  long lVar4;
  long lVar5;
  
  uVar3 = *unaff_x20;
  uVar2 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar2 & 1) == 0) {
    FUN_10068de58();
  }
  if (param_2 < *(ulong *)(uVar3 + 0x10)) {
    lVar4 = *(ulong *)(uVar3 + 0x10) - 1;
    lVar5 = uVar3 + param_2 * 0x28;
    FUN_1000a0074(lVar5 + 0x20,param_1);
    _memmove((void *)(lVar5 + 0x20),(void *)(lVar5 + 0x48),(lVar4 - param_2) * 0x28);
    *(long *)(uVar3 + 0x10) = lVar4;
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100685c74);
  (*pcVar1)();
}

