// rea decompile_all
// name: FUN_10015b3c8
// address: 0x10015b3c8
// body: available
// range: 0x10015b3c8-0x10015b533 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10015b4a4 to 0x10015e6d0 FUN_10015e6d0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10015b3c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_90 [16];
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  FUN_100401b14(0);
  FUN_1003fb45c(FUN_10015b534,0,0xd0000000000000a4,0x800000010088d870,0xd000000000000036,
                0x800000010088d920,400,7);
  if (*(char *)(unaff_x20 +
               _TtC14UURemoteServer18ClipboardPCManager::remoteAssistFileTransferEnabled) == '\x01')
  {
    FUN_10015d890(param_1,param_2,param_3,param_4);
    FUN_10015e6d0(param_2,param_3,param_4);
    return;
  }
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_80 = (undefined4)param_2;
  local_78 = param_3;
  uStack_70 = param_4;
  FUN_1003fb48c(FUN_100121bdc,auStack_90,0xd0000000000000a4,0x800000010088d870,0xd000000000000036,
                0x800000010088d920,0x192,0);
  FUN_10015d890(param_1,param_2,param_3,param_4);
  return;
}

