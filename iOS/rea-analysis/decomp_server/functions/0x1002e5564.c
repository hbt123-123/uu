// rea decompile_all
// name: FUN_1002e5564
// address: 0x1002e5564
// body: available
// range: 0x1002e5564-0x1002e5613 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1002e5564(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 auStack_50 [2];
  
  puVar2 = &DAT_100a83828;
  FUN_100004bb4(&DAT_100a83828,&DAT_100817d88);
  lVar4 = (long)auStack_50 - (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  iVar1 = *(int *)(puVar2 + 0x30);
  auStack_50[1] = param_3;
  (*param_4)(lVar4,param_2,auStack_50 + 1);
  lVar3 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,lVar4,lVar3);
  return *(undefined8 *)(lVar4 + iVar1);
}

