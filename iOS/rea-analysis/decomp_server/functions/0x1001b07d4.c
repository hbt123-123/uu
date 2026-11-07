// rea decompile_all
// name: FUN_1001b07d4
// address: 0x1001b07d4
// body: available
// range: 0x1001b07d4-0x1001b08bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001b07d4(undefined1 *param_1,byte *param_2,long param_3)

{
  undefined1 uVar1;
  byte bVar2;
  undefined1 auStack_60 [16];
  undefined1 local_50;
  byte local_4f;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  bVar2 = *param_2;
  FUN_100401b14(0);
  local_50 = uVar1;
  local_4f = bVar2;
  FUN_1003fb48c(FUN_1001b58e4,auStack_60,0xd000000000000095,0x8000000100877f50,0x6573624f74696e69,
                0xee00292872657672,0xe5,0);
  if ((bVar2 & 1) == 0) {
    _swift_beginAccess(param_3 + 0x10,auStack_48,0,0);
    param_3 = param_3 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (param_3 != 0) {
      FUN_1001b06b8(2);
    }
  }
  else {
    _swift_beginAccess(param_3 + 0x10,auStack_48,0,0);
    param_3 = param_3 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (param_3 != 0) {
      FUN_1001aef24();
    }
  }
  return;
}

