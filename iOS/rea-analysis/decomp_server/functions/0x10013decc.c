// rea decompile_all
// name: FUN_10013decc
// address: 0x10013decc
// body: available
// range: 0x10013decc-0x10013df77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10013decc(byte *param_1,long param_2)

{
  long lVar1;
  
  if ((*param_1 & 1) == 0) {
    FUN_100401b14(0);
    FUN_1003fb4ec(FUN_1001454dc,param_2,0xd0000000000000ad,0x8000000100890750,0xd00000000000001e,
                  0x8000000100891150,0xf9,0);
    lVar1 = *(long *)(*(long *)(param_2 + 0x10) + 0x88);
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::writeResult) = 5;
    }
  }
  return;
}

