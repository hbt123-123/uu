// rea decompile_all
// name: FUN_1000fe3fc
// address: 0x1000fe3fc
// body: available
// range: 0x1000fe3fc-0x1000fe647 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000fe3fc(ulong param_1,undefined8 param_2,code *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_e0 [16];
  undefined8 *local_d0;
  undefined *local_c0 [3];
  undefined *local_a8;
  code *local_a0;
  code *local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  puVar1 = *(undefined8 **)(DAT_100b360a8 + 0x90);
  FUN_1001e4b60();
  FUN_1001e66c4(param_1,param_2,puVar1);
  _swift_bridgeObjectRelease();
  if ((param_1 >> 0x20 & 1) == 0) {
    FUN_1005dc5d4();
    uVar7 = *puVar1;
    uVar8 = puVar1[1];
    uVar4 = puVar1[2];
    uVar6 = puVar1[3];
    uVar5 = puVar1[4];
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar5);
  }
  else if ((int)param_1 == 0) {
    uVar4 = 0x800000010088a4f0;
    uVar5 = 0xafa89ce598ade58d;
    uVar6 = 0xb8e49dafe89abce4;
    uVar7 = 1;
    uVar8 = 0xd000000000000011;
  }
  else {
    uVar4 = 0x800000010088a4b0;
    uVar5 = 0x800000010088a4d0;
    uVar8 = 0xd000000000000017;
    uVar6 = 0x1000000000000018;
    uVar7 = 2;
  }
  local_88 = uVar7;
  uStack_80 = uVar8;
  local_78 = uVar4;
  uStack_70 = uVar6;
  local_68 = uVar5;
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_d0 = &local_88;
  pcVar2 = FUN_100103044;
  FUN_1003fb48c(FUN_100103044,auStack_e0,0xd000000000000094,0x800000010088a280,0xd00000000000001e,
                0x800000010088a320,0xa7,0);
  local_a8 = &DAT_1009d98f8;
  FUN_10010304c();
  local_a0 = pcVar2;
  FUN_10010308c();
  puVar3 = &DAT_10099cfe0;
  local_98 = pcVar2;
  _swift_allocObject(&DAT_10099cfe0,0x38,7);
  *(undefined8 *)(puVar3 + 0x18) = uStack_80;
  *(undefined8 *)(puVar3 + 0x10) = local_88;
  *(undefined8 *)(puVar3 + 0x28) = uStack_70;
  *(undefined8 *)(puVar3 + 0x20) = local_78;
  *(undefined8 *)(puVar3 + 0x30) = local_68;
  local_90 = 1;
  local_c0[0] = puVar3;
  (*param_3)(local_c0);
  FUN_100102518(local_c0);
  return;
}

