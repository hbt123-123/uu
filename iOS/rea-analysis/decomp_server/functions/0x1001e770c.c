// rea decompile_all
// name: FUN_1001e770c
// address: 0x1001e770c
// body: available
// range: 0x1001e770c-0x1001e77a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1001e770c(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  if (param_1 == 0) {
    return ZEXT816(0xc000000000000000) << 0x40;
  }
  if (0xe < (long)param_1) {
    __s10Foundation13__DataStorageCMa();
    _swift_allocObject();
    uVar2 = param_1;
    __s10Foundation13__DataStorageC8capacityACSi_tcfc(param_1);
    if (param_1 < 0x7fffffff) {
      lVar1 = 0;
      uVar2 = uVar2 | 0x4000000000000000;
    }
    else {
      lVar1 = 0;
      __s10Foundation4DataV14RangeReferenceCMa();
      _swift_allocObject();
      uVar2 = uVar2 | 0x8000000000000000;
      *(undefined8 *)(lVar1 + 0x10) = 0;
      *(undefined8 *)(lVar1 + 0x18) = 0;
    }
    auVar3._8_8_ = uVar2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  return ZEXT816(0);
}

