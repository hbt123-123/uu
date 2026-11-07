// rea decompile_all
// name: FUN_10069a6ac
// address: 0x10069a6ac
// body: available
// range: 0x10069a6ac-0x10069a73f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10069a6ac(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint local_48 [2];
  undefined8 local_40;
  uint local_38 [2];
  
  local_48[0] = 0;
  uVar2 = param_1;
  FUN_10069f164();
  local_40 = uVar2;
  FUN_100698904(local_38,param_1,local_48);
  uVar1 = local_48[0];
  if (local_38[0] != 0) {
    uVar1 = 0;
  }
  uVar3 = (ulong)uVar1;
  FUN_100699888(uVar3,param_1,param_2,"mars_boost::filesystem::remove_all");
  if ((1 < local_38[0]) && ((uVar3 & 1) == 0)) {
    FUN_10069a740(param_1,local_38[0],param_2);
  }
  return;
}

