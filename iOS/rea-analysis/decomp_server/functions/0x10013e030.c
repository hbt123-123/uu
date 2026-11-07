// rea decompile_all
// name: FUN_10013e030
// address: 0x10013e030
// body: available
// range: 0x10013e030-0x10013e0d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10013e030(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_40 [16];
  long local_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  FUN_100401b14(0);
  local_30 = param_2;
  uStack_28 = param_1;
  FUN_1003fb4ec(uVar1,FUN_1001454d4,auStack_40,0xd0000000000000ad,0x8000000100890750,
                0xd00000000000001e,0x8000000100891150,0xfd,0);
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + 0x88);
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::writeResult) = 5;
  }
  return;
}

