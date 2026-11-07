// rea decompile_all
// name: FUN_1006505ec
// address: 0x1006505ec
// body: available
// range: 0x1006505ec-0x1006506c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100650698 to 0x1007de824 _memcpy (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006505ec(long param_1,long param_2,size_t param_3,long param_4)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  size_t sVar5;
  code *pcVar6;
  long *unaff_x20;
  long lVar7;
  
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1006506b4);
    (*pcVar6)();
  }
  lVar4 = param_3 - (param_2 - param_1);
  if (SBORROW8(param_3,param_2 - param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1006506b8);
    (*pcVar6)();
  }
  lVar7 = *unaff_x20;
  pvVar1 = (void *)(lVar7 + 0x20 + param_1);
  if (lVar4 != 0) {
    sVar5 = *(long *)(lVar7 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar7 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1006506bc);
      (*pcVar6)();
    }
    pvVar2 = (void *)((long)pvVar1 + param_3);
    pvVar3 = (void *)(lVar7 + 0x20 + param_2);
    if (pvVar2 != pvVar3 || (void *)((long)pvVar3 + sVar5) <= pvVar2) {
      _memmove(pvVar2,pvVar3,sVar5);
    }
    if (SCARRY8(*(long *)(lVar7 + 0x10),lVar4)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1006506c0);
      (*pcVar6)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + lVar4;
  }
  if ((long)param_3 < 1) {
    return;
  }
  if (*(size_t *)(param_4 + 0x10) == param_3) {
    _memcpy(pvVar1,(void *)(param_4 + 0x20),param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1006506c4);
  (*pcVar6)();
}

