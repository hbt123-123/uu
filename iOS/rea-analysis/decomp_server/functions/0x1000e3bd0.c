// rea decompile_all
// name: thunk_FUN_1000e374c
// address: 0x1000e3bd0
// body: available
// range: 0x1000e3bd0-0x1000e3bd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_1000e374c(long param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(param_1 + 0x48) =
       *(undefined8 *)
        (unaff_x20 +
        _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile::
        writtenSize);
  *(undefined1 *)(param_1 + 0x50) =
       *(undefined1 *)
        (unaff_x20 +
        _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile::
        isCompleted);
  return;
}

