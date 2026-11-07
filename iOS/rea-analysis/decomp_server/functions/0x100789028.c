// rea decompile_all
// name: FUN_100789028
// address: 0x100789028
// body: available
// range: 0x100789028-0x10078907f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100789028(long param_1)

{
  undefined8 uVar1;
  
  if (DAT_100b2e0f0 != '\0') {
    *(undefined2 *)(param_1 + 0xd8) = DAT_100b2e0e8;
    *(undefined8 *)(param_1 + 0xd0) = DAT_100b2e0e0;
    uVar1 = DAT_100b2e0a0;
    *(undefined8 *)(param_1 + 0xa8) = DAT_100b2e0a8;
    *(undefined8 *)(param_1 + 0xa0) = uVar1;
    uVar1 = DAT_100b2e0b8;
    *(undefined8 *)(param_1 + 0xc0) = DAT_100b2e0c0;
    *(undefined8 *)(param_1 + 0xb8) = uVar1;
    *(undefined1 *)(param_1 + 0xcc) = DAT_100b2e0cc;
    *(undefined1 *)(param_1 + 0xcd) = DAT_100b2e0d8;
    *(undefined8 *)(param_1 + 0xb0) = DAT_100b2e0b0;
    *(undefined4 *)(param_1 + 200) = DAT_100b2e0c8;
  }
  return;
}

