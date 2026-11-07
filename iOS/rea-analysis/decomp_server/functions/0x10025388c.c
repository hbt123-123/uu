// rea decompile_all
// name: FUN_10025388c
// address: 0x10025388c
// body: available
// range: 0x10025388c-0x10025391b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10025388c(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined4 uVar2;
  
  if (*(long *)(param_1 + 0x101c8) != 0) {
    if ((*(long *)(param_1 + 0x68) != 0) && (*(long *)(param_1 + 0x68) != *(long *)(param_1 + 0x70))
       ) {
      (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x40));
    }
    uVar2 = 7;
    if (param_3 != 1) {
      uVar2 = 0xb;
    }
    lVar1 = param_1;
    FUN_10024e898(param_1,*(undefined8 *)(param_1 + 0x70),param_2,uVar2);
    *(long *)(param_1 + 0x68) = lVar1;
    return -(uint)(lVar1 == 0);
  }
  return 0;
}

