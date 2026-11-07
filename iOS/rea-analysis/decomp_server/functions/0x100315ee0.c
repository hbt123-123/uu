// rea decompile_all
// name: FUN_100315ee0
// address: 0x100315ee0
// body: available
// range: 0x100315ee0-0x100315f9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100315ee0(long param_1)

{
  ulong uVar1;
  long lVar2;
  long local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),0x1008f97a8,
             &TargetProtocolRequirement_1008f97b8);
  lVar2 = 0x13f;
  __sSqMa();
  if (uVar1 < 0x40) {
    local_58 = *(long *)(lVar2 + -8) + 0x40;
    puStack_50 = PTR___sBi64_WV_100995738 + 0x40;
    puStack_40 = PTR___sBbWV_100995728 + 0x40;
    local_48 = &DAT_100819b80;
    local_38 = &DAT_100819b98;
    puStack_30 = puStack_40;
    local_28 = puStack_40;
    _swift_initStructMetadata(param_1,0,7,&local_58,param_1 + 0x20);
  }
  return;
}

