// rea decompile_all
// name: FUN_1006a8c44
// address: 0x1006a8c44
// body: available
// range: 0x1006a8c44-0x1006a8cc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1006a8c44(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  
  FUN_1006a893c();
  uVar4 = param_1[6];
  plVar2 = param_1 + 1;
  FUN_100692ca0(plVar2);
  lVar1 = param_1[5];
  plVar3 = param_1;
  (**(code **)(*param_1 + 0x30))(param_1);
  FUN_1006aa6ac(uVar4,plVar2,(char)lVar1,plVar3);
  FUN_1006aa5cc();
  uVar5 = uVar4 & 0xffffffff;
  FUN_1006aa5cc();
  FUN_100692dd4(param_1 + 1,uVar5,uVar4 & 0xffffffff);
  return 1;
}

