// rea decompile_all
// name: FUN_100509dd8
// address: 0x100509dd8
// body: available
// range: 0x100509dd8-0x100509f53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100509dd8(long param_1,uint param_2,long param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  long unaff_x21;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_3 + -8);
  lVar3 = *(long *)(lVar6 + 0x40);
  lVar5 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar5 = 5;
  }
  lVar2 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar2 = lVar5;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar2 = 2;
  }
  lVar5 = 1;
  if (0x7f < param_2 << 3) {
    lVar5 = lVar2;
  }
  lVar2 = param_1;
  __sSa5countSivg(param_1,param_3);
  if (lVar2 + 0x4000000000000000 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100509f4c);
    (*pcVar1)();
  }
  lVar4 = lVar2 * 2 * lVar5;
  if (SUB168(SEXT816(lVar2 * 2) * SEXT816(lVar5),8) != lVar4 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100509f50);
    (*pcVar1)();
  }
  if (!SCARRY8(*unaff_x20,lVar4)) {
    *unaff_x20 = *unaff_x20 + lVar4;
    lVar5 = param_1;
    __sSa8endIndexSivg(param_1,param_3);
    if (lVar5 != 0) {
      lVar5 = 0;
      do {
        __sSayxSicig(&stack0xffffffffffffffa0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),lVar5,param_1,
                     param_3);
        lVar2 = lVar5 + 1;
        if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100509f48);
          (*pcVar1)();
        }
        (**(code **)(param_4 + 0x48))();
        (**(code **)(lVar6 + 8))
                  (&stack0xffffffffffffffa0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_3);
        if (unaff_x21 != 0) {
          return;
        }
        lVar4 = param_1;
        __sSa8endIndexSivg(param_1,param_3);
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar4);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100509f54);
  (*pcVar1)();
}

