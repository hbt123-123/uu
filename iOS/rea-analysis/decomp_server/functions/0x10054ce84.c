// rea decompile_all
// name: FUN_10054ce84
// address: 0x10054ce84
// body: available
// range: 0x10054ce84-0x10054cf8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10054ce84(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7,long param_8)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x21;
  undefined1 *puVar5;
  long lVar6;
  undefined8 in_stack_00000008;
  
  lVar6 = *(long *)(param_8 + -8);
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar5 = &stack0xffffffffffffffb0 + -uVar3;
  if (param_5 == 0) {
    __sSr5start5countSryxGSpyxGSg_SitcfC(0,0,param_7);
    (*param_3)(param_1);
    puVar5 = puVar5 + -uVar3;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_7 + -8) + 0x48);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10054cf88);
      (*pcVar2)();
    }
    if ((param_6 - param_5 == -0x8000000000000000) && (lVar4 == -1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10054cf8c);
      (*pcVar2)();
    }
    lVar1 = 0;
    if (lVar4 != 0) {
      lVar1 = (param_6 - param_5) / lVar4;
    }
    __sSr5start5countSryxGSpyxGSg_SitcfC(param_5,lVar1,param_7);
    (*param_3)(param_1);
  }
  if (unaff_x21 != 0) {
    (**(code **)(lVar6 + 0x20))(in_stack_00000008,puVar5,param_8);
  }
  return;
}

