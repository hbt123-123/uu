// rea decompile_all
// name: FUN_10015abec
// address: 0x10015abec
// body: available
// range: 0x10015abec-0x10015ad5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10015abec(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_90 [16];
  long local_80;
  long local_70;
  long lStack_68;
  long local_60;
  
  lVar1 = *(long *)(param_2 + 0x18);
  local_60 = param_2;
  if (lVar1 == 0) {
    lStack_68 = -0x1000000000000000;
    local_70 = 0;
    _swift_retain(param_2);
    FUN_10061630c(&local_70);
  }
  else {
    lVar2 = lVar1;
    lVar4 = param_2;
    FUN_100153164();
    lVar3 = lVar1;
    FUN_100188d68();
    _swift_release(lVar2);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_80 = lVar1;
    FUN_1003fb45c(FUN_10016c3d0,auStack_90,0xd0000000000000a4,0x800000010088d870,
                  &DAT_d000000000000010,0x8000000100895190,0x171,7);
    local_70 = lVar3;
    lStack_68 = lVar4;
    _swift_retain(param_2);
    FUN_100008184(lVar3,lVar4);
    FUN_10061630c(&local_70);
    FUN_100006cdc(lVar3,lVar4);
  }
  lVar1 = local_60;
  FUN_100006cc8(local_70,lStack_68);
  _swift_release(lVar1);
  return;
}

