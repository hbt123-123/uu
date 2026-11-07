// rea decompile_all
// name: FUN_1002507b4
// address: 0x1002507b4
// body: available
// range: 0x1002507b4-0x10025085b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1002507b4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((*(long *)(param_1 + 0x178) == 0) || (*(long *)(*(long *)(param_1 + 0x178) + 0xc0) == 0)) {
    lVar3 = *(long *)(param_1 + 0x128);
    if (lVar3 == *(long *)(param_1 + 0xb8)) {
      return 0;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0xb8) + 1;
  }
  if ((*(long *)(param_1 + 0x68) != 0) && (*(long *)(param_1 + 0x68) != *(long *)(param_1 + 0x70)))
  {
    (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x40));
  }
  lVar1 = *(long *)(param_1 + 0x70);
  if (lVar3 != *(long *)(param_1 + 0x80)) {
    lVar1 = param_1;
    FUN_10024e898(param_1,*(long *)(param_1 + 0x70),lVar3,5);
  }
  *(long *)(param_1 + 0x68) = lVar1;
  if (lVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    *(long *)(param_1 + 0xb8) = lVar3;
  }
  return uVar2;
}

