// rea decompile_all
// name: FUN_100080934
// address: 0x100080934
// body: available
// range: 0x100080934-0x1000809e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100080934(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *unaff_x20;
  long lVar6;
  
  lVar5 = *(long *)(param_2 + 0x10);
  lVar6 = *(long *)(lVar5 + -8);
  lVar4 = *(long *)(lVar6 + 0x40);
  lVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  lVar3 = lVar1;
  __sSa8endIndexSivg(lVar1,lVar5);
  if (lVar2 < lVar3) {
    __sSayxSicig(&stack0xffffffffffffffb0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),lVar2,lVar1,lVar5);
    unaff_x20[1] = lVar2 + 1;
    param_1[3] = lVar5;
    FUN_100060d88(param_1);
    (**(code **)(lVar6 + 0x20))();
  }
  else {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  return;
}

