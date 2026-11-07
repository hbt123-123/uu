// rea decompile_all
// name: FUN_100215e9c
// address: 0x100215e9c
// body: available
// range: 0x100215e9c-0x100215fbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100215e9c(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _swift_beginAccess(param_1 + 0x40,&local_f0,0x21,0);
  FUN_10004bb5c(&local_190,param_2 & 0xffffffff000000ff,param_3);
  _swift_endAccess(&local_f0);
  uStack_88 = uStack_128;
  local_90 = local_130;
  uStack_78 = uStack_118;
  uStack_80 = uStack_120;
  uStack_68 = uStack_108;
  local_70 = local_110;
  uStack_58 = uStack_f8;
  uStack_60 = uStack_100;
  uStack_c8 = uStack_168;
  local_d0 = local_170;
  uStack_b8 = uStack_158;
  uStack_c0 = uStack_160;
  uStack_a8 = uStack_148;
  local_b0 = local_150;
  uStack_98 = uStack_138;
  uStack_a0 = uStack_140;
  uStack_e8 = uStack_188;
  local_f0 = local_190;
  uStack_d8 = uStack_178;
  uStack_e0 = uStack_180;
  FUN_100040bb4(&local_f0,&DAT_100a7cf30,&DAT_100811970);
  _swift_beginAccess(param_1 + 0x48,&local_190,0x21,0);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _swift_isUniquelyReferenced_nonNull_native(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0x8000000000000000;
  FUN_10006281c(param_4,param_2 & 0xffffffff000000ff,param_3,uVar1);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  _swift_endAccess(&local_190);
  return;
}

