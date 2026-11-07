// rea decompile_all
// name: FUN_10039fa10
// address: 0x10039fa10
// body: available
// range: 0x10039fa10-0x10039faef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10039fa10(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x20;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_2 + 0x10);
  lVar5 = *(long *)(lVar3 + -8);
  lVar2 = param_2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  iVar1 = *(int *)(lVar2 + 0x1c);
  (**(code **)(lVar5 + 0x10))(puVar4,unaff_x20 + iVar1,lVar3);
  FUN_10039f28c(unaff_x20 + *(int *)(param_2 + 0x1c),param_1,param_2,FUN_1003aaa1c);
  (**(code **)(lVar5 + 0x18))(unaff_x20 + iVar1,param_1,lVar3);
  FUN_10039f28c(puVar4,unaff_x20 + *(int *)(param_2 + 0x1c),param_2,FUN_1003aaaf0);
  (**(code **)(lVar5 + 8))(puVar4,lVar3);
  return;
}

