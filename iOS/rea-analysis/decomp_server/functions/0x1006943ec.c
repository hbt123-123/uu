// rea decompile_all
// name: FUN_1006943ec
// address: 0x1006943ec
// body: available
// range: 0x1006943ec-0x10069448b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006943ec(undefined8 *param_1,byte *param_2,long param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  std::string::resize((ulong)param_1,(char)(param_3 << 1));
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      bVar2 = *param_2;
      puVar1 = (undefined8 *)*param_1;
      if (-1 < *(char *)((long)param_1 + 0x17)) {
        puVar1 = param_1;
      }
      *(char *)((long)puVar1 + lVar3) = "0123456789abcdef"[bVar2 >> 4];
      puVar1 = (undefined8 *)*param_1;
      if (-1 < *(char *)((long)param_1 + 0x17)) {
        puVar1 = param_1;
      }
      *(char *)((long)puVar1 + lVar3 + 1) = "0123456789abcdef"[(ulong)bVar2 & 0xf];
      lVar3 = lVar3 + 2;
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}

