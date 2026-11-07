// rea decompile_all
// name: FUN_1001590f8
// address: 0x1001590f8
// body: available
// range: 0x1001590f8-0x100159213 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001590f8(ulong *param_1,long param_2)

{
  ulong uVar1;
  undefined1 auStack_78 [24];
  ulong local_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong local_40;
  
  uStack_58 = param_1[1];
  local_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  local_40 = param_1[4];
  _swift_beginAccess(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 == 0) {
    FUN_100401b14();
    FUN_1003fb48c(FUN_100159214,0,0xd0000000000000a4,0x800000010088d870,0xd00000000000002e,
                  0x8000000100893030,0x123,0);
  }
  else {
    FUN_1001533d4();
    FUN_10013ad7c(&local_60);
    uVar1 = 0;
    FUN_10013bb70();
    if ((uVar1 & 1) != 0) {
      FUN_10015f548(local_60 & 0xffffffff);
    }
  }
  return;
}

