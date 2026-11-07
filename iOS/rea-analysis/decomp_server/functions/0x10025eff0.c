// rea decompile_all
// name: FUN_10025eff0
// address: 0x10025eff0
// body: available
// range: 0x10025eff0-0x10025f0af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10025eff0(undefined8 *param_1,ulong param_2,int param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long *unaff_x20;
  undefined8 uVar5;
  
  iVar3 = (int)*unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((long)param_2 < 0) ||
     (lVar4 = *unaff_x20, 1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f) <= (long)param_2)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10025f098);
    (*pcVar2)();
  }
  if ((*(ulong *)(lVar4 + (param_2 >> 6) * 8 + 0x38) >> (param_2 & 0x3f) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10025f09c);
    (*pcVar2)();
  }
  if (*(int *)(lVar4 + 0x24) == param_3) {
    if (iVar3 == 0) {
      FUN_10025ea04();
    }
    puVar1 = (undefined8 *)(*(long *)(lVar4 + 0x30) + param_2 * 0x10);
    uVar5 = *puVar1;
    param_1[1] = puVar1[1];
    *param_1 = uVar5;
    FUN_10025f0b0(param_2);
    *unaff_x20 = lVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10025f0a0);
  (*pcVar2)();
}

