// rea decompile_all
// name: FUN_1000dcb9c
// address: 0x1000dcb9c
// body: available
// range: 0x1000dcb9c-0x1000dcc2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000dcb9c(byte *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  byte bVar3;
  undefined1 auStack_58 [24];
  
  lVar1 = _TtC14UURemoteServer28FileTransferReceiveOperation::tasksByID;
  puVar2 = auStack_58;
  _swift_beginAccess(param_2 + _TtC14UURemoteServer28FileTransferReceiveOperation::tasksByID,puVar2,
                     0x20,0);
  bVar3 = (byte)puVar2;
  if (*(long *)(*(long *)(param_2 + lVar1) + 0x10) == 0) {
    bVar3 = 0;
  }
  else {
    thunk_FUN_1001a2c34(param_3);
  }
  _swift_endAccess(auStack_58);
  *param_1 = bVar3 & 1;
  return;
}

