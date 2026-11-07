// rea decompile_all
// name: FUN_100149dec
// address: 0x100149dec
// body: available
// range: 0x100149dec-0x100149e1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100149dec(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)
           (unaff_x20 +
           _TtC14UURemoteServer33ClipboardFileReceiveCopyOperation::___lazy_storage___currentOffset)
  ;
  if (*(char *)(puVar1 + 1) == '\x01') {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
    return 0;
  }
  return *puVar1;
}

