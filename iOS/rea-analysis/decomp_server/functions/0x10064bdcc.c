// rea decompile_all
// name: FUN_10064bdcc
// address: 0x10064bdcc
// body: available
// range: 0x10064bdcc-0x10064be47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10064bdcc(undefined8 *param_1,byte *param_2,long param_3,undefined1 param_4,
                  undefined *param_5)

{
  byte *pbVar1;
  byte bVar2;
  
  if ((param_2 == (byte *)0x0) || (param_3 - (long)param_2 < 2)) {
    pbVar1 = (byte *)0x0;
    bVar2 = 0;
    param_2 = (byte *)0x0;
    param_4 = 0;
    param_5 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    pbVar1 = param_2 + 1;
    bVar2 = *param_2 & 1;
    param_2 = param_2 + (param_3 - (long)param_2);
    FUN_10064c73c();
  }
  *param_1 = pbVar1;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = param_4;
  param_1[3] = param_5;
  *(byte *)(param_1 + 4) = bVar2;
  return;
}

