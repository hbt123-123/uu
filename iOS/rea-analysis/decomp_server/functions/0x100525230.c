// rea decompile_all
// name: FUN_100525230
// address: 0x100525230
// body: available
// range: 0x100525230-0x100525323 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100525230(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  
  lVar6 = *(long *)(param_3 + -8);
  lVar3 = *(long *)(lVar6 + 0x40);
  __ss6HasherV8_combineyySuF(param_2);
  lVar5 = param_1;
  __sSa8endIndexSivg(param_1,param_3);
  if (lVar5 != 0) {
    lVar5 = 0;
    pcVar4 = *(code **)(param_4 + 0x50);
    do {
      __sSayxSicig(auStack_70 + -(lVar3 + 0xfU & 0xfffffffffffffff0),lVar5,param_1,param_3);
      lVar1 = lVar5 + 1;
      if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100525324);
        (*pcVar4)();
      }
      (*pcVar4)();
      (**(code **)(lVar6 + 8))(auStack_70 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_3);
      lVar2 = param_1;
      __sSa8endIndexSivg(param_1,param_3);
      lVar5 = lVar5 + 1;
    } while (lVar1 != lVar2);
  }
  return;
}

