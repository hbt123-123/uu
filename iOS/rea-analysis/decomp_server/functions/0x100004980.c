// rea decompile_all
// name: FUN_100004980
// address: 0x100004980
// body: available
// range: 0x100004980-0x100004a53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100004980(long param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar4 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(param_1,1,1,lVar4);
  lVar4 = 0;
  FUN_100127240();
  puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined **)(param_1 + *(int *)(lVar4 + 0x14)) = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x18));
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  puVar2 = (undefined4 *)(param_1 + *(int *)(lVar4 + 0x1c));
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  iVar3 = *(int *)(lVar4 + 0x20);
  FUN_1000cced0();
  *(undefined **)(param_1 + iVar3) = puVar5;
  iVar3 = *(int *)(lVar4 + 0x24);
  lVar6 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(param_1 + iVar3,1,1,lVar6);
  *(undefined **)(param_1 + *(int *)(lVar4 + 0x28)) = PTR___swiftEmptySetSingleton_100995eb0;
  *(undefined1 *)(param_1 + *(int *)(lVar4 + 0x2c)) = 0;
  return;
}

