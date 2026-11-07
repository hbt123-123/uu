// rea decompile_all
// name: FUN_100342528
// address: 0x100342528
// body: available
// range: 0x100342528-0x100342603 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100342528(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  void *pvVar4;
  void *pvVar5;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  
  lVar1 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1003425f4);
    (*pcVar3)();
  }
  lVar6 = *unaff_x20;
  lVar7 = lVar6 + 0x20 + param_1 * 0x28;
  FUN_100004bb4(param_4,param_5);
  _swift_arrayDestroy(lVar7,lVar1,param_4);
  lVar2 = param_3 - lVar1;
  if (SBORROW8(param_3,lVar1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1003425f8);
    (*pcVar3)();
  }
  if (lVar2 != 0) {
    lVar1 = *(long *)(lVar6 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar6 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1003425fc);
      (*pcVar3)();
    }
    pvVar4 = (void *)(lVar7 + param_3 * 0x28);
    pvVar5 = (void *)(lVar6 + 0x20 + param_2 * 0x28);
    if (pvVar4 != pvVar5 || (void *)((long)pvVar5 + lVar1 * 0x28) <= pvVar4) {
      _memmove(pvVar4,pvVar5,lVar1 * 0x28);
    }
    if (SCARRY8(*(long *)(lVar6 + 0x10),lVar2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100342600);
      (*pcVar3)();
    }
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + lVar2;
  }
  if (param_3 < 1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100342604);
  (*pcVar3)();
}

