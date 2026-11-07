// rea decompile_all
// name: FUN_100650350
// address: 0x100650350
// body: available
// range: 0x100650350-0x10065042f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100650350(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long *unaff_x20;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100650424);
    (*pcVar4)();
  }
  lVar2 = param_3 - (param_2 - param_1);
  if (SBORROW8(param_3,param_2 - param_1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100650428);
    (*pcVar4)();
  }
  lVar7 = *unaff_x20;
  puVar5 = (undefined8 *)(lVar7 + 0x20 + param_1 * 8);
  puVar1 = puVar5 + param_3;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar7 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar7 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10065042c);
      (*pcVar4)();
    }
    puVar6 = (undefined8 *)(lVar7 + 0x20 + param_2 * 8);
    if (puVar1 != puVar6 || puVar6 + lVar3 <= puVar1) {
      _memmove(puVar1,puVar6,lVar3 * 8);
    }
    if (SCARRY8(*(long *)(lVar7 + 0x10),lVar2)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100650430);
      (*pcVar4)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + lVar2;
  }
  if (0 < param_3) {
    param_4 = param_4 & ((long)param_4 >> 0x3f ^ 0xffffffffffffffffU);
    do {
      if (param_4 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100650420);
        (*pcVar4)();
      }
      puVar6 = puVar5 + 1;
      *puVar5 = param_5;
      param_4 = param_4 - 1;
      puVar5 = puVar6;
    } while (puVar6 < puVar1);
  }
  return;
}

