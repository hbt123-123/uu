// rea decompile_all
// name: FUN_1001b06b8
// address: 0x1001b06b8
// body: available
// range: 0x1001b06b8-0x1001b07d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001b06b8(undefined1 param_1)

{
  byte bVar1;
  long unaff_x20;
  undefined1 auStack_60 [16];
  undefined1 local_50;
  
  bVar1 = *(byte *)(unaff_x20 + _TtC14UURemoteServer15StreamerManager::isSystemSleeping);
  FUN_100401b14(0);
  local_50 = param_1;
  if ((bVar1 & 1) == 0) {
    FUN_1003fb48c(FUN_1001b5528,auStack_60,0xd000000000000095,0x8000000100877f50,
                  &DAT_d000000000000018,0x800000010089ae00,0x145,0);
    FUN_1003fb48c(FUN_1001aec58,0,0xd000000000000095,0x8000000100877f50,0x2928656d75736572,
                  0xe800000000000000,0x46,0);
    FUN_1001aec84();
  }
  else {
    FUN_1003fb48c(FUN_1001b5530,auStack_60,0xd000000000000095,0x8000000100877f50,
                  &DAT_d000000000000018,0x800000010089ae00,0x141,0);
  }
  return;
}

