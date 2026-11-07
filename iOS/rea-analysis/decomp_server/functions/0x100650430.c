// rea decompile_all
// name: FUN_100650430
// address: 0x100650430
// body: available
// range: 0x100650430-0x1006504e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100650430(long param_1,long param_2,long param_3,undefined1 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  size_t sVar5;
  code *pcVar6;
  long *unaff_x20;
  long lVar7;
  
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1006504d8);
    (*pcVar6)();
  }
  lVar4 = param_3 - (param_2 - param_1);
  if (SBORROW8(param_3,param_2 - param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1006504dc);
    (*pcVar6)();
  }
  lVar7 = *unaff_x20;
  puVar1 = (undefined1 *)(lVar7 + 0x20 + param_1);
  if (lVar4 != 0) {
    sVar5 = *(long *)(lVar7 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar7 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1006504e0);
      (*pcVar6)();
    }
    puVar2 = puVar1 + param_3;
    puVar3 = (undefined1 *)(lVar7 + 0x20 + param_2);
    if (puVar2 != puVar3 || puVar3 + sVar5 <= puVar2) {
      _memmove(puVar2,puVar3,sVar5);
    }
    if (SCARRY8(*(long *)(lVar7 + 0x10),lVar4)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1006504e4);
      (*pcVar6)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + lVar4;
  }
  if ((0 < param_3) && (*puVar1 = param_4, param_3 != 1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1006504e8);
    (*pcVar6)();
  }
  return;
}

