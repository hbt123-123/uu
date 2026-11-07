// rea decompile_all
// name: FUN_1003913c4
// address: 0x1003913c4
// body: available
// range: 0x1003913c4-0x10039146b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1003913c4(long param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  FUN_100391480(*(undefined8 *)(param_1 + 0x28),&local_48);
  FUN_100391ae0(&local_48);
  lVar1 = **(long **)(param_1 + 0x28);
  lVar2 = (*(long **)(param_1 + 0x28))[1];
  *(undefined4 *)(lVar2 + -0x18) = 1;
  *(char **)(lVar2 + -8) = param_2;
  uVar3 = (uint)(byte)param_2[1];
  if (*param_2 != '\0') {
    uVar3 = *(uint *)(param_2 + 2);
  }
  *(uint *)(lVar2 + -0x10) = uVar3;
  FUN_10039280c();
  *(uint *)(lVar2 + -0x14) = *(int *)(lVar2 + -0x10) + uVar3;
  return (lVar2 - lVar1 >> 3) * -0x5555555555555555 + -1;
}

