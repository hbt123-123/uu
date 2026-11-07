// rea decompile_all
// name: FUN_1007b023c
// address: 0x1007b023c
// body: available
// range: 0x1007b023c-0x1007b02e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1007b023c(undefined *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  if (param_1 != (undefined *)0x0) {
    uVar3 = 0x601;
    if (param_2 == 0) {
      uVar3 = 0x201;
    }
    puVar2 = param_1;
    _open(param_1,uVar3);
    DAT_100abb9f0 = (int)puVar2;
    if ((param_1 == &DAT_100b30b50) || (DAT_100abb9f0 < 0)) {
      if (DAT_100abb9f0 < 0) {
        return 1;
      }
    }
    else {
      ___strlcpy_chk(&DAT_100b30b50,param_1,0x400,0x400);
    }
  }
  iVar1 = DAT_100abb9f0;
  if (2 < DAT_100abb9f4) {
    _close();
  }
  DAT_100abb9f4 = iVar1;
  return 0;
}

