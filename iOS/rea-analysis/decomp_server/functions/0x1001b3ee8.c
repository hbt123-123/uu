// rea decompile_all
// name: FUN_1001b3ee8
// address: 0x1001b3ee8
// body: available
// range: 0x1001b3ee8-0x1001b3f9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001b3ee8(undefined4 param_1,undefined4 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [24];
  
  uVar1 = 0;
  FUN_100401b14(0);
  local_50 = param_1;
  uStack_4c = param_2;
  FUN_1003fb48c(uVar1,FUN_1001b5640,auStack_60,0xd000000000000095,0x8000000100877f50,
                &DAT_d000000000000033,0x800000010089b0b0,0x229,0);
  _swift_beginAccess(param_3 + 0x10,auStack_48,0,0);
  _swift_unknownObjectWeakLoadStrong();
  return;
}

