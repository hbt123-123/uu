// rea decompile_all
// name: FUN_1001074f4
// address: 0x1001074f4
// body: available
// range: 0x1001074f4-0x100107607 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001074f4(undefined8 param_1,byte *param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [24];
  
  if ((*param_2 & 1) == 0) {
    _swift_beginAccess(param_3 + 0x10,auStack_38,0,0);
    param_3 = param_3 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (param_3 == 0) {
      return;
    }
    FUN_100401b14(0);
    pcVar1 = FUN_100107a9c;
    uVar2 = 0x2928656d75736572;
    uVar3 = 0xe800000000000000;
    uVar4 = 0x1d7;
  }
  else {
    _swift_beginAccess(param_3 + 0x10,auStack_38,0,0);
    param_3 = param_3 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (param_3 == 0) {
      return;
    }
    FUN_100401b14(0);
    pcVar1 = FUN_100107a70;
    uVar2 = 0x28646e6570737573;
    uVar3 = 0xe900000000000029;
    uVar4 = 0x1d2;
  }
  FUN_1003fb48c(pcVar1,0,0xd000000000000097,0x8000000100889170,uVar2,uVar3,uVar4,0);
  return;
}

