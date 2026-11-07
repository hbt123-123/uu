// rea decompile_all
// name: FUN_100328c30
// address: 0x100328c30
// body: available
// range: 0x100328c30-0x100328cc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100328c30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  __sScS8IteratorVMa(0,param_5);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_1,param_2,lVar1);
  lVar1 = 0;
  FUN_10032c51c(0,param_5);
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x10) = param_3;
  *(undefined8 *)(lVar1 + 0x18) = param_4;
  lVar2 = 0;
  FUN_10032c4cc(0,param_5);
  *(long *)(param_1 + *(int *)(lVar2 + 0x1c)) = lVar1;
  return;
}

