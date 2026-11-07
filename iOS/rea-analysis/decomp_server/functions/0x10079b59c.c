// rea decompile_all
// name: FUN_10079b59c
// address: 0x10079b59c
// body: available
// range: 0x10079b59c-0x10079b637 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10079b59c(undefined8 *param_1,char *param_2)

{
  ulong uVar1;
  size_t sVar2;
  undefined8 *puVar3;
  
  sVar2 = _strlen(param_2);
  if (sVar2 < 0x7ffffffffffffff0) {
    if (sVar2 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)sVar2;
      puVar3 = param_1;
    }
    else {
      uVar1 = (sVar2 | 0xf) + 1;
      puVar3 = operator_new(uVar1);
      param_1[1] = sVar2;
      param_1[2] = uVar1 | 0x8000000000000000;
      *param_1 = puVar3;
    }
    _memmove(puVar3,param_2,sVar2);
    *(undefined1 *)((long)puVar3 + sVar2) = 0;
    return param_1;
  }
  FUN_10079b638(param_1);
                    /* WARNING: Subroutine does not return */
  FUN_10074d7e0("basic_string");
}

