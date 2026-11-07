// rea decompile_all
// name: FUN_1000fe860
// address: 0x1000fe860
// body: available
// range: 0x1000fe860-0x1000feb53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000fe860(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,undefined8 param_6)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_f0 [16];
  undefined8 *local_e0;
  undefined *local_c8 [3];
  undefined *local_b0;
  code *local_a8;
  code *local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  uVar4 = *(undefined8 *)(DAT_100b360a8 + 0x90);
  puVar1 = &DAT_10099d008;
  _swift_allocObject(&DAT_10099d008,0x20,7);
  *(code **)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  _swift_retain(param_6);
  FUN_1001e4b60();
  FUN_1001e66c4(param_1,param_2,param_6);
  _swift_bridgeObjectRelease(param_6);
  if ((param_1 >> 0x20 & 1) == 0) {
    _swift_retain(puVar1);
    FUN_1001e073c(param_1,param_3,param_4,uVar4,FUN_100103100,puVar1);
    _swift_release_n(puVar1,2);
  }
  else {
    if ((int)param_1 == 0) {
      uStack_88 = 0xd000000000000011;
      local_90 = 1;
      local_80 = 0x800000010088a4f0;
      uStack_78 = 0xb8e49dafe89abce4;
      local_70 = 0xafa89ce598ade58d;
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      pcVar2 = thunk_FUN_100103124;
    }
    else {
      uStack_88 = 0xd000000000000017;
      local_90 = 1;
      local_80 = 0x800000010088a4b0;
      uStack_78 = 0x100000000000002a;
      local_70 = 0x800000010088a550;
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      pcVar2 = FUN_100103124;
    }
    local_e0 = &local_90;
    FUN_1003fb48c(pcVar2,auStack_f0,0xd000000000000094,0x800000010088a280,0xd00000000000001e,
                  0x800000010088a320,0xb4,0);
    local_b0 = &DAT_1009d98f8;
    FUN_10010304c();
    local_a8 = pcVar2;
    FUN_10010308c();
    puVar3 = &DAT_10099cfe0;
    local_a0 = pcVar2;
    _swift_allocObject(&DAT_10099cfe0,0x38,7);
    *(undefined8 *)(puVar3 + 0x18) = uStack_88;
    *(undefined8 *)(puVar3 + 0x10) = local_90;
    *(undefined8 *)(puVar3 + 0x28) = uStack_78;
    *(undefined8 *)(puVar3 + 0x20) = local_80;
    *(undefined8 *)(puVar3 + 0x30) = local_70;
    local_98 = 1;
    local_c8[0] = puVar3;
    (*param_5)(local_c8);
    _swift_release(puVar1);
    FUN_100102518(local_c8);
  }
  return;
}

