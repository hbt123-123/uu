// rea decompile_all
// name: FUN_1000b3a88
// address: 0x1000b3a88
// body: available
// range: 0x1000b3a88-0x1000b3b7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000b3b7c to 0x1000b3c9c FUN_1000b3c9c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b3a88(byte param_1)

{
  long unaff_x20;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  byte local_40;
  
  *(byte *)(unaff_x20 + _TtC14UURemoteServer17LockScreenManager::currentScreenIsLocked) = param_1;
  local_40 = param_1 & 1;
  if ((*(byte *)(unaff_x20 + _TtC14UURemoteServer17LockScreenManager::lastReportedLocked) != 2) &&
     (((*(byte *)(unaff_x20 + _TtC14UURemoteServer17LockScreenManager::lastReportedLocked) ^ param_1
       ) & 1) == 0)) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_50 = 0xa59fe79a80e9;
    uStack_48 = 0xa600000000000000;
    FUN_1003fb48c(FUN_1000b48ec,auStack_60,0xd000000000000099,0x8000000100881de0,0xd00000000000001f,
                  0x8000000100882100,0x1e6,0);
    return;
  }
  FUN_1000b3c9c(local_40);
  return;
}

