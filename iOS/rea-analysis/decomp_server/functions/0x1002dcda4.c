// rea decompile_all
// name: FUN_1002dcda4
// address: 0x1002dcda4
// body: available
// range: 0x1002dcda4-0x1002dce63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002dcda4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  long local_28;
  
  puVar2 = &DAT_100a83200;
  lVar1 = 0x13f;
  FUN_10012734c(0x13f,&DAT_100a83200,PTR___s10Foundation10URLRequestVMa_1009960c0);
  if (puVar2 < (undefined *)0x40) {
    local_50 = *(long *)(lVar1 + -8) + 0x40;
    puStack_48 = &DAT_100818c38;
    local_40 = &DAT_100818c50;
    puStack_38 = &DAT_100818c38;
    local_30 = PTR___sBi64_WV_100995738 + 0x40;
    uVar3 = *(ulong *)(param_1 + 0x10);
    lVar1 = 0x13f;
    __ss6ResultOMa(0x13f,uVar3,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    if (uVar3 < 0x40) {
      local_28 = *(long *)(lVar1 + -8) + 0x40;
      _swift_initStructMetadata(param_1,0,6,&local_50,param_1 + 0x28);
    }
  }
  return;
}

