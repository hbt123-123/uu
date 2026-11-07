// rea decompile_all
// name: FUN_10054cc0c
// address: 0x10054cc0c
// body: available
// range: 0x10054cc0c-0x10054cccf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10054cc0c(ulong *param_1,ulong param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = 0xc000000000000000;
  uVar2 = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    if ((long)param_3 < 0xf) {
      param_3 = param_3 + param_2;
      FUN_1001f8388();
      uVar3 = param_3 & 0xffffffffffffff;
      uVar2 = param_2;
    }
    else {
      uVar1 = 0;
      __s10Foundation13__DataStorageCMa();
      _swift_allocObject();
      __s10Foundation13__DataStorageC5bytes6lengthACSVSg_Sitcfc(param_2,param_3,uVar1);
      if (param_3 < 0x7fffffff) {
        uVar3 = param_2 | 0x4000000000000000;
        uVar2 = param_3 << 0x20;
      }
      else {
        uVar2 = 0;
        __s10Foundation4DataV14RangeReferenceCMa();
        _swift_allocObject();
        *(undefined8 *)(uVar2 + 0x10) = 0;
        *(ulong *)(uVar2 + 0x18) = param_3;
        uVar3 = param_2 | 0x8000000000000000;
      }
    }
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}

