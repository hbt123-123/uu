// rea decompile_all
// name: FUN_100168e98
// address: 0x100168e98
// body: available
// range: 0x100168e98-0x100168f8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100168e98(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_90 [16];
  undefined4 local_80;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined4 local_58;
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [32];
  
  local_60 = param_2;
  local_58 = (int)param_1;
  FUN_100407cdc(FUN_10016c094,auStack_70,PTR___sytN_100995e90 + 8);
  _swift_beginAccess(param_3 + _TtC14UURemoteServer18ClipboardPCManager::dropTasks,auStack_50,0x21,0
                    );
  FUN_10006d93c(auStack_54,param_1);
  _swift_endAccess(auStack_50);
  FUN_100401b14(0);
  local_80 = (int)param_1;
  FUN_1003fb48c(FUN_10016c0b0,auStack_90,0xd0000000000000a4,0x800000010088d870,0xd000000000000029,
                0x8000000100894be0,0x42e,0);
  return;
}

